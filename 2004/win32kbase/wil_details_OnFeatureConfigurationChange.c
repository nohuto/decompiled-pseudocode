/*
 * XREFs of wil_details_OnFeatureConfigurationChange @ 0x1C027A210
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C027A07C (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C027A290 (wil_details_UpdateFeatureConfiguredStates.c)
 */

_QWORD *wil_details_OnFeatureConfigurationChange()
{
  wil_details_UpdateFeatureConfiguredStates();
  return wil_details_EvaluateFeatureDependencies();
}
