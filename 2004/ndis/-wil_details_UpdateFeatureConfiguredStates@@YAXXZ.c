/*
 * XREFs of ?wil_details_UpdateFeatureConfiguredStates@@YAXXZ @ 0x1C00F85E0
 * Callers:
 *     ?wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z @ 0x1C00F8560 (-wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     ?wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z @ 0x1C003D860 (-wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z.c)
 *     ?wil_details_BuildFeatureStateCacheFromQueryResults@@YAJJPEBU_RTL_FEATURE_CONFIGURATION@@PEATwil_details_FeatureStateCache@@@Z @ 0x1C00F8358 (-wil_details_BuildFeatureStateCacheFromQueryResults@@YAJJPEBU_RTL_FEATURE_CONFIGURATION@@PEATwil.c)
 */

void wil_details_UpdateFeatureConfiguredStates(void)
{
  const unsigned __int64 *i; // rcx
  RTL_FEATURE_ID featureId; // ecx
  NTSTATUS v2; // eax
  const struct wil_details_FeatureDescriptor *v3; // rax
  volatile signed __int32 **v4; // rbx
  union wil_details_FeatureStateCache v5; // [rsp+20h] [rbp-38h] BYREF
  ULONGLONG ChangeStamp; // [rsp+28h] [rbp-30h] BYREF
  _RTL_FEATURE_CONFIGURATION FeatureConfiguration; // [rsp+30h] [rbp-28h] BYREF

  for ( i = &wil_details_featureDescriptors_a; ; i = (const unsigned __int64 *)(v4 + 3) )
  {
    v3 = wil_details_FeatureDescriptors_SkipPadding(i);
    v4 = (volatile signed __int32 **)v3;
    if ( !v3 )
      break;
    if ( !v3->isAlwaysDisabled && !v3->isAlwaysEnabled && !v3->changeTime )
    {
      featureId = v3->featureId;
      ChangeStamp = 0LL;
      *(_QWORD *)&FeatureConfiguration.FeatureId = 0LL;
      FeatureConfiguration.VariantPayload = 0;
      v2 = RtlQueryFeatureConfiguration(featureId, RtlFeatureConfigurationRuntime, &ChangeStamp, &FeatureConfiguration);
      v5.exchange64 = 0LL;
      wil_details_BuildFeatureStateCacheFromQueryResults(v2, &FeatureConfiguration, &v5);
      _InterlockedXor(*v4, (LOWORD(v5.exchange) ^ (unsigned __int16)**v4) & 0x3E0);
    }
  }
}
