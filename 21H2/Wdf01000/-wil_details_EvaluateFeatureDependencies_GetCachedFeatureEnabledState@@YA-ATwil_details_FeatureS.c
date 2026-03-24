/*
 * XREFs of ?wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00BC150
 * Callers:
 *     ?wil_details_EvaluateFeatureDependencies@@YAXXZ @ 0x1C00BC0AC (-wil_details_EvaluateFeatureDependencies@@YAXXZ.c)
 *     ?wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00BC184 (-wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_F.c)
 * Callees:
 *     ?wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00BC184 (-wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_F.c)
 */

wil_details_FeatureStateCache __fastcall wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(
        wil_details_FeatureStateCache *featureState,
        const wil_details_FeatureDescriptor *descriptor)
{
  if ( (featureState->exchange & 0x80u) != 0 )
    return wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(
             featureState,
             (wil_details_FeatureStateCache)featureState->exchange,
             descriptor);
  return (wil_details_FeatureStateCache)featureState->exchange;
}
