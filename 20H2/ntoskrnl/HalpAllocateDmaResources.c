/*
 * XREFs of HalpAllocateDmaResources @ 0x1404C8BF0
 * Callers:
 *     HalpFreeDmaChannels @ 0x1404CD830 (HalpFreeDmaChannels.c)
 * Callees:
 *     HalpAllocateDmaResourcesInternal @ 0x1404C8C0C (HalpAllocateDmaResourcesInternal.c)
 */

__int64 __fastcall HalpAllocateDmaResources(struct _DMA_ADAPTER *a1)
{
  return HalpAllocateDmaResourcesInternal(a1);
}
