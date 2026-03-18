/*
 * XREFs of ?Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled@@YAHXZ @ 0x1C00CEC5C
 * Callers:
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C006D360 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2860 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00D034C (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00ACE78 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00CECC4 (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 */

__int64 Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled(void)
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                &Feature_Servicing_DynamicModeChange_23402279__private_featureState,
                                &Feature_Servicing_DynamicModeChange_23402279__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_Servicing_DynamicModeChange_23402279__private_reporting,
    0x1651727u,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_Servicing_DynamicModeChange_23402279_logged_traits,
    v1,
    v3);
  return v1;
}
