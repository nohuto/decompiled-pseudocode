/*
 * XREFs of ?wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z @ 0x1C005FC20
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_EvaluateFeatureDependencies@@YAXXZ @ 0x1C005FA8C (-wil_details_EvaluateFeatureDependencies@@YAXXZ.c)
 *     ?wil_details_UpdateFeatureConfiguredStates@@YAXXZ @ 0x1C005FCA0 (-wil_details_UpdateFeatureConfiguredStates@@YAXXZ.c)
 */

void __fastcall wil_details_OnFeatureConfigurationChange(void *a1)
{
  wil_details_UpdateFeatureConfiguredStates();
  wil_details_EvaluateFeatureDependencies();
}
