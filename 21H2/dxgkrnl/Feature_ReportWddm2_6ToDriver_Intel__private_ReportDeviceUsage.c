/*
 * XREFs of Feature_ReportWddm2_6ToDriver_Intel__private_ReportDeviceUsage @ 0x1C0028448
 * Callers:
 *     DpiAddDevice @ 0x1C017CFC0 (DpiAddDevice.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0024F74 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C00251E4 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_ReportWddm2_6ToDriver_Intel__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_ReportWddm2_6ToDriver_Intel__private_featureState;
  if ( (Feature_ReportWddm2_6ToDriver_Intel__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_ReportWddm2_6ToDriver_Intel__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_ReportWddm2_6ToDriver_Intel__private_descriptor,
      v0,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_ReportWddm2_6ToDriver_Intel__private_descriptor);
  }
}
