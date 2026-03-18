/*
 * XREFs of ?Feature_Servicing_WdfPowerFailure_31388879__private_IsEnabled@@YAHXZ @ 0x1C0036750
 * Callers:
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00161D8 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C002E89C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00367B8 (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 */

__int64 __fastcall Feature_Servicing_WdfPowerFailure_31388879__private_IsEnabled()
{
  unsigned int exchange; // eax
  unsigned int enabled; // ebx
  wil_ReportingKind v3; // [rsp+30h] [rbp-18h]

  exchange = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
               &Feature_Servicing_WdfPowerFailure_31388879__private_featureState,
               wil_details_featureDescriptors_a).exchange;
  enabled = (exchange >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    &Feature_Servicing_WdfPowerFailure_31388879__private_reporting,
    0x1DEF4CFu,
    (exchange >> 8) & 1,
    (exchange >> 9) & 1,
    &Feature_Servicing_WdfPowerFailure_31388879_logged_traits,
    enabled,
    v3);
  return enabled;
}
