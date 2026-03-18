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

__int64 *wil_details_OnFeatureConfigurationChange()
{
  __int64 *i; // rcx
  __int64 v1; // rcx
  unsigned int v2; // eax
  __int64 *v3; // rax
  volatile signed __int32 **v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  char v9; // [rsp+50h] [rbp+18h] BYREF

  for ( i = (__int64 *)&wil_details_featureDescriptors_a; ; i = (__int64 *)(v4 + 3) )
  {
    v3 = wil_details_FeatureDescriptors_SkipPadding(i);
    v4 = (volatile signed __int32 **)v3;
    if ( !v3 )
      break;
    if ( !*((_BYTE *)v3 + 13) && !*((_BYTE *)v3 + 14) && !*((_BYTE *)v3 + 12) )
    {
      v1 = *((unsigned int *)v3 + 2);
      v6 = 0LL;
      v7 = 0;
      v2 = RtlQueryFeatureConfiguration(v1, 1LL, &v9, &v6);
      v8 = 0LL;
      wil_details_BuildFeatureStateCacheFromQueryResults(v2, (__int64)&v6, &v8);
      _InterlockedXor(*v4, ((unsigned __int16)v8 ^ (unsigned __int16)**v4) & 0x3E0);
    }
  }
  return wil_details_EvaluateFeatureDependencies();
}
