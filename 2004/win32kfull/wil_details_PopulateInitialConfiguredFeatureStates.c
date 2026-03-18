/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C03940BC
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x1C0394078 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C0158110 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1C037C038 (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 */

__int64 wil_details_PopulateInitialConfiguredFeatureStates()
{
  unsigned int v0; // edi
  _QWORD *i; // rcx
  unsigned int v2; // eax
  unsigned int v3; // eax
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v7; // [rsp+20h] [rbp-30h] BYREF
  __int64 v8; // [rsp+28h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-20h] BYREF
  int v10; // [rsp+38h] [rbp-18h]

  v0 = 0;
  for ( i = &Feature_Servicing_MatchedFrameCookieWatson_35935814__private_descriptor; ; i = v4 + 3 )
  {
    v4 = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !v4 )
      break;
    v8 = 0LL;
    v7 = 0LL;
    v9 = 0LL;
    v10 = 0;
    if ( *((_BYTE *)v4 + 13) || *((_BYTE *)v4 + 14) )
      v2 = -1073741275;
    else
      v2 = RtlQueryFeatureConfiguration(
             *((unsigned int *)v4 + 2),
             (unsigned __int8)(*((_BYTE *)v4 + 12) - 2) > 1u,
             &v8,
             &v9);
    if ( v2 == -2147483614 )
    {
      v7 = 131LL;
      v5 = 131LL;
      do
      {
        *(_QWORD *)*v4 = v5;
        v4 = wil_details_FeatureDescriptors_SkipPadding(v4 + 3);
      }
      while ( v4 );
      return v0;
    }
    v3 = wil_details_BuildFeatureStateCacheFromQueryResults(v2, (__int64)&v9, &v7);
    if ( v3 )
      v0 = v3;
    *(_QWORD *)*v4 = v7;
  }
  return v0;
}
