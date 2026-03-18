/*
 * XREFs of HalpMmAllocCtxInit @ 0x1403BEAF0
 * Callers:
 *     HalpMmInitSystem @ 0x140A556B0 (HalpMmInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *HalpMmAllocCtxInit()
{
  __int64 *result; // rax

  qword_140C4DD50 = 0LL;
  result = &HalpNPPoolAllocCtx;
  qword_140C4DD48 = (__int64)&HalpNPPoolAllocCtx;
  HalpNPPoolAllocCtx = (__int64)&HalpNPPoolAllocCtx;
  return result;
}
