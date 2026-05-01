/*
 * XREFs of ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1800B4FA8
 * Callers:
 *     _lambda_23023fe66ba1e99252325d41c7c7d54a_::operator() @ 0x1800B6CA0 (_lambda_23023fe66ba1e99252325d41c7c7d54a_--operator().c)
 *     ?IsResizeAllowedOnLayout@TabletModeViewManager@@AEAA_NXZ @ 0x1800B7148 (-IsResizeAllowedOnLayout@TabletModeViewManager@@AEAA_NXZ.c)
 *     ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x180391E80 (-_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1803F46C4 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1803F6E90 (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x1803F70CC (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1803F8CF4 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x1803FB810 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 *     ?SubscribeToServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803FF030 (-SubscribeToServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x1803FFD28 (-SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFla.c)
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x1803FFFA8 (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 *     ?MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z @ 0x1804029A0 (-MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z.c)
 *     ?ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z @ 0x180408730 (-ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z.c)
 *     ?VerifyLayout@CAppLayout@@UEAAJXZ @ 0x180483360 (-VerifyLayout@CAppLayout@@UEAAJXZ.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800447C8 (-IsPPIEdition@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubWin32VtcAPI_SC@@@details@wil@@QEAA_NXZ @ 0x1800B50FC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubWin32VtcAPI_SC@@@detail.c)
 */

bool IsSurfaceHubWithWin32VtcEnabled(void)
{
  char v0; // bl

  v0 = 0;
  if ( IsPPIEdition() )
    return (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SurfaceHubWin32VtcAPI_SC>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SurfaceHubWin32VtcAPI_SC>::GetImpl'::`2'::impl) != 0;
  return v0;
}
