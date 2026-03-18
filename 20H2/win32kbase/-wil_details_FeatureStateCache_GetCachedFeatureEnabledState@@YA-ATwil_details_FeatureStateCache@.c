/*
 * XREFs of ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00CDA58
 * Callers:
 *     ?Feature_Servicing_BackwardDestroyHandles__private_IsEnabled@@YAHXZ @ 0x1C00CD9E8 (-Feature_Servicing_BackwardDestroyHandles__private_IsEnabled@@YAHXZ.c)
 *     ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C00CDB8C (-wil_details_GetCurrentFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@@PEBUwil_details_.c)
 *     ?Feature_Servicing_NtGdiGetMonitorIDCorruptedPDEV__private_IsEnabled@@YAHXZ @ 0x1C00CEBA0 (-Feature_Servicing_NtGdiGetMonitorIDCorruptedPDEV__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_gdi_leak_tracking__private_IsEnabled@@YAHXZ @ 0x1C00CF0D0 (-Feature_Servicing_gdi_leak_tracking__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_GdiTelemetry_37785927__private_IsEnabled@@YAHXZ @ 0x1C00CF614 (-Feature_Servicing_GdiTelemetry_37785927__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_TelemetryForCollectingDataOnIdSysPeek__private_IsEnabled@@YAHXZ @ 0x1C00D13B0 (-Feature_Servicing_TelemetryForCollectingDataOnIdSysPeek__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_CornerlockSpeedbumpFix__private_IsEnabled@@YAHXZ @ 0x1C00D15D0 (-Feature_Servicing_CornerlockSpeedbumpFix__private_IsEnabled@@YAHXZ.c)
 * Callees:
 *     ?wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00CDA8C (-wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA-ATwil_details_FeatureStat.c)
 */

__int64 __fastcall wil_details_FeatureStateCache_GetCachedFeatureEnabledState(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 1) != 0 )
    return *a1;
  else
    return wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(a1, *a1, a2);
}
