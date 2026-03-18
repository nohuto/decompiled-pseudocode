/*
 * XREFs of ?wil_details_UpdateFeatureConfiguredStates@@YAXXZ @ 0x1C00BC2C0
 * Callers:
 *     ?wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z @ 0x1C00BC240 (-wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     ?wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z @ 0x1C001B0A4 (-wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z.c)
 *     ?wil_details_BuildFeatureStateCacheFromQueryResults@@YAJJPEBU_RTL_FEATURE_CONFIGURATION@@PEATwil_details_FeatureStateCache@@@Z @ 0x1C00BC038 (-wil_details_BuildFeatureStateCacheFromQueryResults@@YAJJPEBU_RTL_FEATURE_CONFIGURATION@@PEATwil.c)
 */

void wil_details_UpdateFeatureConfiguredStates(void)
{
  const wil_details_FeatureDescriptor *i; // rcx
  __int64 featureId; // rcx
  unsigned int v2; // eax
  const wil_details_FeatureDescriptor *v3; // rax
  volatile signed __int32 **v4; // rbx
  wil_details_FeatureStateCache update; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 changeStamp; // [rsp+28h] [rbp-30h] BYREF
  _RTL_FEATURE_CONFIGURATION featureConfiguration; // [rsp+30h] [rbp-28h] BYREF

  for ( i = wil_details_featureDescriptors_a; ; i = (const wil_details_FeatureDescriptor *)(v4 + 3) )
  {
    v3 = wil_details_FeatureDescriptors_SkipPadding(i);
    v4 = (volatile signed __int32 **)v3;
    if ( !v3 )
      break;
    if ( !v3->isAlwaysDisabled && !v3->isAlwaysEnabled && !v3->changeTime )
    {
      featureId = v3->featureId;
      changeStamp = 0LL;
      *(_QWORD *)&featureConfiguration.FeatureId = 0LL;
      featureConfiguration.VariantPayload = 0;
      v2 = RtlQueryFeatureConfiguration(featureId, 1LL, &changeStamp, &featureConfiguration);
      update.exchange64 = 0LL;
      wil_details_BuildFeatureStateCacheFromQueryResults(v2, &featureConfiguration, &update);
      _InterlockedXor(*v4, (LOWORD(update.exchange) ^ (unsigned __int16)**v4) & 0x3E0);
    }
  }
}
