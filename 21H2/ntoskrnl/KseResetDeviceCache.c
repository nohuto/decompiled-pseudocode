/*
 * XREFs of KseResetDeviceCache @ 0x1408BF54C
 * Callers:
 *     KseQueryDeviceData @ 0x14075F420 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x1408BF3E0 (KseQueryDeviceDataList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KsepCacheReset @ 0x1408C10BC (KsepCacheReset.c)
 */

__int64 KseResetDeviceCache()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v1; // rcx
  ULONG_PTR v2; // rdi

  if ( dword_140C505E4 == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    v1 = qword_140C50628;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v1, 0LL);
    KsepCacheReset(qword_140C50628);
    v2 = qword_140C50628;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C50628, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease(v2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return 0LL;
}
