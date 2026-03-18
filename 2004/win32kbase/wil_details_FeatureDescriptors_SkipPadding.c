/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x1C00CEA28
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C027A07C (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_RegisterFeatureStagingChangeNotification @ 0x1C027A22C (wil_details_RegisterFeatureStagingChangeNotification.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C027A290 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C02930BC (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil_details_FeatureDescriptors_SkipPadding(_QWORD *a1)
{
  while ( 1 )
  {
    if ( a1 >= wil_details_featureDescriptors_z )
      return 0LL;
    if ( *a1 )
      break;
    ++a1;
  }
  return a1;
}
