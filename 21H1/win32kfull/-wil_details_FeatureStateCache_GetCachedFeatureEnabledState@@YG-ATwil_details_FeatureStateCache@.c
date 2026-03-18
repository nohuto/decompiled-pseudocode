/*
 * XREFs of ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YG?ATwil_details_FeatureStateCache@@PAT1@PBUwil_details_FeatureDescriptor@@@Z @ 0xF6772
 * Callers:
 *     ?wil_details_GetCurrentFeatureEnabledState@@YG?ATwil_details_FeatureStateCache@@PBUwil_details_FeatureDescriptor@@PAH@Z @ 0xF6868 (-wil_details_GetCurrentFeatureEnabledState@@YG-ATwil_details_FeatureStateCache@@PBUwil_details_F.c)
 * Callees:
 *     ?wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YG?ATwil_details_FeatureStateCache@@PAT1@T1@PBUwil_details_FeatureDescriptor@@@Z @ 0xF6796 (-wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YG-ATwil_details_FeatureStat.c)
 */

int __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(int *a1, int a2)
{
  int result; // eax

  result = *a1;
  if ( (*a1 & 1) == 0 )
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, a2, result, 0);
  return result;
}
