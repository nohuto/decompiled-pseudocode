/*
 * XREFs of _lambda_9149871aec59121227803e9d8e93736d_::__lambda_9149871aec59121227803e9d8e93736d_ @ 0x1800C913C
 * Callers:
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs_::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs___lambda_9149871aec59121227803e9d8e93736d____::_1_::dtor$0 @ 0x1800C5850 (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--UI--Shell--IWindowTabEx.c)
 *     _winrt::Windows::Foundation::AsyncOperationCompletedHandler_unsigned_int_::AsyncOperationCompletedHandler_unsigned_int___lambda_2c0233b8eff337f44babb0a39eb13a06____::_1_::dtor$0 @ 0x1804604D4 (_winrt--Windows--Foundation--AsyncOperationCompletedHandler_unsigned_int_--AsyncOperationComplet.c)
 *     _winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool_::AsyncOperationCompletedHandler_bool___lambda_8cbb94e41580c6c85ce6cc2ea21e6745____::_1_::dtor$0 @ 0x180460548 (_winrt--Windows--Foundation--AsyncOperationCompletedHandler_bool_--AsyncOperationCompletedHandle.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18003E394 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 */

__int64 __fastcall lambda_9149871aec59121227803e9d8e93736d_::__lambda_9149871aec59121227803e9d8e93736d_(__int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(a1);
  return result;
}
