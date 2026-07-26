/*
 * XREFs of wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1C00F8570
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C00F83C0 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C00F858C (wil_details_UpdateFeatureConfiguredStates.c)
 */

void __fastcall wil_details_ReevaluateOnFeatureConfigurationChange(PVOID a1)
{
  wil_details_UpdateFeatureConfiguredStates(a1);
  wil_details_EvaluateFeatureDependencies();
}
