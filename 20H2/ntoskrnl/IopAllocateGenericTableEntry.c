/*
 * XREFs of IopAllocateGenericTableEntry @ 0x140893860
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IopAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x65546F49u);
}
