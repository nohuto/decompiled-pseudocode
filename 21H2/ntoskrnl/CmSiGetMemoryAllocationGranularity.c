/*
 * XREFs of CmSiGetMemoryAllocationGranularity @ 0x14020B6B8
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x14068D310 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapCreateViewsForRegion @ 0x14068D778 (HvpViewMapCreateViewsForRegion.c)
 * Callees:
 *     <none>
 */

__int64 CmSiGetMemoryAllocationGranularity()
{
  return 0x10000LL;
}
