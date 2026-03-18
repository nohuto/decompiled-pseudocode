/*
 * XREFs of CmFcpCleanupSectionState @ 0x1407C1E98
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x14087A7F4 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A357B8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 */

void __fastcall CmFcpCleanupSectionState(__int64 a1)
{
  struct _DMA_ADAPTER *v1; // rcx

  v1 = *(struct _DMA_ADAPTER **)(a1 + 8);
  if ( v1 )
    HalPutDmaAdapter(v1);
}
