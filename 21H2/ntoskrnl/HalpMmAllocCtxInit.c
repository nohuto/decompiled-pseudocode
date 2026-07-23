/*
 * XREFs of HalpMmAllocCtxInit @ 0x1403BB300
 * Callers:
 *     HalpMmInitSystem @ 0x1409A1500 (HalpMmInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *HalpMmAllocCtxInit()
{
  __int64 *result; // rax

  qword_140C4B030 = 0LL;
  result = &HalpNPPoolAllocCtx;
  qword_140C4B028 = (__int64)&HalpNPPoolAllocCtx;
  HalpNPPoolAllocCtx = (__int64)&HalpNPPoolAllocCtx;
  return result;
}
