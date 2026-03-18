/*
 * XREFs of HalpPteReserveResources @ 0x1403BB1E0
 * Callers:
 *     HalpMmInitSystem @ 0x1409A2DB0 (HalpMmInitSystem.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14037C7B8 (HalpMmAllocCtxAlloc.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403A1AB4 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 */

unsigned __int64 HalpPteReserveResources()
{
  unsigned int MaximumRegisteredProcessorCount; // esi
  ULONG_PTR v1; // rdi
  void *v2; // rax
  __int64 v3; // rbx
  unsigned __int64 result; // rax

  MaximumRegisteredProcessorCount = HalpQueryMaximumRegisteredProcessorCount();
  v1 = 136 * MaximumRegisteredProcessorCount;
  v2 = (void *)HalpMmAllocCtxAlloc(v1, v1);
  v3 = (__int64)v2;
  if ( !v2 )
    KeBugCheckEx(0xACu, v1, 0xAB00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\mm\\ptesup.c", 0x3BAuLL);
  memset(v2, 0, (unsigned int)v1);
  HiberFreeCR3 = v3;
  result = (unsigned __int64)MaximumRegisteredProcessorCount << 7;
  HalpCR3Root = (result + v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  return result;
}
