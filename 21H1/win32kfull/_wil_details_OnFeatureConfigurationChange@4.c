/*
 * XREFs of _wil_details_OnFeatureConfigurationChange@4 @ 0x27A1C6
 * Callers:
 *     <none>
 * Callees:
 *     _wil_details_EvaluateFeatureDependencies@0 @ 0x27A084 (_wil_details_EvaluateFeatureDependencies@0.c)
 *     _wil_details_UpdateFeatureConfiguredStates@0 @ 0x27A21C (_wil_details_UpdateFeatureConfiguredStates@0.c)
 */

_DWORD *__stdcall wil_details_OnFeatureConfigurationChange(int a1)
{
  wil_details_UpdateFeatureConfiguredStates();
  return wil_details_EvaluateFeatureDependencies();
}
