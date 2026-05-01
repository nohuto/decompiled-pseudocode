/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@@details@wil@@QEAA_NXZ @ 0x18009F900
 * Callers:
 *     ?NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@W4ShellFeedsButtonInteraction@3456@PEAUHSTRING__@@@Z @ 0x18009C850 (-NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Exp.c)
 *     ?OpenFlyoutOnHover@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x18009CC6C (-OpenFlyoutOnHover@ShellFeedsExperienceManagerImpl@@AEAA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009B838 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009D14C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@@details@wil@@QEA.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsHoverClickOptions>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsHoverClickOptions>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsHoverClickOptions>::ReportUsage(a1, v2, v3);
  return v2;
}
