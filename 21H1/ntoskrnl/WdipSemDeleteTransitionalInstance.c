/*
 * XREFs of WdipSemDeleteTransitionalInstance @ 0x140773F30
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x1406E15C0 (WdipTimeoutCheckRoutine.c)
 *     WdipSemDisableScenario @ 0x140774B60 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140774DEC (WdipSemEnableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     WdipSemFastFree @ 0x1407741A4 (WdipSemFastFree.c)
 */

__int64 __fastcall WdipSemDeleteTransitionalInstance(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1A538, 0LL);
  v3 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v4 = (_QWORD *)a1[1], (_QWORD *)*v4 != a1) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  --dword_140C1A530;
  ExReleasePushLockEx((ULONG_PTR)&qword_140C1A538, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
  return WdipSemFastFree(3LL, a1);
}
