/*
 * XREFs of wil_details_FeatureDescriptors_SkipPadding @ 0x1403ED084
 * Callers:
 *     wil_RegisterFeatureStagingChangeNotification @ 0x1405C7564 (wil_RegisterFeatureStagingChangeNotification.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x1405C7638 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_OnFeatureConfigurationChange @ 0x1405C77D0 (wil_details_OnFeatureConfigurationChange.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140A35608 (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall **__fastcall wil_details_FeatureDescriptors_SkipPadding(__int64 (__fastcall **a1)()))()
{
  while ( 1 )
  {
    if ( a1 >= &wil_details_featureDescriptors_z )
      return 0LL;
    if ( *a1 )
      break;
    ++a1;
  }
  return a1;
}
