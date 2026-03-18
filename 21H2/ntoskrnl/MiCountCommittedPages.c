/*
 * XREFs of MiCountCommittedPages @ 0x1405A8968
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x140979274 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x14097A358 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14097A714 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiComputePageCommitment @ 0x14028EDD0 (MiComputePageCommitment.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MiCountCommittedPages(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  char v8; // di
  __int64 v9; // rbx

  v8 = MiLockWorkingSetShared(a4);
  v9 = MiComputePageCommitment(a1, a2, a3, v8, 0, 0LL, 0LL);
  MiUnlockWorkingSetShared(a4, v8);
  return v9;
}
