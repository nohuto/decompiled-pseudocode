/*
 * XREFs of PopDirectedDripsUmTestDeviceAllocate @ 0x1408F4360
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopDirectedDripsUmTestDeviceAllocate(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x4D554444u);
}
