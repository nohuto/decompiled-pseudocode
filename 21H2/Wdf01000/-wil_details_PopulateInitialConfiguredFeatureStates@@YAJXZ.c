/*
 * XREFs of ?wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ @ 0x1C00C80F0
 * Callers:
 *     ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C00C80AC (-wil_InitializeFeatureStaging@@YAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A4F0 (__security_check_cookie.c)
 *     ?wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z @ 0x1C001B244 (-wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z.c)
 *     ?wil_details_BuildFeatureStateCacheFromQueryResults@@YAJJPEBU_RTL_FEATURE_CONFIGURATION@@PEATwil_details_FeatureStateCache@@@Z @ 0x1C00BC038 (-wil_details_BuildFeatureStateCacheFromQueryResults@@YAJJPEBU_RTL_FEATURE_CONFIGURATION@@PEATwil.c)
 */

__int64 __fastcall wil_details_PopulateInitialConfiguredFeatureStates()
{
  unsigned int v0; // edi
  const wil_details_FeatureDescriptor *i; // rcx
  unsigned int v2; // eax
  unsigned int v3; // eax
  const wil_details_FeatureDescriptor *v4; // rbx
  __int64 v5; // rdx
  wil_details_FeatureStateCache result; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 changeStamp; // [rsp+28h] [rbp-28h] BYREF
  _RTL_FEATURE_CONFIGURATION featureConfiguration; // [rsp+30h] [rbp-20h] BYREF

  v0 = 0;
  for ( i = wil_details_featureDescriptors_a; ; i = v4 + 1 )
  {
    v4 = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !v4 )
      break;
    changeStamp = 0LL;
    result.exchange64 = 0LL;
    *(_QWORD *)&featureConfiguration.FeatureId = 0LL;
    featureConfiguration.VariantPayload = 0;
    if ( v4->isAlwaysDisabled || v4->isAlwaysEnabled )
      v2 = -1073741275;
    else
      v2 = RtlQueryFeatureConfiguration(
             v4->featureId,
             (unsigned __int8)(v4->changeTime - 2) > 1u,
             &changeStamp,
             &featureConfiguration);
    if ( v2 == -2147483614 )
    {
      result.exchange64 = 131LL;
      v5 = 131LL;
      do
      {
        *v4->featureStateCache = (wil_details_FeatureStateCache)v5;
        v4 = wil_details_FeatureDescriptors_SkipPadding(v4 + 1);
      }
      while ( v4 );
      return v0;
    }
    v3 = wil_details_BuildFeatureStateCacheFromQueryResults(v2, &featureConfiguration, &result);
    if ( v3 )
      v0 = v3;
    *v4->featureStateCache = result;
  }
  return v0;
}
