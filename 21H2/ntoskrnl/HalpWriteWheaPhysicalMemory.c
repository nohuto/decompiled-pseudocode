/*
 * XREFs of HalpWriteWheaPhysicalMemory @ 0x140524E90
 * Callers:
 *     <none>
 * Callees:
 *     HalpReadWriteWheaPhysicalMemory @ 0x140524C30 (HalpReadWriteWheaPhysicalMemory.c)
 */

__int64 __fastcall HalpWriteWheaPhysicalMemory(__int64 a1, unsigned int a2, char *a3)
{
  return HalpReadWriteWheaPhysicalMemory(0, a1, a2, a3);
}
