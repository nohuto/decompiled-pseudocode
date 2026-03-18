/*
 * XREFs of ?wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z @ 0x1C00DB170
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_EvaluateFeatureDependencies@@YAXXZ @ 0x1C00DAFD0 (-wil_details_EvaluateFeatureDependencies@@YAXXZ.c)
 *     ?wil_details_UpdateFeatureConfiguredStates@@YAXXZ @ 0x1C00DB1F0 (-wil_details_UpdateFeatureConfiguredStates@@YAXXZ.c)
 */

void __fastcall wil_details_OnFeatureConfigurationChange(void *a1)
{
  wil_details_UpdateFeatureConfiguredStates();
  wil_details_EvaluateFeatureDependencies();
}
