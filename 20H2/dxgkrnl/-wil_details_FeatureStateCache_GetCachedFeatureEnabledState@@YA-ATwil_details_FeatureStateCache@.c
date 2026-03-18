/*
 * XREFs of ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C0024DEC
 * Callers:
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024978 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C0024F20 (-wil_details_GetCurrentFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@@PEBUwil_details_.c)
 *     ?Feature_MonitorIoctlTesting__private_IsEnabled@@YAHXZ @ 0x1C0026E14 (-Feature_MonitorIoctlTesting__private_IsEnabled@@YAHXZ.c)
 * Callees:
 *     ?wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C0024E20 (-wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_FeatureStat.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 1) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
}
