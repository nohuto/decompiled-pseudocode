/*
 * XREFs of wil_details_EvaluateFeatureDependencies @ 0x1C037C0AC
 * Callers:
 *     wil_details_OnFeatureConfigurationChange @ 0x1C037C240 (wil_details_OnFeatureConfigurationChange.c)
 *     wil_InitializeFeatureStaging @ 0x1C0394078 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C0158110 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C037C150 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

_QWORD *wil_details_EvaluateFeatureDependencies()
{
  _QWORD *i; // rcx
  volatile signed __int32 v1; // r8d
  BOOL v2; // eax
  volatile signed __int32 **v3; // rax
  volatile signed __int32 **v4; // rdx
  _QWORD *j; // rcx
  _QWORD *result; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // [rsp+30h] [rbp+8h]

  v8 = 0;
  for ( i = &Feature_Servicing_MatchedFrameCookieWatson_35935814__private_descriptor; ; i = v4 + 3 )
  {
    v3 = (volatile signed __int32 **)wil_details_FeatureDescriptors_SkipPadding(i);
    v4 = v3;
    if ( !v3 )
      break;
    v1 = **v3;
    if ( (v1 & 0x80u) != 0 )
    {
      if ( (v1 & 0x60) != 0 )
        v2 = (**v3 & 0x60) == 64;
      else
        v2 = *((_BYTE *)v3 + 15) != 0;
      v8 = v8 & 0xFFFFFFEF | (16 * v2) ^ v1 & 0x10;
      _InterlockedXor(*v4, v8);
    }
  }
  for ( j = &Feature_Servicing_MatchedFrameCookieWatson_35935814__private_descriptor; ; j = v7 + 3 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(j);
    v7 = result;
    if ( !result )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*result, result);
  }
  return result;
}
