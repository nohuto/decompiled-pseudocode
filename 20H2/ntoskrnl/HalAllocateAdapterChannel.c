/*
 * XREFs of HalAllocateAdapterChannel @ 0x1404B70E0
 * Callers:
 *     HalBuildScatterGatherListV2 @ 0x1402EF3B0 (HalBuildScatterGatherListV2.c)
 *     HalRealAllocateAdapterChannelV2 @ 0x1404CAF90 (HalRealAllocateAdapterChannelV2.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x140312EA0 (HalpDmaGetAdapterVersion.c)
 *     HalpAllocateAdapterChannel @ 0x1404C8A00 (HalpAllocateAdapterChannel.c)
 *     HalAllocateAdapterChannelV2 @ 0x1404CAD14 (HalAllocateAdapterChannelV2.c)
 */

__int64 __fastcall HalAllocateAdapterChannel(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r10
  struct _DMA_ADAPTER *v6; // r11

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    return HalAllocateAdapterChannelV2(v6, (PKDEVICE_QUEUE_ENTRY)v5);
  *(_DWORD *)(v5 + 20) &= ~2u;
  return HalpAllocateAdapterChannel(v6, 0, a4);
}
