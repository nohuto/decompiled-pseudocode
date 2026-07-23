/*
 * XREFs of Feature_Leap_Seconds_Sixty_Second__private_ReportDeviceUsage @ 0x1403F7DEC
 * Callers:
 *     MmCreatePeb @ 0x1406A1848 (MmCreatePeb.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140285D90 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1403F1CA0 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_Leap_Seconds_Sixty_Second__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_Leap_Seconds_Sixty_Second__private_featureState;
  if ( (Feature_Leap_Seconds_Sixty_Second__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_Leap_Seconds_Sixty_Second__private_featureState & 0xFFFFFFFE;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_Leap_Seconds_Sixty_Second__private_descriptor,
      v0,
      3,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_Leap_Seconds_Sixty_Second__private_descriptor);
  }
}
