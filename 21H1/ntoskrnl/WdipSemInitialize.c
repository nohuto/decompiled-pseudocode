/*
 * XREFs of WdipSemInitialize @ 0x140784BAC
 * Callers:
 *     EtwpInitialize @ 0x140A46B98 (EtwpInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     WdipSemCleanStart @ 0x140784C00 (WdipSemCleanStart.c)
 *     WdipSemInitializeGlobalState @ 0x140786698 (WdipSemInitializeGlobalState.c)
 */

_QWORD *WdipSemInitialize()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  WdipSemInitializeGlobalState();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  WdipSemCleanStart();
  ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v1, v2, v3);
}
