/*
 * XREFs of ?wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ @ 0x1C02910BC
 * Callers:
 *     ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C0291078 (-wil_InitializeFeatureStaging@@YAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ?wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z @ 0x1C00CE1F4 (-wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z.c)
 *     ?wil_details_BuildFeatureStateCacheFromQueryResults@@YAJJPEBU_RTL_FEATURE_CONFIGURATION@@PEATwil_details_FeatureStateCache@@@Z @ 0x1C0278190 (-wil_details_BuildFeatureStateCacheFromQueryResults@@YAJJPEBU_RTL_FEATURE_CONFIGURATION@@PEATwil.c)
 */

__int64 wil_details_PopulateInitialConfiguredFeatureStates(void)
{
  unsigned int v0; // edi
  unsigned __int64 *i; // rcx
  unsigned int v2; // eax
  unsigned int Results; // eax
  const struct wil_details_FeatureDescriptor *v4; // rbx
  __int64 v5; // rdx
  __int64 v7; // [rsp+20h] [rbp-30h] BYREF
  __int64 v8; // [rsp+28h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-20h] BYREF
  int v10; // [rsp+38h] [rbp-18h]

  v0 = 0;
  for ( i = (unsigned __int64 *)&wil_details_featureDescriptors_a; ; i = (unsigned __int64 *)((char *)v4 + 32) )
  {
    v4 = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !v4 )
      break;
    v8 = 0LL;
    v7 = 0LL;
    v9 = 0LL;
    v10 = 0;
    if ( *((_BYTE *)v4 + 21) || *((_BYTE *)v4 + 22) )
      v2 = -1073741275;
    else
      v2 = ((__int64 (__fastcall *)(_QWORD, bool, __int64 *, __int64 *, __int64))RtlQueryFeatureConfiguration)(
             *((unsigned int *)v4 + 4),
             (unsigned __int8)(*((_BYTE *)v4 + 20) - 2) > 1u,
             &v8,
             &v9,
             v7);
    if ( v2 == -2147483614 )
    {
      v7 = 131LL;
      v5 = 131LL;
      do
      {
        **(_QWORD **)v4 = v5;
        v4 = wil_details_FeatureDescriptors_SkipPadding((_QWORD *)v4 + 4);
      }
      while ( v4 );
      return v0;
    }
    Results = wil_details_BuildFeatureStateCacheFromQueryResults(
                v2,
                (const struct _RTL_FEATURE_CONFIGURATION *)&v9,
                (union wil_details_FeatureStateCache *)&v7);
    if ( Results )
      v0 = Results;
    **(_QWORD **)v4 = v7;
  }
  return v0;
}
