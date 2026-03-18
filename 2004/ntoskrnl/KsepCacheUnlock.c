/*
 * XREFs of KsepCacheUnlock @ 0x1408BDC68
 * Callers:
 *     KseQueryDeviceDataList @ 0x1408BBEC0 (KseQueryDeviceDataList.c)
 * Callees:
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall KsepCacheUnlock(volatile signed __int64 *BugCheckParameter2)
{
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
