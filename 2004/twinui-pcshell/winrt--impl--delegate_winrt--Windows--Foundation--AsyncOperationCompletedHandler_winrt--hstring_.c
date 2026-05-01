/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::hstring___lambda_5a4cba7ff8acc8443f19110888439e90___::Invoke @ 0x180084020
 * Callers:
 *     <none>
 * Callees:
 *     WINRT_SetEvent @ 0x18008E89A (WINRT_SetEvent.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::hstring___lambda_5a4cba7ff8acc8443f19110888439e90___::Invoke(
        __int64 a1)
{
  WINRT_SetEvent(*(HANDLE *)(a1 + 8));
  return 0LL;
}
