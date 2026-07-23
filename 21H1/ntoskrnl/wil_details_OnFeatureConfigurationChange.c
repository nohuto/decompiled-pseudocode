/*
 * XREFs of wil_details_OnFeatureConfigurationChange @ 0x1405C67D0
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1403EC0E8 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1405C65C4 (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x1405C6638 (wil_details_EvaluateFeatureDependencies.c)
 *     RtlQueryFeatureConfiguration @ 0x140764540 (RtlQueryFeatureConfiguration.c)
 */

void __fastcall wil_details_OnFeatureConfigurationChange(PVOID a1)
{
  __int64 *i; // rcx
  RTL_FEATURE_ID v2; // ecx
  NTSTATUS v3; // eax
  __int64 *v4; // rax
  volatile signed __int32 **v5; // rbx
  _RTL_FEATURE_CONFIGURATION FeatureConfiguration; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  ULONGLONG ChangeStamp; // [rsp+50h] [rbp+18h] BYREF

  for ( i = (__int64 *)&wil_details_featureDescriptors_a; ; i = (__int64 *)(v5 + 3) )
  {
    v4 = wil_details_FeatureDescriptors_SkipPadding(i);
    v5 = (volatile signed __int32 **)v4;
    if ( !v4 )
      break;
    if ( !*((_BYTE *)v4 + 13) && !*((_BYTE *)v4 + 14) && !*((_BYTE *)v4 + 12) )
    {
      v2 = *((_DWORD *)v4 + 2);
      *(_QWORD *)&FeatureConfiguration.FeatureId = 0LL;
      FeatureConfiguration.VariantPayload = 0;
      v3 = RtlQueryFeatureConfiguration(v2, RtlFeatureConfigurationRuntime, &ChangeStamp, &FeatureConfiguration);
      v7 = 0LL;
      wil_details_BuildFeatureStateCacheFromQueryResults(v3, (__int64)&FeatureConfiguration, &v7);
      _InterlockedXor(*v5, ((unsigned __int16)v7 ^ (unsigned __int16)**v5) & 0x3E0);
    }
  }
  wil_details_EvaluateFeatureDependencies();
}
