/*
 * XREFs of PiDmAllocateGenericTableEntry @ 0x14076AA30
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PiDmAllocateGenericTableEntry(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x5A706E50u);
}
