/*
 * XREFs of HalpAllocateDmaResources @ 0x1404CA800
 * Callers:
 *     HalpFreeDmaChannels @ 0x1404CF440 (HalpFreeDmaChannels.c)
 * Callees:
 *     HalpAllocateDmaResourcesInternal @ 0x1404CA81C (HalpAllocateDmaResourcesInternal.c)
 */

__int64 __fastcall HalpAllocateDmaResources(struct _DMA_ADAPTER *a1)
{
  return HalpAllocateDmaResourcesInternal(a1);
}
