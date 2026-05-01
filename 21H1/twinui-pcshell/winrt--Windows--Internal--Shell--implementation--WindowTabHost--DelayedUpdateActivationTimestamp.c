/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_InitCoro$1 @ 0x1800B5818
 * Callers:
 *     ?DelayedUpdateActivationTimestamp@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@_K@Z @ 0x1800B74B8 (-DelayedUpdateActivationTimestamp@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180033820 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AltTabChangesOrder_29847756@@@details@wil@@QEAA_NXZ @ 0x18008A1E0 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AltTabChangesOr.c)
 *     _lambda_35ac019500c7294af3d8b8427d1bd067_::_lambda_35ac019500c7294af3d8b8427d1bd067_ @ 0x1800B3C74 (_lambda_35ac019500c7294af3d8b8427d1bd067_--_lambda_35ac019500c7294af3d8b8427d1bd067_.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$2 @ 0x1800B5990 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_1800B5990.c)
 *     ?_ConstructPromise@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@SAXPEAX0H@Z @ 0x1800BA69C (-_ConstructPromise@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@impleme.c)
 *     ??$?__LI@Foundation@Windows@winrt@@YA?AU?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@2@AEBU?$IAsyncOperation@I@012@@Z @ 0x1800BAE7C (--$-__LI@Foundation@Windows@winrt@@YA-AU-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@.c)
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x1800BAF18 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 *     ?initial_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUsuspend_never@experimental@std@@XZ @ 0x1800BBE6C (-initial_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundation.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp__InitCoro_1(
        unsigned int *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  struct IProfferService *v5; // r8
  _BYTE v6[8]; // [rsp+20h] [rbp-48h] BYREF
  IApplicationViewChangeListener *v7; // [rsp+28h] [rbp-40h]
  _QWORD *v8; // [rsp+30h] [rbp-38h]
  IApplicationViewChangeListener *v9; // [rsp+38h] [rbp-30h]
  struct IServiceProvider *v10; // [rsp+40h] [rbp-28h]
  winrt::immersive_shell_component *v11; // [rsp+48h] [rbp-20h]
  _BYTE v12[8]; // [rsp+50h] [rbp-18h] BYREF

  std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::_ConstructPromise(
    a2,
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp__ResumeCoro_2,
    *a1);
  v8 = a2 + 92;
  v7 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a2);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::initial_suspend(
    v7,
    v6);
  lambda_35ac019500c7294af3d8b8427d1bd067_::_lambda_35ac019500c7294af3d8b8427d1bd067_(v8, a5, a4);
  v9 = IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a2);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::initial_suspend(
    v9,
    a3);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AltTabChangesOrder_29847756>::__private_IsEnabledPreCheck() )
  {
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp__ResumeCoro_2(a2);
  }
  else
  {
    v11 = (winrt::immersive_shell_component *)(a2 + 92);
    v10 = *(struct IServiceProvider **)winrt::Windows::Foundation::operator co_await<unsigned int>(v12, a2);
    winrt::immersive_shell_component::publish_services(v11, v10, v5);
  }
}
