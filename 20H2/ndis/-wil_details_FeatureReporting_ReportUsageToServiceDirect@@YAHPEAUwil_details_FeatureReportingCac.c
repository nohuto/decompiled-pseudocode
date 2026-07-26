/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C003DC48
 * Callers:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C003DBD4 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C003DA88 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        struct wil_details_FeatureReportingCache *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        enum wil_details_ServiceReportingKind a5)
{
  unsigned int v7; // ebx
  struct wil_details_RecordUsageResult v9; // [rsp+30h] [rbp-58h] BYREF
  struct wil_details_RecordUsageResult v10; // [rsp+48h] [rbp-40h] BYREF

  v7 = 0;
  v10 = *wil_details_FeatureReporting_RecordUsageInCache(&v9, a1, (unsigned int)a5);
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(a2, a5, 1u, a1, &v10);
  LOBYTE(v7) = v10.ignoredUse == 0;
  return v7;
}
