/*
 * XREFs of MiLocateOldestSecure @ 0x14037DF38
 * Callers:
 *     MiUnmapLockedPagesInUserSpace @ 0x140769C5C (MiUnmapLockedPagesInUserSpace.c)
 * Callees:
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 */

_QWORD *__fastcall MiLocateOldestSecure(__int64 a1)
{
  _QWORD *v2; // rsi
  _KPROCESS *Process; // rbp
  LONG *SharedVm; // rbx
  KIRQL v5; // al
  _QWORD *i; // rdx

  v2 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]);
  v5 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  for ( i = *(_QWORD **)(a1 + 56); i; i = (_QWORD *)*i )
    v2 = i;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessorsPadding[6], v5);
  return v2;
}
