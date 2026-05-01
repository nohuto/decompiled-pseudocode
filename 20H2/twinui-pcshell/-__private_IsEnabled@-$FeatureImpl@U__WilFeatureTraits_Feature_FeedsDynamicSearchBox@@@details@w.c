/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsDynamicSearchBox@@@details@wil@@QEAA_NXZ @ 0x180099684
 * Callers:
 *     ?OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1800109CC (-OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18005C310 (-Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shel.c)
 *     ?ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x180079D50 (-ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANG.c)
 *     ?_OnMessageHandler@SearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18007A120 (-_OnMessageHandler@SearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 *     ?OnViewUncloaking@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180085FC8 (-OnViewUncloaking@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewCloaking@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180086AB0 (-OnViewCloaking@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?Hide@SearchAppExperienceManager@@UEAAJXZ @ 0x1800894C0 (-Hide@SearchAppExperienceManager@@UEAAJXZ.c)
 *     ?SetUntrackMouseMovementCallback@SearchAppDesktopExperienceView@@UEAAXV?$function@$$A6AXXZ@std@@@Z @ 0x1800A4BD0 (-SetUntrackMouseMovementCallback@SearchAppDesktopExperienceView@@UEAAXV-$function@$$A6AXXZ@std@@.c)
 *     ?Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@W4ShellExperienceViewFocusOptions@4567@@Z @ 0x1800A4C70 (-Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 *     ??1SearchAppExperienceManager@@UEAA@XZ @ 0x1801F586C (--1SearchAppExperienceManager@@UEAA@XZ.c)
 *     ?_RegisterMessages@SearchAppExperienceManager@@AEAAJXZ @ 0x1801F6B9C (-_RegisterMessages@SearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsDynamicSearchBox@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180098FEC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsDynamicSearchBox@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsDynamicSearchBox@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009931C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsDynamicSearchBox@@@details@wil@@QEAA.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsDynamicSearchBox>::__private_IsEnabled(
        wil::details *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsDynamicSearchBox>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = (v5 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsDynamicSearchBox>::ReportUsage(a1, v2, v3);
  return v2;
}
