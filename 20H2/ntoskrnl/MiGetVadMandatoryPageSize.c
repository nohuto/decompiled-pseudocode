/*
 * XREFs of MiGetVadMandatoryPageSize @ 0x14022FFE0
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x14022F4F0 (MiMoveDirtyBitsToPfns.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402309EC (MiCaptureWriteWatchDirtyBit.c)
 *     NtGetWriteWatch @ 0x1402AFA60 (NtGetWriteWatch.c)
 *     NtResetWriteWatch @ 0x140624640 (NtResetWriteWatch.c)
 *     MiCreateWriteWatchView @ 0x1406C3AA4 (MiCreateWriteWatchView.c)
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
