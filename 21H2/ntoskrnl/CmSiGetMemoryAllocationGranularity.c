/*
 * XREFs of CmSiGetMemoryAllocationGranularity @ 0x1402F7C0C
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x1406FB5C4 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1406FCB88 (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     <none>
 */

__int64 CmSiGetMemoryAllocationGranularity()
{
  return 0x10000LL;
}
