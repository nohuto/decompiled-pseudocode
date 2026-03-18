/*
 * XREFs of IoFreeAdapterChannel @ 0x1404B3E30
 * Callers:
 *     HalCancelAdapterChannel @ 0x1404C0FD0 (HalCancelAdapterChannel.c)
 *     HalFreeAdapterObject @ 0x1404C1090 (HalFreeAdapterObject.c)
 *     HalpAllocateDmaResourcesInternal @ 0x1404C56AC (HalpAllocateDmaResourcesInternal.c)
 *     HalCancelAdapterChannelThin @ 0x1404C5DB0 (HalCancelAdapterChannelThin.c)
 *     HalAllocateAdapterChannelV2 @ 0x1404C77B4 (HalAllocateAdapterChannelV2.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x1404C7DB8 (HalpDmaProcessMapRegisterQueueV2.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x140342130 (HalpDmaGetAdapterVersion.c)
 *     IoFreeAdapterChannelV3 @ 0x1404C14AC (IoFreeAdapterChannelV3.c)
 *     IoFreeAdapterChannelV2 @ 0x1404C7E9C (IoFreeAdapterChannelV2.c)
 */

void __stdcall IoFreeAdapterChannel(PDMA_ADAPTER DmaAdapter)
{
  struct _DMA_ADAPTER *v1; // r8

  if ( (unsigned int)HalpDmaGetAdapterVersion((__int64)DmaAdapter) == 2 )
    IoFreeAdapterChannelV2(v1);
  else
    IoFreeAdapterChannelV3(v1);
}
