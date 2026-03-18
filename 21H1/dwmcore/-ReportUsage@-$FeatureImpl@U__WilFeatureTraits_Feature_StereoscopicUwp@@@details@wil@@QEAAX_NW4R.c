/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007DC74
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18007DE6C (--1CVisual@@MEAA@XZ.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ @ 0x180159A64 (-GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ.c)
 *     ?ProcessSetStereoscopicContentMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSTEREOSCOPICCONTENTMODE@@@Z @ 0x1801B28F4 (-ProcessSetStereoscopicContentMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSTE.c)
 *     ??0CHolographicInteropTexture@@IEAA@PEAVCComposition@@@Z @ 0x18025919C (--0CHolographicInteropTexture@@IEAA@PEAVCComposition@@@Z.c)
 *     ?StereoscopicUwp_SetPoseData@CHolographicInteropTexture@@UEAAXAEBUXMFLOAT4X4@DirectX@@00@Z @ 0x18025A7E0 (-StereoscopicUwp_SetPoseData@CHolographicInteropTexture@@UEAAXAEBUXMFLOAT4X4@DirectX@@00@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18007DCEC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180084D38 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@detail.c)
 */

__int64 wil::details::FeatureImpl<__WilFeatureTraits_Feature_StereoscopicUwp>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        ...)
{
  __int64 v3; // r8
  int v5; // edi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  LODWORD(v3) = *a1;
  v5 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v3 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_StereoscopicUwp>::GetCachedFeatureEnabledState(
                      a1,
                      &v7);
    v7 = v3;
  }
  LODWORD(v8) = 0;
  BYTE4(v8) = 0;
  return wil_details_FeatureReporting_ReportUsageToService(
           a1 + 2,
           13330426LL,
           ((unsigned int)v3 >> 8) & 1,
           ((unsigned int)v3 >> 9) & 1,
           (__int64 *)va,
           v5,
           3);
}
