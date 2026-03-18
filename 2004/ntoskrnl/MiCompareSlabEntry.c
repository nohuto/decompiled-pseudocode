/*
 * XREFs of MiCompareSlabEntry @ 0x140377AC8
 * Callers:
 *     MiFreeSlabEntries @ 0x140346D00 (MiFreeSlabEntries.c)
 *     MiFreePageToSlabAllocator @ 0x140372E60 (MiFreePageToSlabAllocator.c)
 *     MiCheckSlabPage @ 0x14037B010 (MiCheckSlabPage.c)
 *     MiInsertSlabEntry @ 0x1403977DC (MiInsertSlabEntry.c)
 *     MiGetSlabStandbyListWorker @ 0x14054DAC0 (MiGetSlabStandbyListWorker.c)
 *     MiUpdateSlabRangeProtectionHelper @ 0x140A8FD90 (MiUpdateSlabRangeProtectionHelper.c)
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
