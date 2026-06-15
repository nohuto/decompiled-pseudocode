/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrv_RC_36390724@@@details@wil@@QEAA_NXZ @ 0x18006D3C8
 * Callers:
 *     ?DeviceArrivalEvent@CAudioSrv@@UEAAJV?$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@ATL@@@ATL@@@Z @ 0x1800B8820 (-DeviceArrivalEvent@CAudioSrv@@UEAAJV-$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocato.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrv_RC_36390724@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18006CE2C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrv_RC_36.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrv_RC_36390724@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006CFCC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrv_RC_36390724@@@details@.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AudioSrv_RC_36390724>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AudioSrv_RC_36390724>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AudioSrv_RC_36390724>::ReportUsage(a1, v2, v3);
  return v2;
}
