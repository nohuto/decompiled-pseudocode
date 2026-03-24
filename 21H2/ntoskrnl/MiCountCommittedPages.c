/*
 * XREFs of MiCountCommittedPages @ 0x1405499A8
 * Callers:
 *     MiLoadDataIntoVsmEnclave @ 0x1408D31C4 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D3570 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiComputePageCommitment @ 0x14030CB60 (MiComputePageCommitment.c)
 */

__int64 __fastcall MiCountCommittedPages(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  __int16 v8; // r9
  unsigned __int8 v9; // di
  __int64 v10; // rbx

  LOBYTE(v8) = MiLockWorkingSetShared((__int64)a4, a2, a3, a4);
  v9 = v8;
  v10 = MiComputePageCommitment(a1, a2, a3, v8, 0, 0LL);
  MiUnlockWorkingSetShared((__int64)a4, v9);
  return v10;
}
