/*
 * XREFs of wil_details_IsEnabledFallback @ 0x18009C434
 * Callers:
 *     Feature_SearchPackagePaths__private_IsEnabledFallback @ 0x18009BCB8 (Feature_SearchPackagePaths__private_IsEnabledFallback.c)
 *     Feature_2482235707__private_IsEnabledFallback @ 0x18009CD40 (Feature_2482235707__private_IsEnabledFallback.c)
 *     Feature_3106716987__private_IsEnabledFallback @ 0x18009D12C (Feature_3106716987__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x18009C008 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x18009C170 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x18009C264 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, volatile signed __int32 **a3)
{
  char v5; // bl
  __int64 v6; // rdi
  __int64 v8; // [rsp+30h] [rbp+8h]

  LODWORD(v8) = a1;
  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = v8;
  }
  else
  {
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1, (__int64)a3);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService((__int64)a3, v6, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
