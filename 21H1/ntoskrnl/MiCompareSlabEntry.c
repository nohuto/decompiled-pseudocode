/*
 * XREFs of MiCompareSlabEntry @ 0x140376CB8
 * Callers:
 *     MiFreeSlabEntries @ 0x140308F00 (MiFreeSlabEntries.c)
 *     MiFreePageToSlabAllocator @ 0x140372050 (MiFreePageToSlabAllocator.c)
 *     MiCheckSlabPage @ 0x14037A290 (MiCheckSlabPage.c)
 *     MiInsertSlabEntry @ 0x140396BCC (MiInsertSlabEntry.c)
 *     MiGetSlabStandbyListWorker @ 0x14054D470 (MiGetSlabStandbyListWorker.c)
 *     MiUpdateSlabRangeProtectionHelper @ 0x140A907A0 (MiUpdateSlabRangeProtectionHelper.c)
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
