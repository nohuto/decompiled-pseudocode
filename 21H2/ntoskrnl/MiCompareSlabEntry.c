/*
 * XREFs of MiCompareSlabEntry @ 0x140379C58
 * Callers:
 *     MiFreeSlabEntries @ 0x1402BA910 (MiFreeSlabEntries.c)
 *     MiFreePageToSlabAllocator @ 0x140375730 (MiFreePageToSlabAllocator.c)
 *     MiCheckSlabPage @ 0x14037CFD0 (MiCheckSlabPage.c)
 *     MiInsertSlabEntry @ 0x14039A0CC (MiInsertSlabEntry.c)
 *     MiGetSlabStandbyListWorker @ 0x140552F60 (MiGetSlabStandbyListWorker.c)
 *     MiUpdateSlabRangeProtectionHelper @ 0x140A92900 (MiUpdateSlabRangeProtectionHelper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCompareSlabEntry(_QWORD *a1, __int64 a2)
{
  if ( *a1 <= *(_QWORD *)(a2 + 32) )
    return (unsigned int)-(*a1 < *(_QWORD *)(a2 + 24));
  else
    return 1LL;
}
