/*
 * XREFs of ?Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled@@YGHXZ @ 0xF636A
 * Callers:
 *     _NtGdiDdDDICreateDCFromMemory@4 @ 0x7BD76 (_NtGdiDdDDICreateDCFromMemory@4.c)
 *     _NtGdiDdDDIDestroyDCFromMemory@4 @ 0xCB254 (_NtGdiDdDDIDestroyDCFromMemory@4.c)
 *     _DxgkEngBltViaGDI@52 @ 0x1D3921 (_DxgkEngBltViaGDI@52.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YGXPAUwil_details_FeatureReportingCache@@IHHPBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@K@Z @ 0xF6678 (-wil_details_FeatureReporting_ReportUsageToService@@YGXPAUwil_details_FeatureReportingCache@@IHH.c)
 *     ?wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YG?ATwil_details_FeatureStateCache@@PAT1@T1@PBUwil_details_FeatureDescriptor@@@Z @ 0xF6796 (-wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YG-ATwil_details_FeatureStat.c)
 */

int __stdcall Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled()
{
  unsigned int v0; // eax
  int v1; // ecx
  int v2; // esi

  v0 = Feature_Servicing_DynamicModeChange_23402279__private_featureState;
  v1 = 0;
  if ( (Feature_Servicing_DynamicModeChange_23402279__private_featureState & 1) == 0 )
    v0 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
           &Feature_Servicing_DynamicModeChange_23402279__private_featureState,
           &Feature_Servicing_DynamicModeChange_23402279__private_descriptor,
           Feature_Servicing_DynamicModeChange_23402279__private_featureState,
           0);
  v2 = (v0 >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService((v0 >> 8) & 1, (v0 >> 9) & 1, v1, v2, v1, v1);
  return v2;
}
