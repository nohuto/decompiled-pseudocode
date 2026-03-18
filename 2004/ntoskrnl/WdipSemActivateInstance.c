/*
 * XREFs of WdipSemActivateInstance @ 0x1407774CC
 * Callers:
 *     WdipSemDisableScenario @ 0x140776F70 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x1407771FC (WdipSemEnableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *__fastcall WdipSemActivateInstance(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1C3B8, 0LL);
  *(_DWORD *)(a1 + 44) = 0;
  ExReleasePushLockEx((ULONG_PTR)&qword_140C1C3B8, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
