/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C001B6CC
 * Callers:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C001B63C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C001B4F0 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(
        wil_details_FeatureReportingCache *reporting,
        unsigned int featureId,
        int hasNotificationState,
        unsigned int isVariantConfiguration,
        wil_details_ServiceReportingKind kind)
{
  unsigned int v9; // ebx
  unsigned int v11; // [rsp+30h] [rbp-40h] BYREF
  int v12; // [rsp+34h] [rbp-3Ch]
  wil_details_RecordUsageResult kindOnlyResult; // [rsp+38h] [rbp-38h] BYREF
  wil_details_RecordUsageResult result; // [rsp+50h] [rbp-20h] BYREF

  v9 = 0;
  result = *wil_details_FeatureReporting_RecordUsageInCache(&kindOnlyResult, reporting, kind, isVariantConfiguration);
  if ( WPP_GLOBAL_WDF_Control.DeviceLock.Header.WaitListHead.Flink )
  {
    ((void (__fastcall *)(unsigned int, wil_details_ServiceReportingKind, unsigned int, wil_details_FeatureReportingCache *, wil_details_RecordUsageResult *))WPP_GLOBAL_WDF_Control.DeviceLock.Header.WaitListHead.Flink)(
      featureId,
      kind,
      1u,
      reporting,
      &result);
    if ( hasNotificationState )
    {
      *(_QWORD *)&kindOnlyResult.queueBackground = 0LL;
      *(_QWORD *)&kindOnlyResult.payloadId = 0LL;
      kindOnlyResult.kindImmediate = kind;
      kindOnlyResult.isVariantConfiguration = isVariantConfiguration;
      ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, wil_details_RecordUsageResult *))WPP_GLOBAL_WDF_Control.DeviceLock.Header.WaitListHead.Flink)(
        featureId,
        (unsigned int)kind,
        1LL,
        0LL,
        &kindOnlyResult);
    }
  }
  else if ( hasNotificationState && kind != wil_details_ServiceReportingKind_Store )
  {
    v11 = featureId;
    v12 = (unsigned __int16)kind;
    if ( isVariantConfiguration )
      HIWORD(v12) |= 1u;
    RtlNotifyFeatureUsage(&v11);
  }
  LOBYTE(v9) = result.ignoredUse == 0;
  return v9;
}
