/*
 * XREFs of HalpMmAllocCtxInit @ 0x1403BB190
 * Callers:
 *     HalpMmInitSystem @ 0x1409A05D0 (HalpMmInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *HalpMmAllocCtxInit()
{
  __int64 *result; // rax

  qword_140C4AFF0 = 0LL;
  result = &HalpNPPoolAllocCtx;
  qword_140C4AFE8 = (__int64)&HalpNPPoolAllocCtx;
  HalpNPPoolAllocCtx = (__int64)&HalpNPPoolAllocCtx;
  return result;
}
