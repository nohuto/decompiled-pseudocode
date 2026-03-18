/*
 * XREFs of HalpMmAllocCtxInit @ 0x1403B7CF0
 * Callers:
 *     HalpMmInitSystem @ 0x14099CCB0 (HalpMmInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *HalpMmAllocCtxInit()
{
  __int64 *result; // rax

  qword_140C4B830 = 0LL;
  result = &HalpNPPoolAllocCtx;
  qword_140C4B828 = (__int64)&HalpNPPoolAllocCtx;
  HalpNPPoolAllocCtx = (__int64)&HalpNPPoolAllocCtx;
  return result;
}
