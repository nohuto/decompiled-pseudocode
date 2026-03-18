/*
 * XREFs of WdipSemActivateInstance @ 0x1407750BC
 * Callers:
 *     WdipSemDisableScenario @ 0x140774B60 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140774DEC (WdipSemEnableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 */

_QWORD *__fastcall WdipSemActivateInstance(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1A538, 0LL);
  *(_DWORD *)(a1 + 44) = 0;
  ExReleasePushLockEx((ULONG_PTR)&qword_140C1A538, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v3, v4, v5);
}
