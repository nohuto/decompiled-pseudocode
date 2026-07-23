/*
 * XREFs of CmFcManagerDrainAllFeatureUsageNotifications @ 0x14087DC14
 * Callers:
 *     CmFcShutdownSystem @ 0x14086B2E4 (CmFcShutdownSystem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x1407CAF10 (CmFcpManagerDrainUsageNotifications.c)
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
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C48288, 0LL);
  CmFcpManagerDrainUsageNotifications((__int64)CmFcSystemManager, 1, v1);
  CmFcpManagerDrainUsageNotifications((__int64)CmFcSystemManager, 1, v2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C48288, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&stru_140C48288);
  KeAbPostRelease((ULONG_PTR)&stru_140C48288);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v3, v4, v5);
}
