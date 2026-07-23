/*
 * XREFs of FsRtlInitializeTunnels @ 0x140A6D04C
 * Callers:
 *     FsRtlInitSystem @ 0x140A6C9E0 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializePagedLookasideList @ 0x1406BFA10 (ExInitializePagedLookasideList.c)
 *     FsRtlGetTunnelParameterValue @ 0x1407C6C64 (FsRtlGetTunnelParameterValue.c)
 */

void FsRtlInitializeTunnels()
{
  USHORT Depth; // ax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  if ( (_BYTE)dword_140CFB19C )
    TunnelMaxEntries = 1024;
  *(_DWORD *)&ValueName.Length = 2752552;
  ValueName.Buffer = L"MaximumTunnelEntries";
  FsRtlGetTunnelParameterValue(&ValueName, &TunnelMaxEntries);
  *(_DWORD *)&ValueName.Length = 4063292;
  ValueName.Buffer = L"MaximumTunnelEntryAgeInSeconds";
  FsRtlGetTunnelParameterValue(&ValueName, &TunnelMaxAge);
  if ( !TunnelMaxAge )
    TunnelMaxEntries = 0;
  TunnelMaxAge *= 10000000;
  if ( (unsigned int)TunnelMaxEntries > 0xFFFF )
  {
    Depth = 256;
  }
  else
  {
    Depth = (unsigned __int16)TunnelMaxEntries >> 4;
    if ( !((unsigned __int16)TunnelMaxEntries >> 4) )
    {
      if ( !TunnelMaxEntries )
        goto LABEL_9;
      Depth = TunnelMaxEntries + 1;
    }
    if ( Depth > 0x100u )
      Depth = 256;
  }
LABEL_9:
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)&TunnelLookasideList, 0LL, 0LL, 0, 0xB0uLL, 0x4C6E7554u, Depth);
}
