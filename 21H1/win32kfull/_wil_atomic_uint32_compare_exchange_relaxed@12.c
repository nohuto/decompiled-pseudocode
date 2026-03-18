/*
 * XREFs of _wil_atomic_uint32_compare_exchange_relaxed@12 @ 0xEF3F4
 * Callers:
 *     _wil_details_FeatureReporting_IncrementOpportunityInCache@16 @ 0xEF41A (_wil_details_FeatureReporting_IncrementOpportunityInCache@16.c)
 *     _wil_details_FeatureReporting_IncrementUsageInCache@16 @ 0xEF4CE (_wil_details_FeatureReporting_IncrementUsageInCache@16.c)
 *     _wil_details_FeatureReporting_RecordUsageInCache@16 @ 0xEF58C (_wil_details_FeatureReporting_RecordUsageInCache@16.c)
 *     _wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@16 @ 0xF2CE4 (_wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@16.c)
 *     ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YGXPAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPAUwil_details_RecordUsageResult@@@Z @ 0xF63EA (-wil_details_FeatureReporting_IncrementOpportunityInCache@@YGXPAUwil_details_FeatureReportingCac.c)
 *     ?wil_details_FeatureReporting_IncrementUsageInCache@@YGXPAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPAUwil_details_RecordUsageResult@@@Z @ 0xF64A0 (-wil_details_FeatureReporting_IncrementUsageInCache@@YGXPAUwil_details_FeatureReportingCache@@W4.c)
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YG?AUwil_details_RecordUsageResult@@PAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0xF655C (-wil_details_FeatureReporting_RecordUsageInCache@@YG-AUwil_details_RecordUsageResult@@PAUwil_det.c)
 *     ?wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YG?ATwil_details_FeatureStateCache@@PAT1@T1@PBUwil_details_FeatureDescriptor@@@Z @ 0xF6796 (-wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YG-ATwil_details_FeatureStat.c)
 * Callees:
 *     <none>
 */

int __fastcall wil_atomic_uint32_compare_exchange_relaxed(
        volatile signed __int32 *a1,
        signed __int32 *a2,
        signed __int32 a3)
{
  signed __int32 v3; // edi
  signed __int32 v4; // eax

  v3 = *a2;
  v4 = _InterlockedCompareExchange(a1, a3, *a2);
  if ( v4 == v3 )
    return 1;
  *a2 = v4;
  return 0;
}
