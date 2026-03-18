/*
 * XREFs of HalAllocateAdapterChannel @ 0x140456840
 * Callers:
 *     HalBuildScatterGatherListV2 @ 0x140221330 (HalBuildScatterGatherListV2.c)
 *     HalRealAllocateAdapterChannelV2 @ 0x140458150 (HalRealAllocateAdapterChannelV2.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x14023A8D0 (HalpDmaGetAdapterVersion.c)
 *     HalAllocateAdapterChannelV2 @ 0x140457ED8 (HalAllocateAdapterChannelV2.c)
 *     HalpAllocateAdapterChannel @ 0x140517630 (HalpAllocateAdapterChannel.c)
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
