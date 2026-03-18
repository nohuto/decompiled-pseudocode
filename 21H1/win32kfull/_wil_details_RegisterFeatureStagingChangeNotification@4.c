/*
 * XREFs of _wil_details_RegisterFeatureStagingChangeNotification@4 @ 0x27A1D4
 * Callers:
 *     _wil_InitializeFeatureStaging@0 @ 0x292034 (_wil_InitializeFeatureStaging@0.c)
 * Callees:
 *     _wil_details_FeatureDescriptors_SkipPadding@4 @ 0xF01D8 (_wil_details_FeatureDescriptors_SkipPadding@4.c)
 */

_BYTE *wil_details_RegisterFeatureStagingChangeNotification()
{
  int **i; // ecx
  _BYTE *result; // eax
  int v2; // edx

  for ( i = &wil_details_featureDescriptors_a; ; i = (int **)(result + 16) )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !result )
      break;
    if ( !result[9] && !result[10] && !result[8] )
    {
      result = (_BYTE *)RtlRegisterFeatureConfigurationChangeNotification(
                          wil_details_OnFeatureConfigurationChange,
                          0,
                          v2,
                          &wil_details_featureChangeNotification);
      if ( result )
        wil_details_featureChangeNotification = 0;
      return result;
    }
  }
  return result;
}
