/*
 * XREFs of ?Feature_MonitorIoctlTesting__private_IsEnabled@@YAHXZ @ 0x1C0026EF4
 * Callers:
 *     ?_InitMipiDsiCaps@DXGMONITOR@@AEAAJXZ @ 0x1C01870AC (-_InitMipiDsiCaps@DXGMONITOR@@AEAAJXZ.c)
 *     ?_DsiReset@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z @ 0x1C02FB488 (-_DsiReset@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z.c)
 *     ?_DsiTransmission@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z @ 0x1C02FB730 (-_DsiTransmission@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z.c)
 *     ?_QueryMipiDsiCaps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z @ 0x1C02FBB70 (-_QueryMipiDsiCaps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C0024D8C (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 */

__int64 Feature_MonitorIoctlTesting__private_IsEnabled(void)
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_MonitorIoctlTesting__private_featureState,
                                (__int64)&Feature_MonitorIoctlTesting__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_MonitorIoctlTesting__private_reporting,
    0x133185Eu,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_MonitorIoctlTesting_logged_traits,
    v1,
    v3);
  return v1;
}
