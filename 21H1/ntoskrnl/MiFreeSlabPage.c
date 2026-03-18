/*
 * XREFs of MiFreeSlabPage @ 0x140379234
 * Callers:
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     MiEnumerateSlabAllocators @ 0x140306AE0 (MiEnumerateSlabAllocators.c)
 */

__int64 __fastcall MiFreeSlabPage(__int64 a1)
{
  return MiEnumerateSlabAllocators(
           *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)),
           (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiFreePageToSlabAllocator,
           a1);
}
