/*
 * XREFs of MiLockWorkingSetExclusive @ 0x14054A310
 * Callers:
 *     MiDeleteTopLevelSessionMapping @ 0x1403EE798 (MiDeleteTopLevelSessionMapping.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1403EEE64 (MiDeleteEmptyPageTableCommit.c)
 * Callees:
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall MiLockWorkingSetExclusive(__int64 a1)
{
  LONG *SharedVm; // rbx
  KIRQL result; // al

  SharedVm = MiGetSharedVm(a1);
  result = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  return result;
}
