/*
 * XREFs of MiCountCommittedPages @ 0x140543E88
 * Callers:
 *     MiLoadDataIntoVsmEnclave @ 0x1408CE874 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408CEC20 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiComputePageCommitment @ 0x1402AD4B0 (MiComputePageCommitment.c)
 */

__int64 __fastcall MiCountCommittedPages(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v8; // r9
  unsigned __int8 v9; // di
  __int64 v10; // rbx

  LOBYTE(v8) = MiLockWorkingSetShared(a4);
  v9 = v8;
  v10 = MiComputePageCommitment(a1, a2, a3, v8, 0, 0LL);
  MiUnlockWorkingSetShared(a4, v9);
  return v10;
}
