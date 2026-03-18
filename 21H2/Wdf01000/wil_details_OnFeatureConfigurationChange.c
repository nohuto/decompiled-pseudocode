/*
 * XREFs of wil_details_OnFeatureConfigurationChange @ 0x1C00BD250
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C00BD0AC (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C00BD2D0 (wil_details_UpdateFeatureConfiguredStates.c)
 */

void __fastcall wil_details_OnFeatureConfigurationChange(void *Context)
{
  wil_details_UpdateFeatureConfiguredStates(Context);
  wil_details_EvaluateFeatureDependencies();
}
