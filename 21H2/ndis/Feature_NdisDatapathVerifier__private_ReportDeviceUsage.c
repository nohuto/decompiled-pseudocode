/*
 * XREFs of Feature_NdisDatapathVerifier__private_ReportDeviceUsage @ 0x1C003DC14
 * Callers:
 *     ?ndisReadRegistry@@YAXXZ @ 0x1C0144710 (-ndisReadRegistry@@YAXXZ.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C003DFA8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C003E118 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_NdisDatapathVerifier__private_ReportDeviceUsage()
{
  __int64 v0; // rdx
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h]

  v2 = (unsigned int)Feature_NdisDatapathVerifier__private_featureState;
  if ( (Feature_NdisDatapathVerifier__private_featureState & 0x10) == 0 )
  {
    LODWORD(v2) = Feature_NdisDatapathVerifier__private_featureState & 0xFFFFFFFE;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_NdisDatapathVerifier__private_descriptor, v2);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
             v2,
             v0,
             &Feature_NdisDatapathVerifier__private_descriptor);
  }
  return result;
}
