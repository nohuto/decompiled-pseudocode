/*
 * XREFs of MiFreeSlabPage @ 0x14037BE0C
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 * Callees:
 *     MiEnumerateSlabAllocators @ 0x140315944 (MiEnumerateSlabAllocators.c)
 */

__int64 __fastcall MiFreeSlabPage(__int64 a1)
{
  return MiEnumerateSlabAllocators(
           *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)),
           (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiFreePageToSlabAllocator,
           a1);
}
