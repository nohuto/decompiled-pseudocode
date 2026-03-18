/*
 * XREFs of HalpAllocateDmaResources @ 0x1404C51E0
 * Callers:
 *     HalpFreeDmaChannels @ 0x1404C9E20 (HalpFreeDmaChannels.c)
 * Callees:
 *     HalpAllocateDmaResourcesInternal @ 0x1404C51FC (HalpAllocateDmaResourcesInternal.c)
 */

__int64 __fastcall HalpAllocateDmaResources(struct _DMA_ADAPTER *a1)
{
  return HalpAllocateDmaResourcesInternal(a1);
}
