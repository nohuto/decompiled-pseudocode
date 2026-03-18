/*
 * XREFs of CmFcManagerDrainAllFeatureUsageNotifications @ 0x1408792B4
 * Callers:
 *     CmFcShutdownSystem @ 0x1408667F0 (CmFcShutdownSystem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x1407B4F90 (CmFcpManagerDrainUsageNotifications.c)
 */

_QWORD *CmFcManagerDrainAllFeatureUsageNotifications()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // r8
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C48208, 0LL);
  CmFcpManagerDrainUsageNotifications((__int64)CmFcSystemManager, 1, v1);
  CmFcpManagerDrainUsageNotifications((__int64)CmFcSystemManager, 1, v2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C48208, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&stru_140C48208);
  KeAbPostRelease((ULONG_PTR)&stru_140C48208);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v3, v4, v5);
}
