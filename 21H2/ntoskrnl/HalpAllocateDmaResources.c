/*
 * XREFs of HalpAllocateDmaResources @ 0x1404CA5C0
 * Callers:
 *     HalpFreeDmaChannels @ 0x1404CF200 (HalpFreeDmaChannels.c)
 * Callees:
 *     HalpAllocateDmaResourcesInternal @ 0x1404CA5DC (HalpAllocateDmaResourcesInternal.c)
 */

__int64 __fastcall HalpAllocateDmaResources(struct _DMA_ADAPTER *a1)
{
  return HalpAllocateDmaResourcesInternal(a1);
}
