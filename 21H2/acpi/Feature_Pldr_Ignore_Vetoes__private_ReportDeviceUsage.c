/*
 * XREFs of Feature_Pldr_Ignore_Vetoes__private_ReportDeviceUsage @ 0x1C0031E04
 * Callers:
 *     DriverEntry @ 0x1C00BB98C (DriverEntry.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C00023A8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0031E54 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_Pldr_Ignore_Vetoes__private_ReportDeviceUsage()
{
  __int64 v0; // rcx
  __int64 result; // rax

  if ( (Feature_Pldr_Ignore_Vetoes__private_featureState & 0x10) == 0 )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      Feature_Pldr_Ignore_Vetoes__private_featureState | 1u,
      Feature_Pldr_Ignore_Vetoes__private_featureState | 1u,
      3u);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v0, 3LL);
  }
  return result;
}
