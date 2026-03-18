/*
 * XREFs of KsepCacheUnlock @ 0x1408BC948
 * Callers:
 *     KseQueryDeviceDataList @ 0x1408BABA0 (KseQueryDeviceDataList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall KsepCacheUnlock(volatile signed __int64 *BugCheckParameter2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v2, v3, v4);
}
