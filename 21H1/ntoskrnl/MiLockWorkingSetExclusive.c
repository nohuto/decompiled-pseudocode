/*
 * XREFs of MiLockWorkingSetExclusive @ 0x140549CC0
 * Callers:
 *     MiDeleteTopLevelSessionMapping @ 0x1403ED6D8 (MiDeleteTopLevelSessionMapping.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1403EDB04 (MiDeleteEmptyPageTableCommit.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
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
