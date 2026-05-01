/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer@@@details@wil@@QEAA_NXZ @ 0x180097718
 * Callers:
 *     ?CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x180012698 (-CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18005C004 (-GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?ComputeAndOnTraySearchItemChanged@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x180060E60 (-ComputeAndOnTraySearchItemChanged@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z @ 0x180096A20 (-GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z.c)
 *     ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1802076BC (-RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@_ea_1802076BC.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009691C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSearchBo.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180097584 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer@.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  signed __int32 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer>::GetCachedFeatureEnabledState(
    a1,
    &v4);
  v2 = (v4 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer>::ReportUsage(
    a1,
    v2,
    3u);
  return v2;
}
