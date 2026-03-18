/*
 * XREFs of CmFcpManagerSoftwareHiveReady @ 0x1407C6900
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x1407C6990 (CmFcpManagerDrainUsageNotifications.c)
 */

_QWORD *__fastcall CmFcpManagerSoftwareHiveReady(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v3; // rdi
  char v4; // si

  *(_BYTE *)(a1 + 336) = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (volatile signed __int64 *)(a1 + 328);
  ExAcquirePushLockExclusiveEx(a1 + 328, 0LL);
  CmFcpManagerDrainUsageNotifications(a1, 0LL);
  CmFcpManagerDrainUsageNotifications(a1, 0LL);
  v4 = _InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
