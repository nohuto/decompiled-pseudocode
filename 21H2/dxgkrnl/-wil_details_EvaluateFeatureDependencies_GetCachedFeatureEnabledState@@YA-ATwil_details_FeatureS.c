/*
 * XREFs of ?wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C01F4854
 * Callers:
 *     ?wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C01F4888 (-wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_F.c)
 *     ?wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z @ 0x1C0301930 (-wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z.c)
 *     ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C03C7078 (-wil_InitializeFeatureStaging@@YAJXZ.c)
 * Callees:
 *     ?wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C01F4888 (-wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_F.c)
 */

__int64 __fastcall wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 0x80u) == 0 )
    return *a1;
  else
    return wil_details_EvaluateFeatureDependencies_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
}
