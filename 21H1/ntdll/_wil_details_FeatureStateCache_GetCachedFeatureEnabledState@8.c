/*
 * XREFs of _wil_details_FeatureStateCache_GetCachedFeatureEnabledState@8 @ 0x4B30660E
 * Callers:
 *     _Feature_SearchPackagePaths__private_IsEnabled@0 @ 0x4B3061C5 (_Feature_SearchPackagePaths__private_IsEnabled@0.c)
 * Callees:
 *     _wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@16 @ 0x4B306632 (_wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@16.c)
 */

int __thiscall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(int *this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp-4h]

  result = *this;
  if ( (*this & 1) == 0 )
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(result, v2);
  return result;
}
