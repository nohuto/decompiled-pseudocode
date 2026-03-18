/*
 * XREFs of CmSiGetMemoryAllocationGranularity @ 0x1402043D0
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x1405DA2C4 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapCreateViewsForRegion @ 0x1405DBCD8 (HvpViewMapCreateViewsForRegion.c)
 * Callees:
 *     <none>
 */

__int64 CmSiGetMemoryAllocationGranularity()
{
  return 0x10000LL;
}
