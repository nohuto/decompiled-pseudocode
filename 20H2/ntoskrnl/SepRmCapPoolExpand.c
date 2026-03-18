/*
 * XREFs of SepRmCapPoolExpand @ 0x1405963F0
 * Callers:
 *     SepReadAndPopulateCapes @ 0x1407C9B9C (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1409281FC (SepReadAndInsertCaps.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

PVOID __fastcall SepRmCapPoolExpand(void *a1, SIZE_T a2)
{
  ExFreePoolWithTag(a1, 0x70536553u);
  return ExAllocatePoolWithTag(PagedPool, a2, 0x70536553u);
}
