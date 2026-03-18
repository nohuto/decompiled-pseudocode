/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007D878
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004A90C (--1CVisual@@MEAA@XZ.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007D2F8 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ @ 0x1801932D8 (-GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ.c)
 *     ?ProcessSetStereoscopicContentMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSTEREOSCOPICCONTENTMODE@@@Z @ 0x1801F8018 (-ProcessSetStereoscopicContentMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSTE.c)
 *     ??0CHolographicInteropTexture@@IEAA@PEAVCComposition@@@Z @ 0x18029A8E8 (--0CHolographicInteropTexture@@IEAA@PEAVCComposition@@@Z.c)
 *     ?StereoscopicUwp_SetPoseData@CHolographicInteropTexture@@UEAAXAEBUXMFLOAT4X4@DirectX@@00@Z @ 0x18029C230 (-StereoscopicUwp_SetPoseData@CHolographicInteropTexture@@UEAAXAEBUXMFLOAT4X4@DirectX@@00@Z.c)
 *     ?StereoscopicUwp_SetSlateData@CHolographicInteropTexture@@UEAAXAEBUXMFLOAT4X4@DirectX@@AEBUXMFLOAT3@3@1@Z @ 0x18029C250 (-StereoscopicUwp_SetSlateData@CHolographicInteropTexture@@UEAAXAEBUXMFLOAT4X4@DirectX@@AEBUXMFLO.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800F6774 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@detail.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180103518 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_StereoscopicUwp>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v6; // edi
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_StereoscopicUwp>::GetCachedFeatureEnabledState(
                      a1,
                      v8);
    v11 = v4;
  }
  v9 = 0;
  v10 = 0;
  return wil::details::ReportUsageToService(
           a1 + 2,
           13330426LL,
           ((unsigned int)v4 >> 8) & 1,
           ((unsigned int)v4 >> 9) & 1,
           &v9,
           v6,
           3);
}
