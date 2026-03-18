/*
 * XREFs of wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C00BD150
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C00BD0AC (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState @ 0x1C00BD184 (wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState @ 0x1C00BD184 (wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState.c)
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
