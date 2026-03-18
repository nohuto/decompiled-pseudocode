/*
 * XREFs of WdipSemDeleteTransitionalInstance @ 0x140784940
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x1406F3CC0 (WdipTimeoutCheckRoutine.c)
 *     WdipSemDisableScenario @ 0x140785570 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x1407857FC (WdipSemEnableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     WdipSemFastFree @ 0x140784BB4 (WdipSemFastFree.c)
 */

__int64 __fastcall WdipSemDeleteTransitionalInstance(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1A1F8, 0LL);
  v3 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v4 = (_QWORD *)a1[1], (_QWORD *)*v4 != a1) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  --dword_140C1A1F0;
  ExReleasePushLockEx((ULONG_PTR)&qword_140C1A1F8, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return WdipSemFastFree(3LL, a1);
}
