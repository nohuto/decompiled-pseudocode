/*
 * XREFs of ??$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA?AVexception_ptr@0@Uhresult_canceled@winrt@@@Z @ 0x180461E60
 * Callers:
 *     ?Cancel@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@AEBW4DragDropSimulatorDropPoint@78934@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180462B58 (-Cancel@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066AE0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     SysFreeString_0 @ 0x18008EA1C (SysFreeString_0.c)
 *     ?_Copy_exception@exception_ptr@std@@SA?AV12@PEAXPEBX@Z @ 0x180326F88 (-_Copy_exception@exception_ptr@std@@SA-AV12@PEAXPEBX@Z.c)
 */

void *__fastcall std::make_exception_ptr<winrt::hresult_canceled>(void *a1, __int64 *a2)
{
  std::exception_ptr::_Copy_exception(a1, a2, &TI2_AUhresult_canceled_winrt__);
  if ( a2[2] )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(a2 + 2);
  if ( *a2 )
  {
    SysFreeString_0((BSTR)*a2);
    *a2 = 0LL;
  }
  return a1;
}
