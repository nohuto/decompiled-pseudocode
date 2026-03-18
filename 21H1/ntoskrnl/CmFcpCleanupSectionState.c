/*
 * XREFs of CmFcpCleanupSectionState @ 0x1407BEBA8
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140879504 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A357B8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 */

void __fastcall CmFcpCleanupSectionState(__int64 a1)
{
  struct _DMA_ADAPTER *v1; // rcx

  v1 = *(struct _DMA_ADAPTER **)(a1 + 8);
  if ( v1 )
    HalPutDmaAdapter(v1);
}
