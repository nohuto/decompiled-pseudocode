/*
 * XREFs of VrpDecrementSiloCount @ 0x1408851BC
 * Callers:
 *     VrpJobContextDelete @ 0x140885240 (VrpJobContextDelete.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     CmUnRegisterCallback @ 0x14086BFE0 (CmUnRegisterCallback.c)
 */

_QWORD *VrpDecrementSiloCount()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&VrpActiveSilosLock, 0LL);
  if ( !--VrpNumActiveSilos )
    CmUnRegisterCallback(VrpCallbackCookie);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VrpActiveSilosLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&VrpActiveSilosLock);
  KeAbPostRelease((ULONG_PTR)&VrpActiveSilosLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
