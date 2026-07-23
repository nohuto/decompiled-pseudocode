/*
 * XREFs of PiPnpRtlOperationAllocateGenericTableEntry @ 0x1406E14F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PiPnpRtlOperationAllocateGenericTableEntry(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x41706E50u);
}
