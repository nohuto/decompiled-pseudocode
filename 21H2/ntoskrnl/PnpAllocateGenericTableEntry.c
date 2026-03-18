/*
 * XREFs of PnpAllocateGenericTableEntry @ 0x1406E9100
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(256LL, ByteSize, 1970499664LL);
}
