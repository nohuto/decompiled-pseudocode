/*
 * XREFs of CmSiGetMemoryAllocationGranularity @ 0x14027147C
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x1406376C4 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140638B80 (HvpViewMapCreateViewsForRegion.c)
 * Callees:
 *     <none>
 */

__int64 CmSiGetMemoryAllocationGranularity()
{
  return 0x10000LL;
}
