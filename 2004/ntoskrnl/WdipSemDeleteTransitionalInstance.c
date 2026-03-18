/*
 * XREFs of WdipSemDeleteTransitionalInstance @ 0x140776340
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x14064CAE0 (WdipTimeoutCheckRoutine.c)
 *     WdipSemDisableScenario @ 0x140776F70 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x1407771FC (WdipSemEnableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     WdipSemFastFree @ 0x1407765B4 (WdipSemFastFree.c)
 */

__int64 __fastcall WdipSemDeleteTransitionalInstance(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1C3B8, 0LL);
  v3 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v4 = (_QWORD *)a1[1], (_QWORD *)*v4 != a1) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  --dword_140C1C3B0;
  ExReleasePushLockEx((ULONG_PTR)&qword_140C1C3B8, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return WdipSemFastFree(3LL, a1);
}
