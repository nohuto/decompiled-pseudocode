/*
 * XREFs of _wil_details_FeatureDescriptors_SkipPadding@4 @ 0xF01D8
 * Callers:
 *     _wil_details_EvaluateFeatureDependencies@0 @ 0x27A084 (_wil_details_EvaluateFeatureDependencies@0.c)
 *     _wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates@0 @ 0x27A168 (_wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates@0.c)
 *     _wil_details_RegisterFeatureStagingChangeNotification@4 @ 0x27A1D4 (_wil_details_RegisterFeatureStagingChangeNotification@4.c)
 *     _wil_details_UpdateFeatureConfiguredStates@0 @ 0x27A21C (_wil_details_UpdateFeatureConfiguredStates@0.c)
 *     _wil_details_PopulateInitialConfiguredFeatureStates@0 @ 0x292070 (_wil_details_PopulateInitialConfiguredFeatureStates@0.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall wil_details_FeatureDescriptors_SkipPadding(_DWORD *a1)
{
  while ( 1 )
  {
    if ( a1 >= wil_details_featureDescriptors_z )
      return 0;
    if ( *a1 )
      break;
    ++a1;
  }
  return a1;
}
