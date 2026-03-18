/*
 * XREFs of KseResetDeviceCache @ 0x1408BAD0C
 * Callers:
 *     KseQueryDeviceData @ 0x140747E00 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x1408BABA0 (KseQueryDeviceDataList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KsepCacheReset @ 0x1408BC87C (KsepCacheReset.c)
 */

__int64 KseResetDeviceCache()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v1; // rcx
  ULONG_PTR v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  if ( dword_140C50514 == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    v1 = qword_140C50558;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v1, 0LL);
    KsepCacheReset(qword_140C50558);
    v2 = qword_140C50558;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C50558, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease(v2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v3, v4, v5);
  }
  return 0LL;
}
