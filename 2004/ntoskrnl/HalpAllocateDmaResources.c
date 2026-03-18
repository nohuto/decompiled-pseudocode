/*
 * XREFs of HalpAllocateDmaResources @ 0x1404C5690
 * Callers:
 *     HalpFreeDmaChannels @ 0x1404CA2D0 (HalpFreeDmaChannels.c)
 * Callees:
 *     HalpAllocateDmaResourcesInternal @ 0x1404C56AC (HalpAllocateDmaResourcesInternal.c)
 */

__int64 __fastcall HalpAllocateDmaResources(struct _DMA_ADAPTER *a1)
{
  return HalpAllocateDmaResourcesInternal(a1);
}
