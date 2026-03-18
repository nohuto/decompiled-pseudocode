/*
 * XREFs of IoFreeAdapterChannel @ 0x1404B7350
 * Callers:
 *     HalCancelAdapterChannel @ 0x1404C44F0 (HalCancelAdapterChannel.c)
 *     HalFreeAdapterObject @ 0x1404C45B0 (HalFreeAdapterObject.c)
 *     HalpAllocateDmaResourcesInternal @ 0x1404C8C0C (HalpAllocateDmaResourcesInternal.c)
 *     HalCancelAdapterChannelThin @ 0x1404C9310 (HalCancelAdapterChannelThin.c)
 *     HalAllocateAdapterChannelV2 @ 0x1404CAD14 (HalAllocateAdapterChannelV2.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x1404CB318 (HalpDmaProcessMapRegisterQueueV2.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x140312EA0 (HalpDmaGetAdapterVersion.c)
 *     IoFreeAdapterChannelV3 @ 0x1404C49CC (IoFreeAdapterChannelV3.c)
 *     IoFreeAdapterChannelV2 @ 0x1404CB3FC (IoFreeAdapterChannelV2.c)
 */

void __stdcall IoFreeAdapterChannel(PDMA_ADAPTER DmaAdapter)
{
  struct _DMA_ADAPTER *v1; // r8

  if ( (unsigned int)HalpDmaGetAdapterVersion((__int64)DmaAdapter) == 2 )
    IoFreeAdapterChannelV2(v1);
  else
    IoFreeAdapterChannelV3(v1);
}
