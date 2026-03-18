/*
 * XREFs of _wil_details_FeatureStateCache_GetCachedFeatureEnabledState@8 @ 0xF2CC0
 * Callers:
 *     _wil_details_GetCurrentFeatureEnabledState@8 @ 0xF2DB6 (_wil_details_GetCurrentFeatureEnabledState@8.c)
 * Callees:
 *     _wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@16 @ 0xF2CE4 (_wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@16.c)
 */

int __thiscall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(int *this)
{
  int result; // eax

  result = *this;
  if ( (*this & 1) == 0 )
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(result, 0);
  return result;
}
