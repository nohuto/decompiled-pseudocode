/*
 * XREFs of PopDirectedDripsUmTestDeviceAllocate @ 0x1408F5650
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopDirectedDripsUmTestDeviceAllocate(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x4D554444u);
}
