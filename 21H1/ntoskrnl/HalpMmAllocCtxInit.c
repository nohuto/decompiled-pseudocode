/*
 * XREFs of HalpMmAllocCtxInit @ 0x1403B6EC0
 * Callers:
 *     HalpMmInitSystem @ 0x14099B510 (HalpMmInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *HalpMmAllocCtxInit()
{
  __int64 *result; // rax

  qword_140C4B990 = 0LL;
  result = &HalpNPPoolAllocCtx;
  qword_140C4B988 = (__int64)&HalpNPPoolAllocCtx;
  HalpNPPoolAllocCtx = (__int64)&HalpNPPoolAllocCtx;
  return result;
}
