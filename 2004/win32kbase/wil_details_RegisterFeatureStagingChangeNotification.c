/*
 * XREFs of wil_details_RegisterFeatureStagingChangeNotification @ 0x1C027A22C
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x1C0293078 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C00CEA28 (wil_details_FeatureDescriptors_SkipPadding.c)
 */

_BYTE *wil_details_RegisterFeatureStagingChangeNotification()
{
  _QWORD *i; // rcx
  _BYTE *result; // rax
  __int64 v2; // r8

  for ( i = &wil_details_featureDescriptors_a; ; i = result + 24 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !result )
      break;
    if ( !result[13] && !result[14] && !result[12] )
    {
      result = (_BYTE *)RtlRegisterFeatureConfigurationChangeNotification(
                          wil_details_OnFeatureConfigurationChange,
                          0LL,
                          v2,
                          &wil_details_featureChangeNotification);
      if ( (_DWORD)result )
        wil_details_featureChangeNotification = 0LL;
      return result;
    }
  }
  return result;
}
