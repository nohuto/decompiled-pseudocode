/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsPerfImprovements@@@details@wil@@QEAA_NXZ @ 0x18009E4B4
 * Callers:
 *     ?NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z @ 0x18009B240 (-NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z.c)
 *     ?NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@W4ShellFeedsButtonInteraction@3456@PEAUHSTRING__@@@Z @ 0x18009B670 (-NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Exp.c)
 *     ?Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z @ 0x18009BA60 (-Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x18009C4B8 (-RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFe.c)
 *     ?Show@ShellFeedsDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4FeedsButtonInteraction@ShellFeeds@TwinUI@@@Z @ 0x1800A74D0 (-Show@ShellFeedsDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4FeedsButtonInteraction@ShellFeeds@T.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsPerfImprovements@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180099B78 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsPerfImprovements@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsPerfImprovements@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009C010 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsPerfImprovements@@@details@wil@@QEAA.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsPerfImprovements>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsPerfImprovements>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsPerfImprovements>::ReportUsage(a1, v2, v3);
  return v2;
}
