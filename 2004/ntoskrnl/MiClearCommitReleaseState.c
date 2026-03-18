/*
 * XREFs of MiClearCommitReleaseState @ 0x140526008
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1405FE978 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiClearCommitReleaseState(__int64 a1)
{
  LONG *SharedVm; // rbx
  KIRQL v3; // al

  SharedVm = MiGetSharedVm(a1);
  v3 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  *(_BYTE *)(a1 + 187) &= 0x9Fu;
  MiUnlockWorkingSetExclusive(a1, v3);
}
