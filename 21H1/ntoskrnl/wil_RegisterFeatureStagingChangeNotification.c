/*
 * XREFs of wil_RegisterFeatureStagingChangeNotification @ 0x1405C6564
 * Callers:
 *     CmFcInitSystem1 @ 0x140A525BC (CmFcInitSystem1.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1403EC0E8 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1409149F0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 */

__int64 *wil_RegisterFeatureStagingChangeNotification()
{
  __int64 *i; // rcx
  __int64 *result; // rax

  for ( i = (__int64 *)&wil_details_featureDescriptors_a; ; i = result + 3 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !result )
      break;
    if ( !*((_BYTE *)result + 13) && !*((_BYTE *)result + 14) && !*((_BYTE *)result + 12) )
    {
      result = (__int64 *)RtlRegisterFeatureConfigurationChangeNotification(
                            wil_details_OnFeatureConfigurationChange,
                            0LL,
                            0LL,
                            &wil_details_featureChangeNotification);
      if ( (_DWORD)result )
        wil_details_featureChangeNotification = 0LL;
      return result;
    }
  }
  return result;
}
