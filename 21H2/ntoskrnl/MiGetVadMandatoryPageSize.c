/*
 * XREFs of MiGetVadMandatoryPageSize @ 0x140317F80
 * Callers:
 *     MiCaptureWriteWatchDirtyBit @ 0x14025B15C (MiCaptureWriteWatchDirtyBit.c)
 *     MiMoveDirtyBitsToPfns @ 0x140317490 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x14032C650 (NtGetWriteWatch.c)
 *     MiCreateWriteWatchView @ 0x14069F46C (MiCreateWriteWatchView.c)
 *     NtResetWriteWatch @ 0x1406ED050 (NtResetWriteWatch.c)
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
