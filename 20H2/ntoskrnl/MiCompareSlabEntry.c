/*
 * XREFs of MiCompareSlabEntry @ 0x140379A58
 * Callers:
 *     MiFreeSlabEntries @ 0x1403181C0 (MiFreeSlabEntries.c)
 *     MiFreePageToSlabAllocator @ 0x140375520 (MiFreePageToSlabAllocator.c)
 *     MiCheckSlabPage @ 0x14037CD40 (MiCheckSlabPage.c)
 *     MiInsertSlabEntry @ 0x140399C5C (MiInsertSlabEntry.c)
 *     MiGetSlabStandbyListWorker @ 0x140551490 (MiGetSlabStandbyListWorker.c)
 *     MiUpdateSlabRangeProtectionHelper @ 0x140A95A90 (MiUpdateSlabRangeProtectionHelper.c)
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
