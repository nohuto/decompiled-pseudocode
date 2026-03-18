/*
 * XREFs of CmpFreeSiloContextCallback @ 0x140870010
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     CmpStopSiloKeyLockTracker @ 0x14086F578 (CmpStopSiloKeyLockTracker.c)
 */

void __fastcall CmpFreeSiloContextCallback(ULONG_PTR a1)
{
  struct _DMA_ADAPTER *v2; // rcx

  CmpStopSiloKeyLockTracker(a1);
  v2 = *(struct _DMA_ADAPTER **)(a1 + 32);
  if ( v2 )
    HalPutDmaAdapter(v2);
}
