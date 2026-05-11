/*
 * XREFs of wil_details_EvaluateFeatureDependencies @ 0x1C0022398
 * Callers:
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1C0022270 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 *     wil_InitializeFeatureStaging @ 0x1C0036008 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C0022484 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

void wil_details_EvaluateFeatureDependencies()
{
  __int64 *i; // r9
  volatile signed __int32 **v1; // rcx
  volatile signed __int32 *v2; // rax
  unsigned int v3; // r10d
  volatile signed __int32 v4; // edx
  int v5; // eax
  __int64 v6; // rax
  unsigned __int64 v7; // r11
  __int64 v8; // r9

  i = (__int64 *)&wil_details_featureDescriptors_a;
  v1 = (volatile signed __int32 **)&wil_details_featureDescriptors_a;
  if ( &wil_details_featureDescriptors_a < (_UNKNOWN **)&wil_details_featureDescriptors_z )
  {
    while ( 1 )
    {
      v2 = *v1;
      if ( *v1 )
        break;
      if ( ++v1 >= (volatile signed __int32 **)&wil_details_featureDescriptors_z )
        goto LABEL_20;
    }
    if ( !v1 )
      goto LABEL_20;
    v3 = 0;
    do
    {
      v4 = *v2;
      if ( (*v2 & 0x200) != 0 )
      {
        if ( (v4 & 0x180) != 0 )
          v5 = (*v2 & 0x180) == 256;
        else
          v5 = *((_BYTE *)v1 + 31) != 0;
        v3 = v3 & 0xFFFFFFBF | (v5 << 6) ^ v4 & 0x40;
        _InterlockedXor(*v1, v3);
      }
      for ( v1 += 5; ; ++v1 )
      {
        if ( v1 >= (volatile signed __int32 **)&wil_details_featureDescriptors_z )
          goto LABEL_20;
        v2 = *v1;
        if ( *v1 )
          break;
      }
    }
    while ( v1 );
LABEL_20:
    while ( i < (__int64 *)&wil_details_featureDescriptors_z )
    {
      v6 = *i;
      if ( *i )
      {
LABEL_26:
        if ( i )
        {
          wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(v6, i);
          for ( i = (__int64 *)(v8 + 40); (unsigned __int64)i < v7; ++i )
          {
            v6 = *i;
            if ( *i )
              goto LABEL_26;
          }
        }
        return;
      }
      ++i;
    }
  }
}
