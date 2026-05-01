/*
 * XREFs of ??1_lambda_9783efd0cf9a4011a5fefd366cc6ea27_@@QEAA@XZ @ 0x18043E4D0
 * Callers:
 *     _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_unsigned_int___::await_suspend_::_1_::dtor$4 @ 0x1804422E8 (_winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_unsigned_in_ea_1804422E8.c)
 *     _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_bool___::await_suspend_::_1_::dtor$4 @ 0x1804423D8 (_winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_bool___--aw_ea_1804423D8.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800663C0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 */

void __fastcall _lambda_9783efd0cf9a4011a5fefd366cc6ea27_::~_lambda_9783efd0cf9a4011a5fefd366cc6ea27_(
        _lambda_9783efd0cf9a4011a5fefd366cc6ea27_ *this)
{
  __int64 *v1; // rcx

  v1 = (__int64 *)((char *)this + 8);
  if ( *v1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(v1);
}
