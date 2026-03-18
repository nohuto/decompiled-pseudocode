/*
 * XREFs of _wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@8 @ 0x27A0B6
 * Callers:
 *     _wil_details_EvaluateFeatureDependencies@0 @ 0x27A084 (_wil_details_EvaluateFeatureDependencies@0.c)
 *     _wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@16 @ 0x27A0DA (_wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@16.c)
 * Callees:
 *     _wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@16 @ 0x27A0DA (_wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@16.c)
 */

int __thiscall wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(int *this)
{
  int result; // eax

  result = *this;
  if ( (*this & 0x80u) != 0 )
    return wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(result, 0);
  return result;
}
