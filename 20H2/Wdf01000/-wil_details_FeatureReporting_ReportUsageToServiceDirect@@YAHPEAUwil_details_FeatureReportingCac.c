/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C001B694
 * Callers:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C001B60C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C001B4C0 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        wil_details_FeatureReportingCache *reporting,
        unsigned int featureId,
        int kind,
        unsigned int a4,
        wil_details_ServiceReportingKind featureId_0)
{
  unsigned int v7; // ebx
  wil_details_RecordUsageResult v9; // [rsp+30h] [rbp-58h] BYREF
  wil_details_RecordUsageResult result; // [rsp+48h] [rbp-40h] BYREF

  v7 = 0;
  result = *wil_details_FeatureReporting_RecordUsageInCache(&v9, reporting, featureId_0, a4);
  if ( g_wil_details_recordFeatureUsage )
    g_wil_details_recordFeatureUsage(featureId, featureId_0, 1u, reporting, &result);
  LOBYTE(v7) = result.ignoredUse == 0;
  return v7;
}
