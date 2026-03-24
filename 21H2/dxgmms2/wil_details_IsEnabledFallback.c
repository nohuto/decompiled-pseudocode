/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1C001834C
 * Callers:
 *     Feature_3895685435__private_IsEnabledFallback @ 0x1C0017A24 (Feature_3895685435__private_IsEnabledFallback.c)
 *     Feature_Servicing_VARangeHoldReference__private_IsEnabledFallback @ 0x1C0017A78 (Feature_Servicing_VARangeHoldReference__private_IsEnabledFallback.c)
 *     Feature_Servicing_VARangeRaceCondition__private_IsEnabledFallback @ 0x1C0017ACC (Feature_Servicing_VARangeRaceCondition__private_IsEnabledFallback.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledFallback @ 0x1C0017B84 (Feature_WSL_Device_GPU__private_IsEnabledFallback.c)
 *     Feature_Servicing_PteDeadLock__private_IsEnabledFallback @ 0x1C00189C8 (Feature_Servicing_PteDeadLock__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0017F04 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C0018074 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0018174 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, volatile signed __int32 **a3)
{
  char v5; // bl
  __int64 v6; // rdi

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = (unsigned int)a1;
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
