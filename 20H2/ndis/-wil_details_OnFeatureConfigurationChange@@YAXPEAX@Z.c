/*
 * XREFs of ?wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z @ 0x1C00F8560
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_EvaluateFeatureDependencies@@YAXXZ @ 0x1C00F83CC (-wil_details_EvaluateFeatureDependencies@@YAXXZ.c)
 *     ?wil_details_UpdateFeatureConfiguredStates@@YAXXZ @ 0x1C00F85E0 (-wil_details_UpdateFeatureConfiguredStates@@YAXXZ.c)
 */

void __fastcall wil_details_OnFeatureConfigurationChange(PVOID a1)
{
  wil_details_UpdateFeatureConfiguredStates();
  wil_details_EvaluateFeatureDependencies();
}
