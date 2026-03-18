/*
 * XREFs of MiLockWorkingSetExclusive @ 0x14054DCE0
 * Callers:
 *     MiDeleteTopLevelSessionMapping @ 0x1403F2C00 (MiDeleteTopLevelSessionMapping.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1403F32D4 (MiDeleteEmptyPageTableCommit.c)
 * Callees:
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
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
