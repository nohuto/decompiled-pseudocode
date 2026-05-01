/*
 * XREFs of ??1_lambda_9783efd0cf9a4011a5fefd366cc6ea27_@@QEAA@XZ @ 0x180461BA0
 * Callers:
 *     _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_unsigned_int___::await_suspend_::_1_::dtor$4 @ 0x180465988 (_winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_unsigned_in_ea_180465988.c)
 *     _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_bool___::await_suspend_::_1_::dtor$4 @ 0x180465A78 (_winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_bool___--aw_ea_180465A78.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18003E394 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 */

void __fastcall _lambda_9783efd0cf9a4011a5fefd366cc6ea27_::~_lambda_9783efd0cf9a4011a5fefd366cc6ea27_(
        _lambda_9783efd0cf9a4011a5fefd366cc6ea27_ *this)
{
  __int64 *v1; // rcx

  v1 = (__int64 *)((char *)this + 8);
  if ( *v1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(v1);
}
