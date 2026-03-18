/*
 * XREFs of MiCompareSlabEntry @ 0x140248F48
 * Callers:
 *     MiFreePageToSlabAllocator @ 0x14023BE50 (MiFreePageToSlabAllocator.c)
 *     MiCheckSlabPage @ 0x1403B1DEC (MiCheckSlabPage.c)
 *     MiInsertSlabEntry @ 0x1403C2B24 (MiInsertSlabEntry.c)
 *     MiGetSlabStandbyListWorker @ 0x1405B11A0 (MiGetSlabStandbyListWorker.c)
 *     MiPurgeSlabEntries @ 0x1405B1568 (MiPurgeSlabEntries.c)
 *     MiUpdateSlabRangeTypeHelper @ 0x140B524A0 (MiUpdateSlabRangeTypeHelper.c)
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
