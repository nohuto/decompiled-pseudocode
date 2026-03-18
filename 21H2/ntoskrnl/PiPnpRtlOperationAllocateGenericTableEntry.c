/*
 * XREFs of PiPnpRtlOperationAllocateGenericTableEntry @ 0x1406D2240
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlOperationAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(256LL, ByteSize, 1097887312LL);
}
