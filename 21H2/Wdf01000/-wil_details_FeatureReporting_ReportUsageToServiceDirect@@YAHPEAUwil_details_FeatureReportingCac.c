/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C002E8EC
 * Callers:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C002E89C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 * Callees:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C002E9E0 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        wil_details_FeatureReportingCache *reporting,
        unsigned int featureId,
        int hasNotificationState,
        unsigned int isVariantConfiguration,
        wil_details_ServiceReportingKind kind)
{
  unsigned int v9; // ebx
  unsigned int v11; // [rsp+20h] [rbp-78h]
  unsigned int v12; // [rsp+30h] [rbp-68h] BYREF
  int v13; // [rsp+34h] [rbp-64h]
  wil_details_RecordUsageResult v14; // [rsp+38h] [rbp-60h] BYREF
  wil_details_RecordUsageResult result; // [rsp+50h] [rbp-48h] BYREF

  v9 = 0;
  result = *wil_details_FeatureReporting_RecordUsageInCache(&v14, reporting, kind, isVariantConfiguration, v11);
  if ( WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Flink )
    ((void (__fastcall *)(unsigned int, wil_details_ServiceReportingKind, unsigned int, wil_details_FeatureReportingCache *, wil_details_RecordUsageResult *))WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Flink)(
      featureId,
      kind,
      1u,
      reporting,
      &result);
  if ( hasNotificationState && kind != wil_details_ServiceReportingKind_Store )
  {
    v12 = featureId;
    v13 = (unsigned __int16)kind;
    if ( isVariantConfiguration )
      HIWORD(v13) |= 1u;
    RtlNotifyFeatureUsage(&v12);
  }
  LOBYTE(v9) = result.ignoredUse == 0;
  return v9;
}
