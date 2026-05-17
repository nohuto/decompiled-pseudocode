/*
 * XREFs of _wil_atomic_uint32_compare_exchange_relaxed@12 @ 0x4B306237
 * Callers:
 *     _wil_details_FeatureReporting_IncrementOpportunityInCache@16 @ 0x4B30625C (_wil_details_FeatureReporting_IncrementOpportunityInCache@16.c)
 *     _wil_details_FeatureReporting_IncrementUsageInCache@16 @ 0x4B306312 (_wil_details_FeatureReporting_IncrementUsageInCache@16.c)
 *     _wil_details_FeatureReporting_RecordUsageInCache@16 @ 0x4B3063CE (_wil_details_FeatureReporting_RecordUsageInCache@16.c)
 *     _wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@16 @ 0x4B306632 (_wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@16.c)
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
