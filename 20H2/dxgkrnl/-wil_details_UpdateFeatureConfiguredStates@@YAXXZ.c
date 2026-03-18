/*
 * XREFs of ?wil_details_UpdateFeatureConfiguredStates@@YAXXZ @ 0x1C00DA260
 * Callers:
 *     ?wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z @ 0x1C00DA1E0 (-wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z @ 0x1C00267D0 (-wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z.c)
 *     ?wil_details_BuildFeatureStateCacheFromQueryResults@@YAJJPEBU_RTL_FEATURE_CONFIGURATION@@PEATwil_details_FeatureStateCache@@@Z @ 0x1C00D9FCC (-wil_details_BuildFeatureStateCacheFromQueryResults@@YAJJPEBU_RTL_FEATURE_CONFIGURATION@@PEATwil.c)
 */

void wil_details_UpdateFeatureConfiguredStates(void)
{
  unsigned __int64 *i; // rcx
  __int64 v1; // rcx
  unsigned int v2; // eax
  const struct wil_details_FeatureDescriptor *v3; // rax
  volatile signed __int32 **v4; // rbx
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  for ( i = (unsigned __int64 *)&wil_details_featureDescriptors_a; ; i = (unsigned __int64 *)(v4 + 4) )
  {
    v3 = wil_details_FeatureDescriptors_SkipPadding(i);
    v4 = (volatile signed __int32 **)v3;
    if ( !v3 )
      break;
    if ( !*((_BYTE *)v3 + 21) && !*((_BYTE *)v3 + 22) && !*((_BYTE *)v3 + 20) )
    {
      v1 = *((unsigned int *)v3 + 4);
      v6 = 0LL;
      v7 = 0LL;
      v8 = 0;
      v2 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64 *, __int64))RtlQueryFeatureConfiguration)(
             v1,
             1LL,
             &v6,
             &v7,
             v5);
      v5 = 0LL;
      wil_details_BuildFeatureStateCacheFromQueryResults(
        v2,
        (const struct _RTL_FEATURE_CONFIGURATION *)&v7,
        (union wil_details_FeatureStateCache *)&v5);
      _InterlockedXor(*v4, ((unsigned __int16)v5 ^ (unsigned __int16)**v4) & 0x3E0);
    }
  }
}
