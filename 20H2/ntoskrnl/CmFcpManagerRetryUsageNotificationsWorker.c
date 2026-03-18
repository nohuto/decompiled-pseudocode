/*
 * XREFs of CmFcpManagerRetryUsageNotificationsWorker @ 0x140880F30
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x1407C6990 (CmFcpManagerDrainUsageNotifications.c)
 */

_QWORD *__fastcall CmFcpManagerRetryUsageNotificationsWorker(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (volatile signed __int64 *)(a2 + 328);
  ExAcquirePushLockExclusiveEx(a2 + 328, 0LL);
  *(_BYTE *)(a2 + 337) = 0;
  CmFcpManagerDrainUsageNotifications(a2, 1, v5);
  CmFcpManagerDrainUsageNotifications(a2, 1, v6);
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
