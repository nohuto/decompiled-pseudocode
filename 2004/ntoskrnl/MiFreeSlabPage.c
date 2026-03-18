/*
 * XREFs of MiFreeSlabPage @ 0x14037A0DC
 * Callers:
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     MiEnumerateSlabAllocators @ 0x1403448E4 (MiEnumerateSlabAllocators.c)
 */

__int64 __fastcall MiFreeSlabPage(__int64 a1)
{
  return MiEnumerateSlabAllocators(
           *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)),
           (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiFreePageToSlabAllocator,
           a1);
}
