/*
 * XREFs of MiWalkVaCheckCommon @ 0x140227020
 * Callers:
 *     MiEmptyWorkingSetHelper @ 0x140226EE0 (MiEmptyWorkingSetHelper.c)
 *     MiResetAccessBitPte @ 0x1403C48E0 (MiResetAccessBitPte.c)
 *     MiUpdateOldPte @ 0x14045BDA0 (MiUpdateOldPte.c)
 *     MiSimpleAgePte @ 0x140596EA0 (MiSimpleAgePte.c)
 * Callees:
 *     MiIsPageTableLocked @ 0x140228C50 (MiIsPageTableLocked.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDemoteCombinedPte @ 0x1403336E0 (MiDemoteCombinedPte.c)
 */

__int64 __fastcall MiWalkVaCheckCommon(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  __int64 v8; // r8

  if ( !a4 && ((*(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned int)MiIsPageTableLocked(a1)) )
    return 0LL;
  if ( !_bittest64((const signed __int64 *)(a3 + 40), 0x28u) )
  {
    v8 = *(_QWORD *)(a3 + 8);
    if ( v8 > 0 )
    {
      if ( (unsigned int)MiDemoteCombinedPte(a1, a2, v8 | 0x8000000000000000uLL) )
        *a5 = MI_READ_PTE_LOCK_FREE(a2);
    }
  }
  return 1LL;
}
