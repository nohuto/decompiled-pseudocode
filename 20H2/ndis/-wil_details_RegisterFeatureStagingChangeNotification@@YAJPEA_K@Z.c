/*
 * XREFs of ?wil_details_RegisterFeatureStagingChangeNotification@@YAJPEA_K@Z @ 0x1C00F857C
 * Callers:
 *     ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C0143078 (-wil_InitializeFeatureStaging@@YAJXZ.c)
 * Callees:
 *     ?wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z @ 0x1C003D860 (-wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z.c)
 */

int __fastcall wil_details_RegisterFeatureStagingChangeNotification(unsigned __int64 *a1)
{
  const unsigned __int64 *i; // rcx
  const struct wil_details_FeatureDescriptor *v2; // rax
  ULONGLONG *v3; // r8

  for ( i = &wil_details_featureDescriptors_a; ; i = (const unsigned __int64 *)&v2[1] )
  {
    v2 = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !v2 )
      break;
    if ( !v2->isAlwaysDisabled && !v2->isAlwaysEnabled && !v2->changeTime )
    {
      LODWORD(v2) = RtlRegisterFeatureConfigurationChangeNotification(
                      (PRTL_FEATURE_CONFIGURATION_CHANGE_CALLBACK)wil_details_OnFeatureConfigurationChange,
                      0LL,
                      v3,
                      &wil_details_featureChangeNotification);
      if ( (_DWORD)v2 )
        wil_details_featureChangeNotification = 0LL;
      return (int)v2;
    }
  }
  return (int)v2;
}
