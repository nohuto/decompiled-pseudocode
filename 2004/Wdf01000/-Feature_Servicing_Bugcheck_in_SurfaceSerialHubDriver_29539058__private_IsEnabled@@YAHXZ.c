/*
 * XREFs of ?Feature_Servicing_Bugcheck_in_SurfaceSerialHubDriver_29539058__private_IsEnabled@@YAHXZ @ 0x1C001C9CC
 * Callers:
 *     ?DeleteObject@FxInterrupt@@UEAAXXZ @ 0x1C0089400 (-DeleteObject@FxInterrupt@@UEAAXXZ.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C001B63C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C001CA34 (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 */

__int64 __fastcall Feature_Servicing_Bugcheck_in_SurfaceSerialHubDriver_29539058__private_IsEnabled()
{
  unsigned int exchange; // eax
  unsigned int enabled; // ebx
  wil_ReportingKind v3; // [rsp+30h] [rbp-18h]

  exchange = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
               &Feature_Servicing_Bugcheck_in_SurfaceSerialHubDriver_29539058__private_featureState,
               wil_details_featureDescriptors_a).exchange;
  enabled = (exchange >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    &Feature_Servicing_Bugcheck_in_SurfaceSerialHubDriver_29539058__private_reporting,
    0x1C2BAF2u,
    (exchange >> 8) & 1,
    (exchange >> 9) & 1,
    &Feature_Servicing_Bugcheck_in_SurfaceSerialHubDriver_29539058_logged_traits,
    enabled,
    v3);
  return enabled;
}
