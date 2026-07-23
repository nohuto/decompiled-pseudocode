/*
 * XREFs of MiBeginHoldingDirtyFaults @ 0x14053E470
 * Callers:
 *     MiPerformImageHotPatch @ 0x1408CD024 (MiPerformImageHotPatch.c)
 * Callees:
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiMoveDirtyBitsToPfns @ 0x1403221E0 (MiMoveDirtyBitsToPfns.c)
 */

__int64 __fastcall MiBeginHoldingDirtyFaults(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbp
  LONG *SharedVm; // rbx
  KIRQL v7; // al
  __int64 v8; // rdi
  _QWORD *v9; // rcx

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  SharedVm = MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]);
  v7 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v8 = a1 + 24;
  v9 = *(_QWORD **)(v8 + 8);
  if ( *v9 != v8 )
    __fastfail(3u);
  a2[1] = v9;
  *a2 = v8;
  *v9 = a2;
  *(_QWORD *)(v8 + 8) = a2;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessorsPadding[6], v7);
  return MiMoveDirtyBitsToPfns(a2[2], a2[3], 0LL, 0);
}
