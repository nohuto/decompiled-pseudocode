/*
 * XREFs of _wil_details_EvaluateFeatureDependencies@0 @ 0x27A084
 * Callers:
 *     _wil_details_OnFeatureConfigurationChange@4 @ 0x27A1C6 (_wil_details_OnFeatureConfigurationChange@4.c)
 *     _wil_InitializeFeatureStaging@0 @ 0x292034 (_wil_InitializeFeatureStaging@0.c)
 * Callees:
 *     _wil_details_FeatureDescriptors_SkipPadding@4 @ 0xF01D8 (_wil_details_FeatureDescriptors_SkipPadding@4.c)
 *     _wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@8 @ 0x27A0B6 (_wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@8.c)
 *     _wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates@0 @ 0x27A168 (_wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates@0.c)
 */

_DWORD *__stdcall wil_details_EvaluateFeatureDependencies()
{
  int **i; // ecx
  _DWORD *result; // eax
  _DWORD *v2; // esi

  wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates();
  for ( i = &wil_details_featureDescriptors_a; ; i = (int **)(v2 + 4) )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    v2 = result;
    if ( !result )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*result, result);
  }
  return result;
}
