/*
 * XREFs of ?wil_details_RegisterFeatureStagingChangeNotification@@YAJPEA_K@Z @ 0x1C037B25C
 * Callers:
 *     ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C0393078 (-wil_InitializeFeatureStaging@@YAJXZ.c)
 * Callees:
 *     ?wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z @ 0x1C015AF68 (-wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z.c)
 */

const struct wil_details_FeatureDescriptor *__fastcall wil_details_RegisterFeatureStagingChangeNotification(
        unsigned __int64 *a1)
{
  unsigned __int64 *i; // rcx
  const struct wil_details_FeatureDescriptor *result; // rax
  __int64 v3; // r8

  for ( i = (unsigned __int64 *)&Feature_Servicing_MatchedFrameCookieWatson_35935814__private_descriptor;
        ;
        i = (unsigned __int64 *)((char *)result + 32) )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !result )
      break;
    if ( !*((_BYTE *)result + 21) && !*((_BYTE *)result + 22) && !*((_BYTE *)result + 20) )
    {
      result = (const struct wil_details_FeatureDescriptor *)RtlRegisterFeatureConfigurationChangeNotification(
                                                               wil_details_OnFeatureConfigurationChange,
                                                               0LL,
                                                               v3,
                                                               &wil_details_featureChangeNotification);
      if ( (_DWORD)result )
        wil_details_featureChangeNotification = 0LL;
      return result;
    }
  }
  return result;
}
