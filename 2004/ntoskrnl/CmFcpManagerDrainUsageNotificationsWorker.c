/*
 * XREFs of CmFcpManagerDrainUsageNotificationsWorker @ 0x14087B230
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x1407B8100 (CmFcpManagerDrainUsageNotifications.c)
 */

_QWORD *__fastcall CmFcpManagerDrainUsageNotificationsWorker(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v4; // rsi
  __int64 v5; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (volatile signed __int64 *)(a2 + 328);
  ExAcquirePushLockExclusiveEx(a2 + 328, 0LL);
  CmFcpManagerDrainUsageNotifications(a2, 0, v5);
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
