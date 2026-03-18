/*
 * XREFs of IopAllocateGenericTableEntry @ 0x140933B80
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(256LL, ByteSize, 1700032329LL);
}
