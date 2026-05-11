/*
 * XREFs of wil_details_OnFeatureConfigurationChange @ 0x1C0022270
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00125A0 (__security_check_cookie.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x1C0022398 (wil_details_EvaluateFeatureDependencies.c)
 */

__int64 wil_details_OnFeatureConfigurationChange()
{
  int **i; // rbx
  __int64 v1; // rcx
  int v2; // eax
  __int16 v3; // dx
  __int16 v4; // dx
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  int v8; // [rsp+30h] [rbp-18h]

  for ( i = &wil_details_featureDescriptors_a; i < (int **)&wil_details_featureDescriptors_z; ++i )
  {
    if ( *i )
    {
LABEL_22:
      if ( !i )
        return wil_details_EvaluateFeatureDependencies();
      if ( !*((_BYTE *)i + 13) && !*((_BYTE *)i + 14) && !*((_BYTE *)i + 12) )
      {
        v1 = *((unsigned int *)i + 2);
        v6 = 0LL;
        v7 = 0LL;
        v8 = 0;
        v2 = RtlQueryFeatureConfiguration(v1, 1LL, &v6, &v7);
        if ( v2 == -2147483614 || v2 == -1073741275 )
          goto LABEL_16;
        if ( v2 )
        {
          if ( v2 == 279 )
          {
            v3 = BYTE4(v7) & 0x80;
            goto LABEL_15;
          }
LABEL_16:
          v4 = 131;
        }
        else
        {
          v3 = BYTE4(v7) & 0xB0 | (4 * (BYTE4(v7) & 0x40));
LABEL_15:
          v4 = (2 * v3) | 0x83;
        }
        _InterlockedXor(*i, ((unsigned __int16)**i ^ (unsigned __int16)v4) & 0x3E0);
      }
      for ( i += 3; i < (int **)&wil_details_featureDescriptors_z; ++i )
      {
        if ( *i )
          goto LABEL_22;
      }
      return wil_details_EvaluateFeatureDependencies();
    }
  }
  return wil_details_EvaluateFeatureDependencies();
}
