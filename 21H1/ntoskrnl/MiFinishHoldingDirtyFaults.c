/*
 * XREFs of MiFinishHoldingDirtyFaults @ 0x140538FE4
 * Callers:
 *     MiReleaseHotPatchResources @ 0x1408C9AFC (MiReleaseHotPatchResources.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MiFinishHoldingDirtyFaults(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *Process; // rsi
  LONG *SharedVm; // rbx
  KIRQL v5; // al
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx
  __int64 v13; // rax

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
  v11 = a1 + 4;
  while ( 1 )
  {
    v12 = (_QWORD *)*v11;
    if ( (_QWORD *)*v11 == v11 )
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v8, v9, v10);
    if ( (_QWORD *)v12[1] != v11 )
      goto LABEL_9;
    v13 = *v12;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 )
      goto LABEL_9;
    *v11 = v13;
    *(_QWORD *)(v13 + 8) = v11;
    KeSetEvent((PRKEVENT)(v12 + 2), 0, 0);
  }
}
