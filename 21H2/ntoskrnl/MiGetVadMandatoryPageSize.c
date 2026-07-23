/*
 * XREFs of MiGetVadMandatoryPageSize @ 0x140322CD0
 * Callers:
 *     MiCaptureWriteWatchDirtyBit @ 0x14027C6CC (MiCaptureWriteWatchDirtyBit.c)
 *     MiMoveDirtyBitsToPfns @ 0x1403221E0 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1403373A0 (NtGetWriteWatch.c)
 *     MiCreateWriteWatchView @ 0x1405FE7B0 (MiCreateWriteWatchView.c)
 *     NtResetWriteWatch @ 0x140704430 (NtResetWriteWatch.c)
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
