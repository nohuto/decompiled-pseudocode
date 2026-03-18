/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C007B080
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x1C007B03C (wil_InitializeFeatureStaging.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C001904C (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1C006B038 (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 */

__int64 wil_details_PopulateInitialConfiguredFeatureStates()
{
  unsigned int v0; // edi
  _QWORD *i; // rcx
  _QWORD *v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // rdx
  unsigned int v6; // eax
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h]

  v0 = 0;
  for ( i = &wil_details_featureDescriptors_a; ; i = v2 + 5 )
  {
    v2 = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !v2 )
      break;
    v8 = 0LL;
    v7 = 0LL;
    v9 = 0LL;
    v10 = 0;
    if ( *((_BYTE *)v2 + 13) || *((_BYTE *)v2 + 14) )
    {
      v3 = -1073741275;
    }
    else
    {
      v3 = RtlQueryFeatureConfiguration(
             *((unsigned int *)v2 + 2),
             (unsigned __int8)(*((_BYTE *)v2 + 12) - 2) > 1u,
             &v8,
             &v9);
      if ( v3 == -2147483614 )
      {
        v7 = 131LL;
        v4 = 131LL;
        do
        {
          *(_QWORD *)*v2 = v4;
          v2 = wil_details_FeatureDescriptors_SkipPadding(v2 + 5);
        }
        while ( v2 );
        return v0;
      }
    }
    v6 = wil_details_BuildFeatureStateCacheFromQueryResults(v3, (__int64)&v9, &v7);
    if ( v6 )
      v0 = v6;
    *(_QWORD *)*v2 = v7;
  }
  return v0;
}
