/*
 * XREFs of CmFcManagerDrainAllFeatureUsageNotifications @ 0x140880114
 * Callers:
 *     CmFcShutdownSystem @ 0x14086D554 (CmFcShutdownSystem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x1407C6990 (CmFcpManagerDrainUsageNotifications.c)
 */

_QWORD *CmFcManagerDrainAllFeatureUsageNotifications()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // r8
  __int64 v2; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C480E8, 0LL);
  CmFcpManagerDrainUsageNotifications((__int64)CmFcSystemManager, 1, v1);
  CmFcpManagerDrainUsageNotifications((__int64)CmFcSystemManager, 1, v2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C480E8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C480E8);
  KeAbPostRelease((ULONG_PTR)&stru_140C480E8);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
