/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C00C90F0
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x1C00C90AC (wil_InitializeFeatureStaging.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C0036698 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1C00BD038 (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 */

__int64 __fastcall wil_details_PopulateInitialConfiguredFeatureStates()
{
  unsigned int v0; // edi
  const wil_details_FeatureDescriptor *i; // rcx
  const wil_details_FeatureDescriptor *v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // rdx
  unsigned int v6; // eax
  wil_details_FeatureStateCache result; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 changeStamp; // [rsp+28h] [rbp-30h] BYREF
  _RTL_FEATURE_CONFIGURATION featureConfiguration; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0;
  for ( i = wil_details_featureDescriptors_a; ; i = v2 + 1 )
  {
    v2 = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !v2 )
      break;
    changeStamp = 0LL;
    result.exchange64 = 0LL;
    *(_QWORD *)&featureConfiguration.FeatureId = 0LL;
    featureConfiguration.VariantPayload = 0;
    if ( v2->isAlwaysDisabled || v2->isAlwaysEnabled )
    {
      v3 = -1073741275;
    }
    else
    {
      v3 = RtlQueryFeatureConfiguration(
             v2->featureId,
             (unsigned __int8)(v2->changeTime - 2) > 1u,
             &changeStamp,
             &featureConfiguration);
      if ( v3 == -2147483614 )
      {
        result.exchange64 = 131LL;
        v4 = 131LL;
        do
        {
          *v2->featureStateCache = (wil_details_FeatureStateCache)v4;
          v2 = wil_details_FeatureDescriptors_SkipPadding(v2 + 1);
        }
        while ( v2 );
        return v0;
      }
    }
    v6 = wil_details_BuildFeatureStateCacheFromQueryResults(v3, &featureConfiguration, &result);
    if ( v6 )
      v0 = v6;
    *v2->featureStateCache = result;
  }
  return v0;
}
