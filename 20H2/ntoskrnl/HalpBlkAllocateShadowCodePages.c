/*
 * XREFs of HalpBlkAllocateShadowCodePages @ 0x140A91030
 * Callers:
 *     HalpBlkAllocateShadowCode @ 0x140A90FA8 (HalpBlkAllocateShadowCode.c)
 * Callees:
 *     HalpBlkAllocateAndShadowMemory @ 0x140A90E28 (HalpBlkAllocateAndShadowMemory.c)
 */

__int64 __fastcall HalpBlkAllocateShadowCodePages(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !HalpBlkAllocateAndShadowMemory(
          (char *)(a1 & 0xFFFFFFFFFFFFF000uLL),
          ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12,
          (__int64)a3,
          32,
          a3) )
    return (unsigned int)-1073741801;
  return v3;
}
