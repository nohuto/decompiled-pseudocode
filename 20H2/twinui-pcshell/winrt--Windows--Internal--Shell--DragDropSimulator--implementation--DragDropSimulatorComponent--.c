/*
 * XREFs of winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_InitCoro$1 @ 0x1800BEB5C
 * Callers:
 *     ?DropDataOnUwpEndPointAsync@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@I@Foundation@67@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@Z @ 0x1800C16A0 (-DropDataOnUwpEndPointAsync@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@In.c)
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18002ADB0 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x18008A450 (-v_SupportsBack@WindowWrapper@@EEAA_NXZ.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$2 @ 0x1800BED40 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800BED40.c)
 *     ?_Handle_from_frame@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@SA?AU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@@23@PEAX@Z @ 0x1800CEEDC (-_Handle_from_frame@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@im.c)
 *     ?initial_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AUsuspend_never@experimental@std@@XZ @ 0x1800CFE8C (-initial_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundation.c)
 *     ??0_parameters_@?5??DropDataOnUwpEndPointAsync@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@I@Foundation@78@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@Z@QEAA@QEAU2345678@0123Ususpend_never@experimental@std@@@Z @ 0x1804617D4 (--0_parameters_@-5--DropDataOnUwpEndPointAsync@DragDropSimulatorComponent@implementation@DragDro.c)
 *     ?_ConstructPromise@?$_Resumable_helper_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@SAXPEAX0H@Z @ 0x1804655CC (-_ConstructPromise@-$_Resumable_helper_traits@U-$IAsyncOperation@I@Foundation@Windows@winrt@@PEA.c)
 *     ?_Promise_from_frame@?$_Resumable_helper_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@AEBW4DragDropSimulatorDropPoint@78934@@experimental@std@@SAPEAUpromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@AEBW4DragDropSimulatorDropPoint@78934@@23@PEAX@Z @ 0x180465720 (-_Promise_from_frame@-$_Resumable_helper_traits@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@AEBW4DragDropSimulatorDropPoint@78934@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AU?$IAsyncOperation@_N@Foundation@Windows@3@XZ @ 0x180466170 (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundat.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync__InitCoro_1(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char *a7,
        __int64 a8)
{
  struct IProfferService *v8; // r8
  _BYTE v9[8]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v10; // [rsp+48h] [rbp-40h]
  __int64 v11; // [rsp+50h] [rbp-38h]
  __int64 v12; // [rsp+58h] [rbp-30h]
  struct IServiceProvider *v13; // [rsp+60h] [rbp-28h]
  winrt::immersive_shell_component *v14; // [rsp+68h] [rbp-20h]
  _BYTE v15[8]; // [rsp+70h] [rbp-18h] BYREF

  std::experimental::_Resumable_helper_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::_ConstructPromise(
    a2,
    winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync__ResumeCoro_2,
    *a1);
  v11 = a2 + 880;
  v10 = std::experimental::_Resumable_helper_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint const &>::_Promise_from_frame(a2);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::initial_suspend(
    v10,
    v9);
  `winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync'::`6'::_parameters_::_parameters_(
    v11,
    a8,
    a4,
    a5,
    a6,
    *a7);
  v12 = std::experimental::_Resumable_helper_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint const &>::_Promise_from_frame(a2);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::get_return_object(
    v12,
    a3);
  if ( WindowWrapper::v_SupportsBack((WindowWrapper *)(a2 + 880)) )
  {
    winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync__ResumeCoro_2(a2);
  }
  else
  {
    v14 = (winrt::immersive_shell_component *)(a2 + 880);
    v13 = *(struct IServiceProvider **)std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
                                         v15,
                                         a2);
    winrt::immersive_shell_component::publish_services(v14, v13, v8);
  }
}
