/*
 * XREFs of ?Feature_Servicing_gdi_leak_tracking__private_IsEnabled@@YAHXZ @ 0x1C00CF0D0
 * Callers:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C003DC40 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     bLoadProcessHandleQuota @ 0x1C0074278 (bLoadProcessHandleQuota.c)
 *     GreIncQuotaCount @ 0x1C00A5520 (GreIncQuotaCount.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00CF1F8 (HmgIncProcessHandleCountEx.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C014EBE8 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000E65C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00CDA58 (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 */

__int64 Feature_Servicing_gdi_leak_tracking__private_IsEnabled(void)
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_Servicing_gdi_leak_tracking__private_featureState,
                                (__int64)&Feature_Servicing_gdi_leak_tracking__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_Servicing_gdi_leak_tracking__private_reporting,
    0x29BAFF9u,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_Servicing_GdiTelemetry_37785927_logged_traits,
    v1,
    3);
  return v1;
}
