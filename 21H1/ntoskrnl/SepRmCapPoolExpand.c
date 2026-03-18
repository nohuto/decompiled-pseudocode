/*
 * XREFs of SepRmCapPoolExpand @ 0x140592260
 * Callers:
 *     SepReadAndPopulateCapes @ 0x1407B819C (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x140921124 (SepReadAndInsertCaps.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SepRmCapPoolExpand(void *a1, SIZE_T a2)
{
  ExFreePoolWithTag(a1, 0x70536553u);
  return ExAllocatePoolWithTag(PagedPool, a2, 0x70536553u);
}
