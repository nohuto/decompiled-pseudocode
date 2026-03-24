/*
 * XREFs of CmpFreeSiloContextCallback @ 0x140873420
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     CmpStopSiloKeyLockTracker @ 0x140872918 (CmpStopSiloKeyLockTracker.c)
 */

void __fastcall CmpFreeSiloContextCallback(ULONG_PTR a1)
{
  struct _DMA_ADAPTER *v2; // rcx

  CmpStopSiloKeyLockTracker(a1);
  v2 = *(struct _DMA_ADAPTER **)(a1 + 32);
  if ( v2 )
    HalPutDmaAdapter(v2);
}
