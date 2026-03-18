/*
 * XREFs of ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C001CA34
 * Callers:
 *     ?Feature_Servicing_Bugcheck_in_SurfaceSerialHubDriver_29539058__private_IsEnabled@@YAHXZ @ 0x1C001C9CC (-Feature_Servicing_Bugcheck_in_SurfaceSerialHubDriver_29539058__private_IsEnabled@@YAHXZ.c)
 *     ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C001CB68 (-wil_details_GetCurrentFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@@PEBUwil_details_.c)
 * Callees:
 *     ?wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C001CA68 (-wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_FeatureStat.c)
 */

wil_details_FeatureStateCache __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
        wil_details_FeatureStateCache *featureState,
        const wil_details_FeatureDescriptor *descriptor)
{
  if ( (featureState->exchange & 1) == 0 )
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
             featureState,
             (wil_details_FeatureStateCache)featureState->exchange,
             descriptor);
  return (wil_details_FeatureStateCache)featureState->exchange;
}
