/*
 * XREFs of MiFinishHoldingDirtyFaults @ 0x14053ED44
 * Callers:
 *     MiReleaseHotPatchResources @ 0x1408CE5AC (MiReleaseHotPatchResources.c)
 * Callees:
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 */

char __fastcall MiFinishHoldingDirtyFaults(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *Process; // rsi
  LONG *SharedVm; // rbx
  KIRQL v5; // al
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // rax

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]);
  v5 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v6 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v7 = (_QWORD *)a1[1], (_QWORD *)*v7 != a1) )
LABEL_9:
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessorsPadding[6], v5);
  v8 = a1 + 4;
  while ( 1 )
  {
    v9 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 == v8 )
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( (_QWORD *)v9[1] != v8 )
      goto LABEL_9;
    v10 = *v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 )
      goto LABEL_9;
    *v8 = v10;
    *(_QWORD *)(v10 + 8) = v8;
    KeSetEvent((PRKEVENT)(v9 + 2), 0, 0);
  }
}
