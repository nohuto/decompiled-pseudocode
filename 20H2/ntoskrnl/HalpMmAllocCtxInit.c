/*
 * XREFs of HalpMmAllocCtxInit @ 0x1403BA790
 * Callers:
 *     HalpMmInitSystem @ 0x1409A2DB0 (HalpMmInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *HalpMmAllocCtxInit()
{
  __int64 *result; // rax

  qword_140C4B8B0 = 0LL;
  result = &HalpNPPoolAllocCtx;
  qword_140C4B8A8 = (__int64)&HalpNPPoolAllocCtx;
  HalpNPPoolAllocCtx = (__int64)&HalpNPPoolAllocCtx;
  return result;
}
