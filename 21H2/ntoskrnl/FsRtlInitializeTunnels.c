/*
 * XREFs of FsRtlInitializeTunnels @ 0x140B26258
 * Callers:
 *     FsRtlInitSystem @ 0x140B25C04 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializePagedLookasideList @ 0x1406DA090 (ExInitializePagedLookasideList.c)
 *     FsRtlGetTunnelParameterValue @ 0x14085594C (FsRtlGetTunnelParameterValue.c)
 */

void FsRtlInitializeTunnels()
{
  USHORT Depth; // ax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  if ( (_BYTE)dword_140D051DC )
    *(_DWORD *)((char *)&NlsMbCodePageTag + 1) = 1024;
  *(_DWORD *)&ValueName.Length = 2752552;
  ValueName.Buffer = L"MaximumTunnelEntries";
  FsRtlGetTunnelParameterValue(&ValueName, (BOOLEAN **)((char *)&NlsMbCodePageTag + 1));
  *(_DWORD *)&ValueName.Length = 4063292;
  ValueName.Buffer = L"MaximumTunnelEntryAgeInSeconds";
  FsRtlGetTunnelParameterValue(&ValueName, &TunnelMaxAge);
  if ( !TunnelMaxAge )
    *(_DWORD *)((char *)&NlsMbCodePageTag + 1) = 0;
  TunnelMaxAge *= 10000000;
  if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 1) > 0xFFFFu )
  {
    Depth = 256;
  }
  else
  {
    Depth = *(_WORD *)((char *)&NlsMbCodePageTag + 1) >> 4;
    if ( !(*(_WORD *)((char *)&NlsMbCodePageTag + 1) >> 4) )
    {
      if ( !*(_DWORD *)((char *)&NlsMbCodePageTag + 1) )
        goto LABEL_9;
      Depth = *(_WORD *)((char *)&NlsMbCodePageTag + 1) + 1;
    }
    if ( Depth > 0x100u )
      Depth = 256;
  }
LABEL_9:
  ExInitializePagedLookasideList(&TunnelLookasideList, 0LL, 0LL, 0, 0xB0uLL, 0x4C6E7554u, Depth);
}
