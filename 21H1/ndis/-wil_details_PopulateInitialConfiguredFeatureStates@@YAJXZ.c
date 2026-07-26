/*
 * XREFs of ?wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ @ 0x1C01430BC
 * Callers:
 *     ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C0143078 (-wil_InitializeFeatureStaging@@YAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     ?wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z @ 0x1C003D620 (-wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z.c)
 *     ?wil_details_BuildFeatureStateCacheFromQueryResults@@YAJJPEBU_RTL_FEATURE_CONFIGURATION@@PEATwil_details_FeatureStateCache@@@Z @ 0x1C00F8358 (-wil_details_BuildFeatureStateCacheFromQueryResults@@YAJJPEBU_RTL_FEATURE_CONFIGURATION@@PEATwil.c)
 */

__int64 wil_details_PopulateInitialConfiguredFeatureStates(void)
{
  unsigned int v0; // edi
  const unsigned __int64 *i; // rcx
  NTSTATUS v2; // eax
  unsigned int v3; // eax
  const struct wil_details_FeatureDescriptor *v4; // rbx
  __int64 v5; // rdx
  union wil_details_FeatureStateCache v7; // [rsp+20h] [rbp-30h] BYREF
  ULONGLONG ChangeStamp; // [rsp+28h] [rbp-28h] BYREF
  _RTL_FEATURE_CONFIGURATION FeatureConfiguration; // [rsp+30h] [rbp-20h] BYREF

  v0 = 0;
  for ( i = &wil_details_featureDescriptors_a; ; i = (const unsigned __int64 *)&v4[1] )
  {
    v4 = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !v4 )
      break;
    ChangeStamp = 0LL;
    v7.exchange64 = 0LL;
    *(_QWORD *)&FeatureConfiguration.FeatureId = 0LL;
    FeatureConfiguration.VariantPayload = 0;
    if ( v4->isAlwaysDisabled || v4->isAlwaysEnabled )
      v2 = -1073741275;
    else
      v2 = RtlQueryFeatureConfiguration(
             v4->featureId,
             (RTL_FEATURE_CONFIGURATION_TYPE)((unsigned __int8)(v4->changeTime - 2) > 1u),
             &ChangeStamp,
             &FeatureConfiguration);
    if ( v2 == -2147483614 )
    {
      v7.exchange64 = 131LL;
      v5 = 131LL;
      do
      {
        *v4->featureStateCache = (wil_details_FeatureStateCache)v5;
        v4 = wil_details_FeatureDescriptors_SkipPadding((const unsigned __int64 *)&v4[1]);
      }
      while ( v4 );
      return v0;
    }
    v3 = wil_details_BuildFeatureStateCacheFromQueryResults(v2, &FeatureConfiguration, &v7);
    if ( v3 )
      v0 = v3;
    *v4->featureStateCache = v7;
  }
  return v0;
}
