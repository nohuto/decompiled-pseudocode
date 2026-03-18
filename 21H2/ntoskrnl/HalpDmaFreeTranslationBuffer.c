/*
 * XREFs of HalpDmaFreeTranslationBuffer @ 0x140B4BF10
 * Callers:
 *     HalpDmaInitializeMasterAdapter @ 0x140B1D9DC (HalpDmaInitializeMasterAdapter.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 */

void __fastcall HalpDmaFreeTranslationBuffer(__int64 a1)
{
  __int64 v2; // rcx

  HalpMmAllocCtxFree(a1, *(_QWORD *)(a1 + 16));
  HalpMmAllocCtxFree(v2, a1);
}
