/*
 * XREFs of CmSiGetMemoryAllocationGranularity @ 0x140362A1C
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x140723598 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140724B50 (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     <none>
 */

__int64 CmSiGetMemoryAllocationGranularity()
{
  return 0x10000LL;
}
