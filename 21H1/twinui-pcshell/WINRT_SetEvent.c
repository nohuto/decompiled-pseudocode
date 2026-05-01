/*
 * XREFs of WINRT_SetEvent @ 0x18008DF9A
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::hstring___lambda_5a4cba7ff8acc8443f19110888439e90___::Invoke @ 0x180083880 (winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_winrt--hstring_.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType___lambda_ddff42c9e86eec33477d2fc149b371cd___::Invoke @ 0x1800B8320 (winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_winrt--Windows-.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall WINRT_SetEvent(HANDLE hEvent)
{
  return SetEvent(hEvent);
}
