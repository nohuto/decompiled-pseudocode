/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140A35608
 * Callers:
 *     wil_InitializeFeatureStagingFromBuffers @ 0x140A355E4 (wil_InitializeFeatureStagingFromBuffers.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1403EC0E8 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1405C65C4 (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x140915C60 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 */

__int64 __fastcall wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers(__int64 *a1)
{
  unsigned int v2; // edi
  __int64 *i; // rcx
  __int64 v4; // rax
  int v5; // ecx
  unsigned int FeatureConfigurationFromBuffers; // eax
  unsigned int v7; // eax
  __int64 *v8; // rbx
  __int64 v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  int v12; // [rsp+28h] [rbp-38h]
  _QWORD v13[3]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v14[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+18h] BYREF

  v2 = 0;
  for ( i = (__int64 *)&wil_details_featureDescriptors_a; ; i = v8 + 3 )
  {
    v8 = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !v8 )
      break;
    v15 = 0LL;
    v11 = 0LL;
    v12 = 0;
    if ( *((_BYTE *)v8 + 13) || *((_BYTE *)v8 + 14) )
    {
      FeatureConfigurationFromBuffers = -1073741275;
    }
    else
    {
      v14[0] = 0LL;
      v4 = *a1;
      v5 = *((_DWORD *)v8 + 2);
      v13[0] = 0LL;
      v14[1] = v4;
      v14[2] = a1[1];
      v13[1] = a1[2];
      v13[2] = a1[3];
      FeatureConfigurationFromBuffers = RtlpFcQueryFeatureConfigurationFromBuffers(
                                          v5,
                                          (__int64)v14,
                                          (__int64)v13,
                                          (__int64)&v11);
    }
    if ( FeatureConfigurationFromBuffers == -2147483614 )
    {
      v15 = 131LL;
      v9 = 131LL;
      do
      {
        *(_QWORD *)*v8 = v9;
        v8 = wil_details_FeatureDescriptors_SkipPadding(v8 + 3);
      }
      while ( v8 );
      return v2;
    }
    v7 = wil_details_BuildFeatureStateCacheFromQueryResults(FeatureConfigurationFromBuffers, (__int64)&v11, &v15);
    if ( v7 )
      v2 = v7;
    *(_QWORD *)*v8 = v15;
  }
  return v2;
}
