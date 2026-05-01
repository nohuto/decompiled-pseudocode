/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_InitCoro$1 @ 0x1800C4430
 * Callers:
 *     ?SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1800C60F8 (-SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and_.c)
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180033820 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AltTabChangesOrder_29847756@@@details@wil@@QEAA_NXZ @ 0x18008A1E0 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AltTabChangesOr.c)
 *     ?_ConstructPromise@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@SAXPEAX0H@Z @ 0x1800BA69C (-_ConstructPromise@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@impleme.c)
 *     ??$?__LI@Foundation@Windows@winrt@@YA?AU?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@2@AEBU?$IAsyncOperation@I@012@@Z @ 0x1800BAE7C (--$-__LI@Foundation@Windows@winrt@@YA-AU-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@.c)
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x1800BAF18 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 *     ?initial_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUsuspend_never@experimental@std@@XZ @ 0x1800BBE6C (-initial_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundation.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$2 @ 0x1800C45A0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync__InitCoro_1(
        int *a1,
        _QWORD *a2,
        _BYTE *a3,
        __int64 a4)
{
  struct IProfferService *v4; // r8
  _BYTE v5[8]; // [rsp+20h] [rbp-48h] BYREF
  IApplicationViewChangeListener *v6; // [rsp+28h] [rbp-40h]
  _QWORD *v7; // [rsp+30h] [rbp-38h]
  IApplicationViewChangeListener *v8; // [rsp+38h] [rbp-30h]
  struct IServiceProvider *v9; // [rsp+40h] [rbp-28h]
  winrt::immersive_shell_component *v10; // [rsp+48h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp-18h] BYREF

  std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::_ConstructPromise(
    (__int64)a2,
    (__int64)winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync__ResumeCoro_2,
    *a1);
  v7 = a2 + 64;
  v6 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a2);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::initial_suspend(
    (__int64)v6,
    v5);
  winrt::Windows::Foundation::operator co_await<unsigned int>(v7, a4);
  v8 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a2);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::initial_suspend(
    (__int64)v8,
    a3);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AltTabChangesOrder_29847756>::__private_IsEnabledPreCheck() )
  {
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync__ResumeCoro_2(a2);
  }
  else
  {
    v10 = (winrt::immersive_shell_component *)(a2 + 64);
    v9 = (struct IServiceProvider *)*winrt::Windows::Foundation::operator co_await<unsigned int>(&v11, (__int64)a2);
    winrt::immersive_shell_component::publish_services(v10, v9, v4);
  }
}
