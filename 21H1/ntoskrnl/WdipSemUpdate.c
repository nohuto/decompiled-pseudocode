/*
 * XREFs of WdipSemUpdate @ 0x14092B2A4
 * Callers:
 *     WdiUpdateSem @ 0x14059FA30 (WdiUpdateSem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     WdipSemCleanStart @ 0x140784C00 (WdipSemCleanStart.c)
 *     WdipSemInitializeGlobalState @ 0x140786698 (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x14092B560 (WdipSemShutdown.c)
 */

__int64 WdipSemUpdate()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( !WdipSemInitialized )
    WdipSemInitializeGlobalState();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  if ( WdipSemEnabled )
    WdipSemShutdown();
  v1 = WdipSemCleanStart();
  ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v2, v3, v4);
  return v1;
}
