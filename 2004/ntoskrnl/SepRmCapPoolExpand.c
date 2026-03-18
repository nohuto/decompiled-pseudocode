/*
 * XREFs of SepRmCapPoolExpand @ 0x140592950
 * Callers:
 *     SepReadAndPopulateCapes @ 0x1407BB30C (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x14092219C (SepReadAndInsertCaps.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SepRmCapPoolExpand(void *a1, SIZE_T a2)
{
  ExFreePoolWithTag(a1, 0x70536553u);
  return ExAllocatePoolWithTag(PagedPool, a2, 0x70536553u);
}
