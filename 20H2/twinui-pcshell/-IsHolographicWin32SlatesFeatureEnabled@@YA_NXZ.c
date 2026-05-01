/*
 * XREFs of ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x18000B390
 * Callers:
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18000B040 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 *     ?GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18000B320 (-GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18000B47C (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180243060 (-SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x1802450AC (-_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32Appli.c)
 *     ?RuntimeClassInitialize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAAJPEAUIApplicationView@@PEAUIServiceProvider@@@Z @ 0x1802514BC (-RuntimeClassInitialize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAAJPEAUIAp.c)
 *     ?_HandleHolographicPortingAsync@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_NPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180254178 (-_HandleHolographicPortingAsync@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA.c)
 *     ?_MoveViewToDesktopAfterDelayIfSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x180254300 (-_MoveViewToDesktopAfterDelayIfSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@.c)
 *     ?_SetLogicalSize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJUSize@Foundation@5@@Z @ 0x180254C94 (-_SetLogicalSize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJUSize@Foundati.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicWin32Slates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000B3C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicWin32Slates@@@details@wil@@QEA.c)
 *     ??$init_once_nothrow@V_lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_@@PEA_N@Z @ 0x180024EE0 (--$init_once_nothrow@V_lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_l.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

char __fastcall IsHolographicWin32SlatesFeatureEnabled(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int inited; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicWin32Slates>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_HolographicWin32Slates>::GetImpl'::`2'::impl,
    a2);
  inited = wil::init_once_nothrow<_lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_>(v2, 0LL);
  if ( inited < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x36,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\Win32SlatesFeature.h",
      (const char *)(unsigned int)inited,
      v5);
  return `IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled;
}
