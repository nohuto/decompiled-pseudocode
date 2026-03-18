/*
 * XREFs of ?wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00D44F4
 * Callers:
 *     ?wil_details_EvaluateFeatureDependencies@@YAXXZ @ 0x1C00D4450 (-wil_details_EvaluateFeatureDependencies@@YAXXZ.c)
 *     ?wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00D4528 (-wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_F.c)
 * Callees:
 *     ?wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00D4528 (-wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_F.c)
 */

__int64 __fastcall wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 0x80u) != 0 )
    return wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
  else
    return *a1;
}
