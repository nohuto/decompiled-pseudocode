/*
 * XREFs of ?IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1801A8880
 * Callers:
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x180171884 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x1801A9FE0 (-EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FUL.c)
 * Callees:
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800243D8 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180095C24 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy@@@detail.c)
 */

bool __fastcall FullScreenPositionerHelpers::IsFullScreenModeDisabledForView(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2,
        __int64 a3)
{
  struct IApplicationView *v4; // rdx
  HWND CoreWindowForView; // rax

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy>::GetImpl'::`2'::impl,
    1u,
    a3);
  CoreWindowForView = (HWND)ApplicationViewHelpers::GetCoreWindowForView(this, v4);
  return GetPropW(CoreWindowForView, L"Windows.ImmersiveShell.DisableFullScreenMode") != 0LL;
}
