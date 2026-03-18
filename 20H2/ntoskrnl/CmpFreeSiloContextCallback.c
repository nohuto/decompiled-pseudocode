/*
 * XREFs of CmpFreeSiloContextCallback @ 0x140875B60
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     CmpStopSiloKeyLockTracker @ 0x1408750C8 (CmpStopSiloKeyLockTracker.c)
 */

void __fastcall CmpFreeSiloContextCallback(ULONG_PTR a1)
{
  struct _DMA_ADAPTER *v2; // rcx

  CmpStopSiloKeyLockTracker(a1);
  v2 = *(struct _DMA_ADAPTER **)(a1 + 32);
  if ( v2 )
    HalPutDmaAdapter(v2);
}
