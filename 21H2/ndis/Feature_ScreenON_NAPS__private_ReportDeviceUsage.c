/*
 * XREFs of Feature_ScreenON_NAPS__private_ReportDeviceUsage @ 0x1C003FA3C
 * Callers:
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A7AE8 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C003DFA8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C003E118 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void __fastcall Feature_ScreenON_NAPS__private_ReportDeviceUsage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // [rsp+30h] [rbp+8h]

  v4 = (unsigned int)Feature_ScreenON_NAPS__private_featureState;
  if ( (Feature_ScreenON_NAPS__private_featureState & 0x10) == 0 )
  {
    LODWORD(v4) = Feature_ScreenON_NAPS__private_featureState & 0xFFFFFFFE;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&wil_details_featureDescriptors_a, v4, a3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v4, v3, (__int64)&wil_details_featureDescriptors_a);
  }
}
