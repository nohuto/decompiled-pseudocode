/*
 * XREFs of HalpDmaFreeTranslationBuffer @ 0x140A8A8C8
 * Callers:
 *     HalpDmaInitializeMasterAdapter @ 0x140A5E10C (HalpDmaInitializeMasterAdapter.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403764C0 (HalpMmAllocCtxFree.c)
 */

__int64 __fastcall HalpDmaFreeTranslationBuffer(__int64 a1)
{
  __int64 v2; // rcx

  HalpMmAllocCtxFree(a1, *(_QWORD *)(a1 + 16));
  return HalpMmAllocCtxFree(v2, a1);
}
