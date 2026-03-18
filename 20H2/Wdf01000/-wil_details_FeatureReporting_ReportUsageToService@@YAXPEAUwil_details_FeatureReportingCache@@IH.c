/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C001B60C
 * Callers:
 *     FxLibraryGlobalsCommission @ 0x1C00568A0 (FxLibraryGlobalsCommission.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C001B694 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?wil_details_MapReportingKind@@YA?AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z @ 0x1C0056244 (-wil_details_MapReportingKind@@YA-AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z.c)
 */

void __fastcall wil_details_FeatureReporting_ReportUsageToService(
        wil_details_FeatureReportingCache *reporting,
        unsigned int featureId,
        int traits,
        int enabled,
        const FEATURE_LOGGED_TRAITS *reporting_0,
        int featureId_0)
{
  wil_details_ServiceReportingKind v7; // eax
  int v8; // r8d
  wil_details_FeatureReportingCache *v9; // r9
  unsigned int v10; // [rsp+28h] [rbp-30h]
  unsigned __int64 v11; // [rsp+30h] [rbp-28h]
  wil_ReportingKind kindParam; // [rsp+78h] [rbp+20h] BYREF

  kindParam = wil_ReportingKind_DeviceUsage;
  v7 = wil_details_MapReportingKind(wil_ReportingKind_DeviceUsage, featureId_0);
  if ( wil_details_FeatureReporting_ReportUsageToServiceDirect(v9, featureId, v8, (int)v9, v7, v10, v11) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(featureId, reporting_0, 0LL, featureId_0, &kindParam, 0LL, 0, 1uLL);
  }
}
