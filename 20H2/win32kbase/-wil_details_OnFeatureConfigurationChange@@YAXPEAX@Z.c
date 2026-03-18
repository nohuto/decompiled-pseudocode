/*
 * XREFs of ?wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z @ 0x1C02783A0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_EvaluateFeatureDependencies@@YAXXZ @ 0x1C0278204 (-wil_details_EvaluateFeatureDependencies@@YAXXZ.c)
 *     ?wil_details_UpdateFeatureConfiguredStates@@YAXXZ @ 0x1C0278420 (-wil_details_UpdateFeatureConfiguredStates@@YAXXZ.c)
 */

void __fastcall wil_details_OnFeatureConfigurationChange(void *a1)
{
  wil_details_UpdateFeatureConfiguredStates();
  wil_details_EvaluateFeatureDependencies();
}
