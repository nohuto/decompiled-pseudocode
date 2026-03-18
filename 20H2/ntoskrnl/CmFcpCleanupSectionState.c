/*
 * XREFs of CmFcpCleanupSectionState @ 0x1407D0698
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140880364 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A3B7B8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 */

void __fastcall CmFcpCleanupSectionState(__int64 a1)
{
  struct _DMA_ADAPTER *v1; // rcx

  v1 = *(struct _DMA_ADAPTER **)(a1 + 8);
  if ( v1 )
    HalPutDmaAdapter(v1);
}
