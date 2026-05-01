/*
 * XREFs of wil_details_IsEnabledFallback @ 0x180047A08
 * Callers:
 *     Feature_1089830202__private_IsEnabledFallback @ 0x180047628 (Feature_1089830202__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x180047634 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x180047784 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x180047878 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, int a2)
{
  char v3; // bl
  char v4; // di

  v3 = a1;
  if ( (a1 & 2) != 0 )
  {
    v4 = a1;
  }
  else
  {
    v4 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
           Feature_1089830202__private_descriptor,
           a1,
           (__int64)&Feature_1089830202__private_descriptor);
    v3 = v4;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService(a1, v4, a2);
    if ( (unsigned int)(a2 - 3) <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v4, a2);
  }
  return v3 & 1;
}
