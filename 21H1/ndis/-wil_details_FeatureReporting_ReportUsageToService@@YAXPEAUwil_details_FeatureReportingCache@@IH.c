/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C003D968
 * Callers:
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A74A8 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisReadRegistry@@YAXXZ @ 0x1C01446A4 (-ndisReadRegistry@@YAXXZ.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C003D9DC (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeatureReporting_ReportUsageToService(
        struct wil_details_FeatureReportingCache *a1,
        unsigned int a2,
        int a3,
        int a4,
        const struct FEATURE_LOGGED_TRAITS *a5)
{
  unsigned int v6; // [rsp+28h] [rbp-30h]
  unsigned __int64 v7; // [rsp+30h] [rbp-28h]
  int v8; // [rsp+78h] [rbp+20h] BYREF

  v8 = 3;
  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                       a1,
                       a2,
                       a3,
                       a4,
                       wil_details_ServiceReportingKind_PotentialDeviceUsage,
                       v6,
                       v7) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, 0, (const enum wil_ReportingKind *)&v8, 0LL, 0, 1uLL);
  }
}
