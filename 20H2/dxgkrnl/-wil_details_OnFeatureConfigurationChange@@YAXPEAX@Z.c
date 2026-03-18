/*
 * XREFs of ?wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z @ 0x1C00DA1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_EvaluateFeatureDependencies@@YAXXZ @ 0x1C00DA040 (-wil_details_EvaluateFeatureDependencies@@YAXXZ.c)
 *     ?wil_details_UpdateFeatureConfiguredStates@@YAXXZ @ 0x1C00DA260 (-wil_details_UpdateFeatureConfiguredStates@@YAXXZ.c)
 */

void __fastcall wil_details_OnFeatureConfigurationChange(void *a1)
{
  wil_details_UpdateFeatureConfiguredStates();
  wil_details_EvaluateFeatureDependencies();
}
