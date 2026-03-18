/*
 * XREFs of ?Feature_Servicing_FontDrvHostFixes_31934460__private_IsEnabled@@YAHXZ @ 0x1C015ADB0
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00DFC8C (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     UmfdQueryFontData @ 0x1C00E0040 (UmfdQueryFontData.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0159D98 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C0159F3C (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 */

__int64 Feature_Servicing_FontDrvHostFixes_31934460__private_IsEnabled(void)
{
  unsigned int CachedFeatureEnabledState; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-18h]

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
                                (unsigned int *)&Feature_Servicing_FontDrvHostFixes_31934460__private_featureState,
                                (__int64)&Feature_Servicing_FontDrvHostFixes_31934460__private_descriptor);
  v1 = (CachedFeatureEnabledState >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_Servicing_FontDrvHostFixes_31934460__private_reporting,
    0x1E747FCu,
    (CachedFeatureEnabledState >> 8) & 1,
    (CachedFeatureEnabledState >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_Servicing_MatchedFrameCookieWatson_35935814_logged_traits,
    v1,
    v3);
  return v1;
}
