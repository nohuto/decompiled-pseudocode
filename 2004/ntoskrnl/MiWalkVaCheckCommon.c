/*
 * XREFs of MiWalkVaCheckCommon @ 0x14032DAC4
 * Callers:
 *     MiEmptyWorkingSetHelper @ 0x14032D8D4 (MiEmptyWorkingSetHelper.c)
 *     MiSimpleAgePte @ 0x1405367F0 (MiSimpleAgePte.c)
 *     MiUpdateOldPte @ 0x1405370E0 (MiUpdateOldPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPageTableLocked @ 0x14032E7BC (MiIsPageTableLocked.c)
 *     MiDemoteCombinedPte @ 0x140368FD0 (MiDemoteCombinedPte.c)
 */

__int64 __fastcall MiWalkVaCheckCommon(__int64 a1, unsigned __int64 a2, _QWORD *a3, int a4, __int64 *a5)
{
  __int64 v9; // r8

  if ( !a4 && ((a3[3] & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned int)MiIsPageTableLocked(a1, a2)) )
    return 0LL;
  if ( (a3[5] & 0x1000000000LL) == 0 )
  {
    v9 = a3[1];
    if ( v9 > 0 && (unsigned int)MiDemoteCombinedPte(a1, a2, v9 | 0x8000000000000000uLL) == 1 )
      *a5 = MI_READ_PTE_LOCK_FREE(a2);
  }
  return 1LL;
}
