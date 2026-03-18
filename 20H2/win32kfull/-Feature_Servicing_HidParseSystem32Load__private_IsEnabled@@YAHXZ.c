/*
 * XREFs of ?Feature_Servicing_HidParseSystem32Load__private_IsEnabled@@YAHXZ @ 0x1C015F3C8
 * Callers:
 *     ?LoadApiSetHost@@YAJPEAU_Win32kApiSetHost@@PEAU_UNICODE_STRING@@@Z @ 0x1C011E5E8 (-LoadApiSetHost@@YAJPEAU_Win32kApiSetHost@@PEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C015AB04 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C015C068 (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 */

__int64 Feature_Servicing_HidParseSystem32Load__private_IsEnabled(void)
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_Servicing_HidParseSystem32Load__private_featureState,
                                (__int64)&Feature_Servicing_HidParseSystem32Load__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_Servicing_HidParseSystem32Load__private_reporting,
    0x28AD11Eu,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_Servicing_GdiTelemetry_37785927_logged_traits,
    v1,
    v3);
  return v1;
}
