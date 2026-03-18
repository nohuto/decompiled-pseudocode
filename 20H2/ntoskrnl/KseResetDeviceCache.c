/*
 * XREFs of KseResetDeviceCache @ 0x1408C1D8C
 * Callers:
 *     KseQueryDeviceData @ 0x140758560 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x1408C1C20 (KseQueryDeviceDataList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KsepCacheReset @ 0x1408C38FC (KsepCacheReset.c)
 */

__int64 KseResetDeviceCache()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v1; // rcx
  volatile signed __int64 *v2; // rdi

  if ( dword_140C50464 == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    v1 = qword_140C504A8;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v1, 0LL);
    KsepCacheReset(qword_140C504A8);
    v2 = (volatile signed __int64 *)qword_140C504A8;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C504A8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return 0LL;
}
