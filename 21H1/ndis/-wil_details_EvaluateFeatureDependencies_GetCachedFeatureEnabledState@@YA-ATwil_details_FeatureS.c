/*
 * XREFs of ?wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00F8470
 * Callers:
 *     ?wil_details_EvaluateFeatureDependencies@@YAXXZ @ 0x1C00F83CC (-wil_details_EvaluateFeatureDependencies@@YAXXZ.c)
 *     ?wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00F84A4 (-wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_F.c)
 * Callees:
 *     ?wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00F84A4 (-wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_F.c)
 */

union wil_details_FeatureStateCache __fastcall wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(
        union wil_details_FeatureStateCache *a1,
        const struct wil_details_FeatureDescriptor *a2)
{
  if ( (a1->exchange & 0x80u) != 0 )
    return wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(
             a1,
             (union wil_details_FeatureStateCache)a1->exchange,
             a2);
  return (union wil_details_FeatureStateCache)a1->exchange;
}
