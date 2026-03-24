/*
 * XREFs of IoFreeAdapterChannel @ 0x1404B8D10
 * Callers:
 *     HalCancelAdapterChannel @ 0x1404C5EC0 (HalCancelAdapterChannel.c)
 *     HalFreeAdapterObject @ 0x1404C5F80 (HalFreeAdapterObject.c)
 *     HalpAllocateDmaResourcesInternal @ 0x1404CA5DC (HalpAllocateDmaResourcesInternal.c)
 *     HalCancelAdapterChannelThin @ 0x1404CACE0 (HalCancelAdapterChannelThin.c)
 *     HalAllocateAdapterChannelV2 @ 0x1404CC6E4 (HalAllocateAdapterChannelV2.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x1404CCCE8 (HalpDmaProcessMapRegisterQueueV2.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x1402B62B0 (HalpDmaGetAdapterVersion.c)
 *     IoFreeAdapterChannelV3 @ 0x1404C639C (IoFreeAdapterChannelV3.c)
 *     IoFreeAdapterChannelV2 @ 0x1404CCDCC (IoFreeAdapterChannelV2.c)
 */

void __stdcall IoFreeAdapterChannel(PDMA_ADAPTER DmaAdapter)
{
  struct _DMA_ADAPTER *v1; // r8

  if ( (unsigned int)HalpDmaGetAdapterVersion((__int64)DmaAdapter) == 2 )
    IoFreeAdapterChannelV2(v1);
  else
    IoFreeAdapterChannelV3(v1);
}
