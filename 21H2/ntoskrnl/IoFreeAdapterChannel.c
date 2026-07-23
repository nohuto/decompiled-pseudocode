/*
 * XREFs of IoFreeAdapterChannel @ 0x1404B8F50
 * Callers:
 *     HalCancelAdapterChannel @ 0x1404C6100 (HalCancelAdapterChannel.c)
 *     HalFreeAdapterObject @ 0x1404C61C0 (HalFreeAdapterObject.c)
 *     HalpAllocateDmaResourcesInternal @ 0x1404CA81C (HalpAllocateDmaResourcesInternal.c)
 *     HalCancelAdapterChannelThin @ 0x1404CAF20 (HalCancelAdapterChannelThin.c)
 *     HalAllocateAdapterChannelV2 @ 0x1404CC924 (HalAllocateAdapterChannelV2.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x1404CCF28 (HalpDmaProcessMapRegisterQueueV2.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x140234490 (HalpDmaGetAdapterVersion.c)
 *     IoFreeAdapterChannelV3 @ 0x1404C65DC (IoFreeAdapterChannelV3.c)
 *     IoFreeAdapterChannelV2 @ 0x1404CD00C (IoFreeAdapterChannelV2.c)
 */

void __stdcall IoFreeAdapterChannel(PDMA_ADAPTER DmaAdapter)
{
  struct _DMA_ADAPTER *v1; // r8

  if ( (unsigned int)HalpDmaGetAdapterVersion((__int64)DmaAdapter) == 2 )
    IoFreeAdapterChannelV2(v1);
  else
    IoFreeAdapterChannelV3(v1);
}
