/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x140649758
 * Callers:
 *     sub_1407E2434 @ 0x1407E2434 (sub_1407E2434.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x140361540 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

void __fastcall wil_details_FeatureReporting_ReportUsageToService(
        struct wil_details_FeatureReportingCache *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        const struct FEATURE_LOGGED_TRAITS *a5,
        int a6,
        enum wil_ReportingKind a7)
{
  a7 = wil_ReportingKind_DeviceUsage;
  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                       a1,
                       a2,
                       a3,
                       a4,
                       (enum wil_details_ServiceReportingKind)(a6 != 0
                                                             ? wil_details_ServiceReportingKind_DeviceUsage
                                                             : wil_details_ServiceReportingKind_PotentialDeviceUsage)) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, a6, &a7, 0LL, 0, 1uLL);
  }
}
