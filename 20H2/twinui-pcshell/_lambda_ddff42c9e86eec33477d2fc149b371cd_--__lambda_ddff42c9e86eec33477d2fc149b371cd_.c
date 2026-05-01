/*
 * XREFs of _lambda_ddff42c9e86eec33477d2fc149b371cd_::__lambda_ddff42c9e86eec33477d2fc149b371cd_ @ 0x1800C9114
 * Callers:
 *     winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::hstring_::AsyncOperationCompletedHandler_winrt::hstring___lambda_5a4cba7ff8acc8443f19110888439e90___ @ 0x180097DDC (winrt--Windows--Foundation--AsyncOperationCompletedHandler_winrt--hstring_--AsyncOperationComple.c)
 *     _winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::hstring_::AsyncOperationCompletedHandler_winrt::hstring___lambda_5a4cba7ff8acc8443f19110888439e90____::_1_::dtor$0 @ 0x180097E36 (_winrt--Windows--Foundation--AsyncOperationCompletedHandler_winrt--hstring_--AsyncOperationCompl.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Internal::UI::Shell::WindowTabDataModel____::_1_::dtor$5 @ 0x1800C843D (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt-_ea_1800C843D.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference____::_1_::dtor$5 @ 0x1800D4B41 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt-_ea_1800D4B41.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType____::_1_::dtor$5 @ 0x1800D4C2D (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt-_ea_1800D4C2D.c)
 * Callees:
 *     WINRT_CloseHandle @ 0x18008DD1A (WINRT_CloseHandle.c)
 */

BOOL __fastcall lambda_ddff42c9e86eec33477d2fc149b371cd_::__lambda_ddff42c9e86eec33477d2fc149b371cd_(void **a1)
{
  void *v2; // rcx
  BOOL result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = WINRT_CloseHandle(v2);
    *a1 = 0LL;
  }
  return result;
}
