/*
 * XREFs of WdipSemActivateInstance @ 0x140785ACC
 * Callers:
 *     WdipSemDisableScenario @ 0x140785570 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x1407857FC (WdipSemEnableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 */

_QWORD *__fastcall WdipSemActivateInstance(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1A1F8, 0LL);
  *(_DWORD *)(a1 + 44) = 0;
  ExReleasePushLockEx((ULONG_PTR)&qword_140C1A1F8, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
