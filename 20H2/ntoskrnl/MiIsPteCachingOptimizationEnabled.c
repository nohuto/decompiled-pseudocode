/*
 * XREFs of MiIsPteCachingOptimizationEnabled @ 0x1403F4274
 * Callers:
 *     MiAdjustPteBins @ 0x14023E040 (MiAdjustPteBins.c)
 *     MiReplenishBitMap @ 0x14023E340 (MiReplenishBitMap.c)
 *     MiPteBinsNeedTrimming @ 0x14023E9F0 (MiPteBinsNeedTrimming.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x140294850 (MiInsertCachedPte.c)
 *     MiDeleteSessionAddressSpace @ 0x140388E8C (MiDeleteSessionAddressSpace.c)
 * Callees:
 *     Feature_Servicing_37028738__private_IsEnabled @ 0x1403F420C (Feature_Servicing_37028738__private_IsEnabled.c)
 */

__int64 MiIsPteCachingOptimizationEnabled()
{
  if ( !MiPteCachingOptimizationEvaluated )
  {
    if ( (unsigned int)Feature_Servicing_37028738__private_IsEnabled() )
      MiPteCachingOptimizationEnabled = 1;
    MiPteCachingOptimizationEvaluated = 1;
  }
  return (unsigned int)MiPteCachingOptimizationEnabled;
}
