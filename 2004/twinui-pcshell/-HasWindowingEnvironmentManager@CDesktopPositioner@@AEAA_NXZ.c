/*
 * XREFs of ?HasWindowingEnvironmentManager@CDesktopPositioner@@AEAA_NXZ @ 0x18014CF88
 * Callers:
 *     ?PrivateQueryService@CApplicationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180042A30 (-PrivateQueryService@CApplicationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180152590 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803EB1A0 (-ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@.c)
 *     ?DisplaySettingsChange@CDesktopPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1803EB860 (-DisplaySettingsChange@CDesktopPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPL.c)
 *     ?PerformDelayedInitialization@CDesktopPositioner@@UEAAJXZ @ 0x1803ECBB0 (-PerformDelayedInitialization@CDesktopPositioner@@UEAAJXZ.c)
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803EE2F0 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180093490 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@details@wil@@QEAAX_N.c)
 */

char __fastcall CDesktopPositioner::HasWindowingEnvironmentManager(CDesktopPositioner *this, __int64 a2, __int64 a3)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SiHostLessExplorer>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SiHostLessExplorer>::GetImpl'::`2'::impl,
    0,
    a3);
  return 1;
}
