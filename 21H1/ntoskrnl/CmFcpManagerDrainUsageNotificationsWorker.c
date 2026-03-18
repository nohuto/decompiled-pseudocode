/*
 * XREFs of CmFcpManagerDrainUsageNotificationsWorker @ 0x140879F40
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x1407B4F90 (CmFcpManagerDrainUsageNotifications.c)
 */

_QWORD *__fastcall CmFcpManagerDrainUsageNotificationsWorker(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v4; // rsi
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (volatile signed __int64 *)(a2 + 328);
  ExAcquirePushLockExclusiveEx(a2 + 328, 0LL);
  CmFcpManagerDrainUsageNotifications(a2, 0, v5);
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
}
