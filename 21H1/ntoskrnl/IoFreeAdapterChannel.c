/*
 * XREFs of IoFreeAdapterChannel @ 0x1404B3750
 * Callers:
 *     HalCancelAdapterChannel @ 0x1404C0B60 (HalCancelAdapterChannel.c)
 *     HalFreeAdapterObject @ 0x1404C0C20 (HalFreeAdapterObject.c)
 *     HalpAllocateDmaResourcesInternal @ 0x1404C51FC (HalpAllocateDmaResourcesInternal.c)
 *     HalCancelAdapterChannelThin @ 0x1404C5900 (HalCancelAdapterChannelThin.c)
 *     HalAllocateAdapterChannelV2 @ 0x1404C7304 (HalAllocateAdapterChannelV2.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x1404C7908 (HalpDmaProcessMapRegisterQueueV2.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x140304650 (HalpDmaGetAdapterVersion.c)
 *     IoFreeAdapterChannelV3 @ 0x1404C103C (IoFreeAdapterChannelV3.c)
 *     IoFreeAdapterChannelV2 @ 0x1404C79EC (IoFreeAdapterChannelV2.c)
 */

void __stdcall IoFreeAdapterChannel(PDMA_ADAPTER DmaAdapter)
{
  struct _DMA_ADAPTER *v1; // r8

  if ( (unsigned int)HalpDmaGetAdapterVersion((__int64)DmaAdapter) == 2 )
    IoFreeAdapterChannelV2(v1);
  else
    IoFreeAdapterChannelV3(v1);
}
