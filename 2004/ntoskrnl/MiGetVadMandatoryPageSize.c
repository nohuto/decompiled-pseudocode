/*
 * XREFs of MiGetVadMandatoryPageSize @ 0x140221B70
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x140221080 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x140236CC0 (NtGetWriteWatch.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14024B47C (MiCaptureWriteWatchDirtyBit.c)
 *     NtResetWriteWatch @ 0x1405F8BD0 (NtResetWriteWatch.c)
 *     MiCreateWriteWatchView @ 0x1406F001C (MiCreateWriteWatchView.c)
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
