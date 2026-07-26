/*
 * XREFs of ?wil_details_EvaluateFeatureDependencies@@YAXXZ @ 0x1C00F83CC
 * Callers:
 *     ?wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z @ 0x1C00F8560 (-wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z.c)
 *     ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C0143078 (-wil_InitializeFeatureStaging@@YAJXZ.c)
 * Callees:
 *     ?wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z @ 0x1C003D620 (-wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z.c)
 *     ?wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00F8470 (-wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureS.c)
 */

void wil_details_EvaluateFeatureDependencies(void)
{
  const unsigned __int64 *i; // rcx
  unsigned int exchange; // r8d
  BOOL v2; // eax
  const struct wil_details_FeatureDescriptor *v3; // rax
  volatile signed __int32 **v4; // rdx
  const unsigned __int64 *j; // rcx
  const struct wil_details_FeatureDescriptor *v6; // rax
  const struct wil_details_FeatureDescriptor *v7; // rbx
  unsigned int v8; // [rsp+30h] [rbp+8h]

  v8 = 0;
  for ( i = &wil_details_featureDescriptors_a; ; i = (const unsigned __int64 *)(v4 + 3) )
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
  for ( j = &wil_details_featureDescriptors_a; ; j = (const unsigned __int64 *)&v7[1] )
  {
    v6 = wil_details_FeatureDescriptors_SkipPadding(j);
    v7 = v6;
    if ( !v6 )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(v6->featureStateCache, v6);
  }
}
