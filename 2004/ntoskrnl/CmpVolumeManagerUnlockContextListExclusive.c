/*
 * XREFs of CmpVolumeManagerUnlockContextListExclusive @ 0x1407C1AD8
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x14063A1A4 (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 */

char __fastcall CmpVolumeManagerUnlockContextListExclusive(volatile signed __int64 *BugCheckParameter2)
{
  char v2; // al

  v2 = _InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
