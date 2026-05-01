/*
 * XREFs of _winrt::impl::invoke_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool__winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent___winrt::Windows::Foundation::IInspectable_const_&_enum_winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint_bool_::promise_type_winrt::Windows::Foundation::IAsyncOperation_bool__void__enum_winrt::Windows::Foundation::AsyncStatus__::_1_::catch$9 @ 0x180461B8A
 * Callers:
 *     <none>
 * Callees:
 *     WINRT_RoTransformError @ 0x18008E979 (WINRT_RoTransformError.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1801B2844 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

_BOOL8 __fastcall winrt::impl::invoke_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool__winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent___winrt::Windows::Foundation::IInspectable_const___enum_winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint_bool_::promise_type_winrt::Windows::Foundation::IAsyncOperation_bool__void__enum_winrt::Windows::Foundation::AsyncStatus__::_1_::catch_9(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // ebx

  v2 = *winrt::to_hresult((_DWORD *)(a2 + 56));
  WINRT_RoTransformError(v2, 0LL, 0LL);
  return v2 == -2147417848 || v2 == -2147023174 || v2 == -1996357631;
}
