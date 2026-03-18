/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0159D98
 * Callers:
 *     ?Feature_Servicing_MatchedFrameCookieWatson_35935814__private_IsEnabled@@YAHXZ @ 0x1C0159A10 (-Feature_Servicing_MatchedFrameCookieWatson_35935814__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_FontDrvHostFixes_31934460__private_IsEnabled@@YAHXZ @ 0x1C015ADB0 (-Feature_Servicing_FontDrvHostFixes_31934460__private_IsEnabled@@YAHXZ.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C0159E28 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     ?wil_details_MapReportingKind@@YA?AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z @ 0x1C015A1AC (-wil_details_MapReportingKind@@YA-AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        const struct FEATURE_LOGGED_TRAITS *a5,
        unsigned int a6,
        int a7)
{
  unsigned int v8; // r10d
  __int64 v9; // r11

  a7 = 3;
  wil_details_MapReportingKind(3LL, a6);
  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(v9, a2, v8) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, a6, (const enum wil_ReportingKind *)&a7, 0LL, 0, 1uLL);
  }
}
