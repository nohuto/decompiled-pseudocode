/*
 * XREFs of MiCompareSlabEntry @ 0x1403797A8
 * Callers:
 *     MiFreeSlabEntries @ 0x140238B20 (MiFreeSlabEntries.c)
 *     MiFreePageToSlabAllocator @ 0x140375280 (MiFreePageToSlabAllocator.c)
 *     MiCheckSlabPage @ 0x14037CB20 (MiCheckSlabPage.c)
 *     MiInsertSlabEntry @ 0x14039A21C (MiInsertSlabEntry.c)
 *     MiGetSlabStandbyListWorker @ 0x1405531A0 (MiGetSlabStandbyListWorker.c)
 *     MiUpdateSlabRangeProtectionHelper @ 0x140A93900 (MiUpdateSlabRangeProtectionHelper.c)
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
