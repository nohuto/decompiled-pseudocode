/*
 * XREFs of CmFcpCleanupSectionState @ 0x1407D4AC8
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x14087DD04 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A38784 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 */

void __fastcall CmFcpCleanupSectionState(__int64 a1)
{
  struct _DMA_ADAPTER *v1; // rcx

  v1 = *(struct _DMA_ADAPTER **)(a1 + 8);
  if ( v1 )
    HalPutDmaAdapter(v1);
}
