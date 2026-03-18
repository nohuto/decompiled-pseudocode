/*
 * XREFs of ?wil_details_RegisterFeatureStagingChangeNotification@@YAJPEA_K@Z @ 0x1C005E3EC
 * Callers:
 *     ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C00D7078 (-wil_InitializeFeatureStaging@@YAJXZ.c)
 * Callees:
 *     ?wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z @ 0x1C0015E40 (-wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z.c)
 */

const struct wil_details_FeatureDescriptor *__fastcall wil_details_RegisterFeatureStagingChangeNotification(
        unsigned __int64 *a1)
{
  unsigned __int64 *i; // rcx
  const struct wil_details_FeatureDescriptor *result; // rax
  __int64 v3; // r8

  for ( i = (unsigned __int64 *)&wil_details_featureDescriptors_a; ; i = (unsigned __int64 *)((char *)result + 24) )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !result )
      break;
    if ( !*((_BYTE *)result + 13) && !*((_BYTE *)result + 14) && !*((_BYTE *)result + 12) )
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
