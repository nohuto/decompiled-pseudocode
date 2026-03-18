/*
 * XREFs of MiFreeSlabPage @ 0x14023B354
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 * Callees:
 *     MiEnumerateSlabAllocators @ 0x14023B3C8 (MiEnumerateSlabAllocators.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 */

__int64 __fastcall MiFreeSlabPage(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  v2 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v3 = MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
  return MiEnumerateSlabAllocators(v2, MiFreePageToSlabAllocator, a1, *(unsigned int *)(v3 + 8));
}
