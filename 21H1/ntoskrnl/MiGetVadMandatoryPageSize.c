/*
 * XREFs of MiGetVadMandatoryPageSize @ 0x14027ABC0
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x14027A0D0 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x14028FD10 (NtGetWriteWatch.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402A44AC (MiCaptureWriteWatchDirtyBit.c)
 *     NtResetWriteWatch @ 0x14062DC10 (NtResetWriteWatch.c)
 *     MiCreateWriteWatchView @ 0x1406CED18 (MiCreateWriteWatchView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadMandatoryPageSize(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rcx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = (v1 >> 18) & 3;
  if ( (unsigned __int64)MiVadPageSizes[v2] >= 0x200 || (v1 & 0x400000) != 0 )
    return MiVadPageSizes[v2];
  else
    return 1LL;
}
