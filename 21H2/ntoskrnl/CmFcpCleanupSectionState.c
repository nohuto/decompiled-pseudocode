/*
 * XREFs of CmFcpCleanupSectionState @ 0x1407D4C38
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x14087DE64 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A39784 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 */

void __fastcall CmFcpCleanupSectionState(__int64 a1)
{
  struct _DMA_ADAPTER *v1; // rcx

  v1 = *(struct _DMA_ADAPTER **)(a1 + 8);
  if ( v1 )
    HalPutDmaAdapter(v1);
}
