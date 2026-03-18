/*
 * XREFs of wil_details_UpdateFeatureConfiguredStates @ 0x1C006B2D0
 * Callers:
 *     wil_details_OnFeatureConfigurationChange @ 0x1C006B250 (wil_details_OnFeatureConfigurationChange.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C001A1FC (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1C006B038 (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 */

volatile signed __int32 **wil_details_UpdateFeatureConfiguredStates()
{
  _QWORD *i; // rcx
  __int64 v1; // rcx
  unsigned int v2; // eax
  volatile signed __int32 **result; // rax
  volatile signed __int32 **v4; // rbx
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  for ( i = &wil_details_featureDescriptors_a; ; i = v4 + 4 )
  {
    result = (volatile signed __int32 **)wil_details_FeatureDescriptors_SkipPadding(i);
    v4 = result;
    if ( !result )
      break;
    if ( !*((_BYTE *)result + 21) && !*((_BYTE *)result + 22) && !*((_BYTE *)result + 20) )
    {
      v1 = *((unsigned int *)result + 4);
      v6 = 0LL;
      v7 = 0LL;
      v8 = 0;
      v2 = RtlQueryFeatureConfiguration(v1, 1LL, &v6, &v7);
      v5 = 0LL;
      wil_details_BuildFeatureStateCacheFromQueryResults(v2, (__int64)&v7, &v5);
      _InterlockedXor(*v4, ((unsigned __int16)v5 ^ (unsigned __int16)**v4) & 0x3E0);
    }
  }
  return result;
}
