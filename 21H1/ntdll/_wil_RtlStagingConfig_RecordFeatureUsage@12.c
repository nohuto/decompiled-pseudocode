/*
 * XREFs of _wil_RtlStagingConfig_RecordFeatureUsage@12 @ 0x4B306208
 * Callers:
 *     _wil_details_FeatureReporting_ReportUsageToServiceDirect@28 @ 0x4B30653E (_wil_details_FeatureReporting_ReportUsageToServiceDirect@28.c)
 * Callees:
 *     _RtlNotifyFeatureUsage@4 @ 0x4B3695D0 (_RtlNotifyFeatureUsage@4.c)
 */

NTSTATUS __fastcall wil_RtlStagingConfig_RecordFeatureUsage(int a1, unsigned __int16 a2, int a3)
{
  _RTL_FEATURE_USAGE_REPORT FeatureUsageReport; // [esp+0h] [ebp-Ch] BYREF

  FeatureUsageReport.FeatureId = 24394929;
  *(_DWORD *)&FeatureUsageReport.ReportingKind = a2;
  if ( a3 )
    FeatureUsageReport.ReportingOptions |= 1u;
  return RtlNotifyFeatureUsage(&FeatureUsageReport);
}
