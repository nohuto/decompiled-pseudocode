/*
 * XREFs of ?wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00F84A4
 * Callers:
 *     ?wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00F8470 (-wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureS.c)
 * Callees:
 *     ?wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00F8470 (-wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureS.c)
 */

union wil_details_FeatureStateCache __fastcall wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(
        union wil_details_FeatureStateCache *a1,
        union wil_details_FeatureStateCache a2,
        const struct wil_details_FeatureDescriptor *a3)
{
  unsigned int exchange; // ebx
  unsigned int v5; // esi
  const wil_details_FeatureDescriptor *const *requiresFeatures; // r14
  const struct wil_details_FeatureDescriptor *v7; // rax
  char exchange64; // al
  bool v9; // zf
  unsigned int v10; // ecx
  __int64 v12; // [rsp+40h] [rbp+8h]

  exchange = a2.exchange;
  HIDWORD(v12) = 0;
  v5 = (a2.exchange >> 4) & 1;
  if ( v5 )
  {
    requiresFeatures = a3->requiresFeatures;
    if ( requiresFeatures )
    {
      do
      {
        v7 = *requiresFeatures;
        if ( !*requiresFeatures )
          break;
        if ( v7->isAlwaysEnabled || v7->isAlwaysDisabled )
        {
          if ( !v5 )
            goto LABEL_11;
          v9 = v7->isEnabledByDefault == 0;
        }
        else
        {
          exchange64 = wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(
                         v7->featureStateCache,
                         *requiresFeatures).exchange64;
          if ( !v5 )
            goto LABEL_11;
          v9 = (exchange64 & 8) == 0;
        }
        v5 = 1;
        if ( v9 )
LABEL_11:
          v5 = 0;
        ++requiresFeatures;
      }
      while ( v5 );
    }
  }
  v10 = 128;
  if ( ((exchange >> 3) & 1) != v5 )
    v10 = 136;
  _InterlockedXor((volatile signed __int32 *)a1, v10);
  LODWORD(v12) = exchange ^ v10;
  return (union wil_details_FeatureStateCache)v12;
}
