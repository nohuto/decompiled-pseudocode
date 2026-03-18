/*
 * XREFs of WdipSemInitialize @ 0x1407A98B4
 * Callers:
 *     EtwpInitialize @ 0x140A68D10 (EtwpInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     WdipSemCleanStart @ 0x1407A9908 (WdipSemCleanStart.c)
 *     WdipSemInitializeGlobalState @ 0x1407AB3A0 (WdipSemInitializeGlobalState.c)
 */

_QWORD *WdipSemInitialize()
{
  struct _KTHREAD *CurrentThread; // rax

  WdipSemInitializeGlobalState();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  WdipSemCleanStart();
  ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
