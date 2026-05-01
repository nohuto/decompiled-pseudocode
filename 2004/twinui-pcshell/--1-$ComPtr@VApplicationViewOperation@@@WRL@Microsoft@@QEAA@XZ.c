/*
 * XREFs of ??1?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A4BC0
 * Callers:
 *     __lambda_280d05e5955ef1ef6fea1bffa32e8a2c_::operator()_::_1_::dtor$0 @ 0x1800B6225 (__lambda_280d05e5955ef1ef6fea1bffa32e8a2c_--operator()_--_1_--dtor$0.c)
 *     _CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured_::_1_::dtor$0 @ 0x1801011F4 (_CDesktopPositioner--CreateAppViewOperationWithTitleBarAndChromeConfigured_--_1_--dtor$0.c)
 *     _FullScreenPositioner::ApplyPendingPositioningOperations_::_1_::dtor$0 @ 0x1801A53E9 (_FullScreenPositioner--ApplyPendingPositioningOperations_--_1_--dtor$0.c)
 *     _FullScreenPositioner::PositionView_::_1_::dtor$1 @ 0x1801A7201 (_FullScreenPositioner--PositionView_--_1_--dtor$1.c)
 *     _FullScreenPositioner::SetViewStateForDesiredAppState_::_1_::dtor$1 @ 0x1801A7A7B (_FullScreenPositioner--SetViewStateForDesiredAppState_--_1_--dtor$1.c)
 *     _HolographicPositioner::_EnsureHolographicViewConfiguration_::_1_::dtor$1 @ 0x1802444CF (_HolographicPositioner--_EnsureHolographicViewConfiguration_--_1_--dtor$1.c)
 *     _HolographicPositioner::_TransitionViewFromHolographic_::_1_::dtor$2 @ 0x18024676E (_HolographicPositioner--_TransitionViewFromHolographic_--_1_--dtor$2.c)
 *     _ApplicationViewBackedViewHostItem::put_Visibility_::_1_::dtor$1 @ 0x18025CA8D (_ApplicationViewBackedViewHostItem--put_Visibility_--_1_--dtor$1.c)
 *     _wil::MakeOrThrow_ApplicationViewOperation__::_1_::dtor$0 @ 0x18028525E (_wil--MakeOrThrow_ApplicationViewOperation__--_1_--dtor$0.c)
 *     _TitleBarController::AttachTitleBarToView_::_1_::dtor$4 @ 0x180286F92 (_TitleBarController--AttachTitleBarToView_--_1_--dtor$4.c)
 *     _TitleBarController::OnViewRecovered_::_1_::dtor$1 @ 0x180288200 (_TitleBarController--OnViewRecovered_--_1_--dtor$1.c)
 *     _TabTransferManager::PrepareTabAndViewForDrag_::_1_::dtor$3 @ 0x1802906AF (_TabTransferManager--PrepareTabAndViewForDrag_--_1_--dtor$3.c)
 *     _ViewGroup::OnTemplateAppliedToWindow_::_1_::dtor$8 @ 0x180297F90 (_ViewGroup--OnTemplateAppliedToWindow_--_1_--dtor$8.c)
 *     _ViewGroup::OnTemplateAppliedToWindow_::_1_::dtor$9 @ 0x180297F9C (_ViewGroup--OnTemplateAppliedToWindow_--_1_--dtor$9.c)
 *     _SurfaceHubPositioner::_RepositionAppViewsOnWorkAreaChange_::_1_::dtor$0 @ 0x1803D9756 (_SurfaceHubPositioner--_RepositionAppViewsOnWorkAreaChange_--_1_--dtor$0.c)
 *     _SurfaceHubPositioner::_SetDefaultLayout_::_1_::dtor$1 @ 0x1803D9A03 (_SurfaceHubPositioner--_SetDefaultLayout_--_1_--dtor$1.c)
 *     _wil::MakeAndInitializeOrThrow_ApplicationViewOperation__::_1_::dtor$0 @ 0x1803DA0E7 (_wil--MakeAndInitializeOrThrow_ApplicationViewOperation__--_1_--dtor$0.c)
 *     _KioskPositioner::CreateApplicationViewOperation_::_1_::dtor$1 @ 0x1803DB3F3 (_KioskPositioner--CreateApplicationViewOperation_--_1_--dtor$1.c)
 *     _VoiceAssistantPositioner::SetViewStateForDesiredAppState_::_1_::dtor$2 @ 0x1803E2D85 (_VoiceAssistantPositioner--SetViewStateForDesiredAppState_--_1_--dtor$2.c)
 *     _CDesktopPositioner::DragCompleted_::_1_::dtor$4 @ 0x1803EBDF1 (_CDesktopPositioner--DragCompleted_--_1_--dtor$4.c)
 *     _CDesktopPositioner::PositionViewWithOptions_::_1_::dtor$0_0 @ 0x1803ED5E1 (_CDesktopPositioner--PositionViewWithOptions_--_1_--dtor$0_0.c)
 *     _CDesktopPositioner::PresentationChangedForView_::_1_::dtor$3 @ 0x1803ED86D (_CDesktopPositioner--PresentationChangedForView_--_1_--dtor$3.c)
 *     _CDesktopPositioner::ResizeView_::_1_::dtor$0 @ 0x1803EDB15 (_CDesktopPositioner--ResizeView_--_1_--dtor$0.c)
 *     _CDesktopPositioner::_MinimizeView_::_1_::dtor$0 @ 0x1803F0531 (_CDesktopPositioner--_MinimizeView_--_1_--dtor$0.c)
 *     _CDesktopPositioner::_RestoreView_::_1_::dtor$0 @ 0x1803F09AD (_CDesktopPositioner--_RestoreView_--_1_--dtor$0.c)
 *     _TabletModePositioner::CreateAndInitApplicationViewOperation_::_1_::dtor$0 @ 0x1803F683C (_TabletModePositioner--CreateAndInitApplicationViewOperation_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewOperation>::~ComPtr<ApplicationViewOperation>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(a1);
}
