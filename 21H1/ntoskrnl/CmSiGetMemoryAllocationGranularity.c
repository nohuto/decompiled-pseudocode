/*
 * XREFs of CmSiGetMemoryAllocationGranularity @ 0x1402E0B04
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x140685294 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapCreateViewsForRegion @ 0x1406866FC (HvpViewMapCreateViewsForRegion.c)
 * Callees:
 *     <none>
 */

__int64 CmSiGetMemoryAllocationGranularity()
{
  return 0x10000LL;
}
