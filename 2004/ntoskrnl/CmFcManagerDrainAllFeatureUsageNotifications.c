/*
 * XREFs of CmFcManagerDrainAllFeatureUsageNotifications @ 0x14087A5A4
 * Callers:
 *     CmFcShutdownSystem @ 0x140867B34 (CmFcShutdownSystem.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x1407B8100 (CmFcpManagerDrainUsageNotifications.c)
 */

_QWORD *CmFcManagerDrainAllFeatureUsageNotifications()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // r8
  __int64 v2; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C48088, 0LL);
  CmFcpManagerDrainUsageNotifications((__int64)CmFcSystemManager, 1, v1);
  CmFcpManagerDrainUsageNotifications((__int64)CmFcSystemManager, 1, v2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C48088, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C48088);
  KeAbPostRelease((ULONG_PTR)&stru_140C48088);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
