/*
 * XREFs of PiSwAllocateGenericTableEntry @ 0x1406EB580
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(256LL, ByteSize, 1466986064LL);
}
