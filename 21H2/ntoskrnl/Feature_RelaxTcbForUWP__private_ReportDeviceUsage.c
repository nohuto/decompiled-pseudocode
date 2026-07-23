/*
 * XREFs of Feature_RelaxTcbForUWP__private_ReportDeviceUsage @ 0x1403F8C0C
 * Callers:
 *     NtSetInformationToken @ 0x140694530 (NtSetInformationToken.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140285D90 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1403F1CA0 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_RelaxTcbForUWP__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_RelaxTcbForUWP__private_featureState;
  if ( (Feature_RelaxTcbForUWP__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_RelaxTcbForUWP__private_featureState & 0xFFFFFFFE;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_RelaxTcbForUWP__private_descriptor, v0, 3, 1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_RelaxTcbForUWP__private_descriptor);
  }
}
