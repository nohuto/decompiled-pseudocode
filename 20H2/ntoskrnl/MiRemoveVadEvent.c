/*
 * XREFs of MiRemoveVadEvent @ 0x140538C94
 * Callers:
 *     MiMapViewOfImageSection @ 0x140626CE0 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiRemoveVadEvent(__int64 a1, _QWORD *a2)
{
  _KPROCESS *Process; // rbp
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  _QWORD **v7; // rdi
  _QWORD *i; // r8

  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v7 = (_QWORD **)(a1 + 56);
  for ( i = *v7; i != a2; i = (_QWORD *)*i )
    v7 = (_QWORD **)i;
  *v7 = (_QWORD *)*a2;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessorsPadding[6], v6);
}
