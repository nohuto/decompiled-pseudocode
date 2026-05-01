/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_InitCoro$1 @ 0x1800C615C
 * Callers:
 *     ?SetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@II_N@Z @ 0x1800C86BC (-SetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire.c)
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180033820 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AltTabChangesOrder_29847756@@@details@wil@@QEAA_NXZ @ 0x18008A1E0 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AltTabChangesOr.c)
 *     ?_ConstructPromise@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@SAXPEAX0H@Z @ 0x1800BA69C (-_ConstructPromise@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@impleme.c)
 *     ??$?__LI@Foundation@Windows@winrt@@YA?AU?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@2@AEBU?$IAsyncOperation@I@012@@Z @ 0x1800BAE7C (--$-__LI@Foundation@Windows@winrt@@YA-AU-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@.c)
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x1800BAF18 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 *     ?initial_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUsuspend_never@experimental@std@@XZ @ 0x1800BBE6C (-initial_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundation.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync_::_43_::_parameters_::_parameters_ @ 0x1800C108C (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync_--_43_.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800C6310 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync__InitCoro_1(
        int *a1,
        __int64 a2,
        _BYTE *a3,
        int *a4,
        int *a5,
        char *a6,
        __int64 a7)
{
  struct IProfferService *v7; // r8
  _BYTE v8[8]; // [rsp+30h] [rbp-48h] BYREF
  IApplicationViewChangeListener *v9; // [rsp+38h] [rbp-40h]
  __int64 v10; // [rsp+40h] [rbp-38h]
  IApplicationViewChangeListener *v11; // [rsp+48h] [rbp-30h]
  struct IServiceProvider *v12; // [rsp+50h] [rbp-28h]
  winrt::immersive_shell_component *v13; // [rsp+58h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp-18h] BYREF

  std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::_ConstructPromise(
    a2,
    (__int64)winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync__ResumeCoro_2,
    *a1);
  v10 = a2 + 2128;
  v9 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a2);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::initial_suspend(
    (__int64)v9,
    v8);
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync_::_43_::_parameters_::_parameters_(
    v10,
    a7,
    *a4,
    *a5,
    *a6);
  v11 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a2);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::initial_suspend(
    (__int64)v11,
    a3);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AltTabChangesOrder_29847756>::__private_IsEnabledPreCheck() )
  {
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync__ResumeCoro_2(a2);
  }
  else
  {
    v13 = (winrt::immersive_shell_component *)(a2 + 2128);
    v12 = (struct IServiceProvider *)*winrt::Windows::Foundation::operator co_await<unsigned int>(&v14, a2);
    winrt::immersive_shell_component::publish_services(v13, v12, v7);
  }
}
