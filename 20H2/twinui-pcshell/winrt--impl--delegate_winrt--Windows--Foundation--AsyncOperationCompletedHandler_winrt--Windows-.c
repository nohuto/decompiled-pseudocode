/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType___lambda_ddff42c9e86eec33477d2fc149b371cd___::Invoke @ 0x1800CC410
 * Callers:
 *     <none>
 * Callees:
 *     WINRT_SetEvent @ 0x18008E3FA (WINRT_SetEvent.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType___lambda_ddff42c9e86eec33477d2fc149b371cd___::Invoke(
        __int64 a1)
{
  WINRT_SetEvent(*(HANDLE *)(a1 + 8));
  return 0LL;
}
