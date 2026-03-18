/*
 * XREFs of wil_details_OnFeatureConfigurationChange @ 0x1C008E220
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C008E07C (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C008E2A0 (wil_details_UpdateFeatureConfiguredStates.c)
 */

_QWORD *wil_details_OnFeatureConfigurationChange()
{
  wil_details_UpdateFeatureConfiguredStates();
  return wil_details_EvaluateFeatureDependencies();
}
