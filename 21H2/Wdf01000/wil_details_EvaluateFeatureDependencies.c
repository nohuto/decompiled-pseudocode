/*
 * XREFs of wil_details_EvaluateFeatureDependencies @ 0x1C00BD0AC
 * Callers:
 *     wil_details_OnFeatureConfigurationChange @ 0x1C00BD250 (wil_details_OnFeatureConfigurationChange.c)
 *     wil_InitializeFeatureStaging @ 0x1C00C90AC (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C0036698 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1C00BD150 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

const wil_details_FeatureDescriptor *wil_details_EvaluateFeatureDependencies()
{
  const wil_details_FeatureDescriptor *i; // rcx
  unsigned int exchange; // r8d
  BOOL v2; // eax
  const wil_details_FeatureDescriptor *v3; // rax
  volatile signed __int32 **v4; // rdx
  const wil_details_FeatureDescriptor *j; // rcx
  const wil_details_FeatureDescriptor *result; // rax
  const wil_details_FeatureDescriptor *v7; // rbx
  unsigned int v8; // [rsp+30h] [rbp+8h]

  v8 = 0;
  for ( i = wil_details_featureDescriptors_a; ; i = (const wil_details_FeatureDescriptor *)(v4 + 6) )
  {
    v3 = wil_details_FeatureDescriptors_SkipPadding(i);
    v4 = (volatile signed __int32 **)v3;
    if ( !v3 )
      break;
    exchange = v3->featureStateCache->exchange;
    if ( (exchange & 0x80u) != 0 )
    {
      if ( (exchange & 0x60) != 0 )
        v2 = (v3->featureStateCache->exchange & 0x60) == 64;
      else
        v2 = v3->isEnabledByDefault != 0;
      v8 = v8 & 0xFFFFFFEF | (16 * v2) ^ exchange & 0x10;
      _InterlockedXor(*v4, v8);
    }
  }
  for ( j = wil_details_featureDescriptors_a; ; j = v7 + 1 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(j);
    v7 = result;
    if ( !result )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(result->featureStateCache, result);
  }
  return result;
}
