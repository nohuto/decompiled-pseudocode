/*
 * XREFs of HalpMapPhysicalMemory64 @ 0x1403EC9E8
 * Callers:
 *     HalpAcpiPostSleep @ 0x1409922CC (HalpAcpiPostSleep.c)
 *     HalpCheckLowMemoryPreSleep @ 0x1409A526C (HalpCheckLowMemoryPreSleep.c)
 *     HalpAllocateScratchMemory @ 0x1409B2E90 (HalpAllocateScratchMemory.c)
 *     HalpAllocPhysicalMemory @ 0x140A5C140 (HalpAllocPhysicalMemory.c)
 * Callees:
 *     HalpMap @ 0x1403B8498 (HalpMap.c)
 */

unsigned __int64 __fastcall HalpMapPhysicalMemory64(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  unsigned int v5; // [rsp+20h] [rbp-18h]

  v5 = a4;
  LOBYTE(a4) = a3;
  return HalpMap(a1, a2, 1u, a4, v5);
}
