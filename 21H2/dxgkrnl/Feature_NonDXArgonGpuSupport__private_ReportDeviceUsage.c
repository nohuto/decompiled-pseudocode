/*
 * XREFs of Feature_NonDXArgonGpuSupport__private_ReportDeviceUsage @ 0x1C0024A48
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1C01553E0 (DxgkNotifySessionStateChange.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01845A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0024F74 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C00251E4 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_NonDXArgonGpuSupport__private_ReportDeviceUsage()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_NonDXArgonGpuSupport__private_featureState;
  if ( (Feature_NonDXArgonGpuSupport__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_NonDXArgonGpuSupport__private_featureState & 0xFFFFFFFE;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_NonDXArgonGpuSupport__private_descriptor, v1, 3LL);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
             v1,
             3LL,
             &Feature_NonDXArgonGpuSupport__private_descriptor);
  }
  return result;
}
