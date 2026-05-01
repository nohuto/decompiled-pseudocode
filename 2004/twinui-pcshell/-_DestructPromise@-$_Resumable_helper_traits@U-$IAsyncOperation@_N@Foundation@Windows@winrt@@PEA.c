/*
 * XREFs of ?_DestructPromise@?$_Resumable_helper_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@AEBW4DragDropSimulatorDropPoint@78934@@experimental@std@@SAXPEAX@Z @ 0x180465EDC
 * Callers:
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_InitCoro$1_::_1_::dtor$1 @ 0x1800BD215 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1800BD215.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$2 @ 0x1800BD260 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800BD260.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync$_InitCoro$1_::_1_::dtor$1 @ 0x1800BFDD9 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1800BFDD9.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync$_ResumeCoro$2 @ 0x1800BFE20 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800BFE20.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync$_InitCoro$1_::_1_::dtor$1 @ 0x1800C0A01 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1800C0A01.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync$_ResumeCoro$2 @ 0x1800C0A40 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800C0A40.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_InitCoro$1_::_1_::dtor$1 @ 0x1800C1632 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1800C1632.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2 @ 0x1800C1670 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800C1670.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::experimental::_Resumable_helper_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint const &>::_DestructPromise(
        __int64 a1)
{
  return std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type::`scalar deleting destructor'(
           (__int64 *)(a1 - 96),
           0);
}
