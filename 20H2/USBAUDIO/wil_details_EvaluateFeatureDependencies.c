/*
 * XREFs of wil_details_EvaluateFeatureDependencies @ 0x1C0022398
 * Callers:
 *     wil_details_OnFeatureConfigurationChange @ 0x1C0022270 (wil_details_OnFeatureConfigurationChange.c)
 *     wil_InitializeFeatureStaging @ 0x1C0035008 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C002247C (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

void wil_details_EvaluateFeatureDependencies()
{
  int **i; // r8
  int **v1; // rcx
  volatile signed __int32 *v2; // rax
  unsigned int v3; // r10d
  volatile signed __int32 v4; // edx
  BOOL v5; // eax
  int *v6; // rax
  unsigned __int64 v7; // r11
  __int64 v8; // r8

  i = Feature_Servicing_AudioRegressionFix__private_descriptor;
  v1 = Feature_Servicing_AudioRegressionFix__private_descriptor;
  if ( Feature_Servicing_AudioRegressionFix__private_descriptor < (int **)&wil_details_featureDescriptors_z )
  {
    while ( 1 )
    {
      v2 = *v1;
      if ( *v1 )
        break;
      if ( ++v1 >= (int **)&wil_details_featureDescriptors_z )
        goto LABEL_20;
    }
    if ( !v1 )
      goto LABEL_20;
    v3 = 0;
    do
    {
      v4 = *v2;
      if ( (*v2 & 0x80u) != 0 )
      {
        if ( (v4 & 0x60) != 0 )
          v5 = (*v2 & 0x60) == 64;
        else
          v5 = *((_BYTE *)v1 + 23) != 0;
        v3 = v3 & 0xFFFFFFEF | (16 * v5) ^ v4 & 0x10;
        _InterlockedXor(*v1, v3);
      }
      for ( v1 += 4; ; ++v1 )
      {
        if ( v1 >= (int **)&wil_details_featureDescriptors_z )
          goto LABEL_20;
        v2 = *v1;
        if ( *v1 )
          break;
      }
    }
    while ( v1 );
LABEL_20:
    while ( i < (int **)&wil_details_featureDescriptors_z )
    {
      v6 = *i;
      if ( *i )
      {
LABEL_26:
        if ( i )
        {
          wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(v6, i);
          for ( i = (int **)(v8 + 32); (unsigned __int64)i < v7; ++i )
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
