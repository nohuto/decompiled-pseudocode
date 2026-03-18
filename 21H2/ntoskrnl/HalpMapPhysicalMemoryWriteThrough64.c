/*
 * XREFs of HalpMapPhysicalMemoryWriteThrough64 @ 0x1403BEC00
 * Callers:
 *     <none>
 * Callees:
 *     HalpMap @ 0x1403BF3B8 (HalpMap.c)
 */

__int64 __fastcall HalpMapPhysicalMemoryWriteThrough64(int a1, int a2, char a3)
{
  return HalpMap(a1, a2, 0, a3, 4);
}
