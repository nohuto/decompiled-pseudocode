/*
 * XREFs of _lambda_ddff42c9e86eec33477d2fc149b371cd_::__lambda_ddff42c9e86eec33477d2fc149b371cd_ @ 0x1800C7634
 * Callers:
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Internal::UI::Shell::WindowTabDataModel____::_1_::dtor$5 @ 0x1800C695D (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt-_ea_1800C695D.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference____::_1_::dtor$5 @ 0x1800D3301 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt-_ea_1800D3301.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType____::_1_::dtor$5 @ 0x1800D33ED (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt-_ea_1800D33ED.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::hstring____::_1_::dtor$5 @ 0x1801039AF (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt-_ea_1801039AF.c)
 * Callees:
 *     WINRT_CloseHandle @ 0x18008E1BA (WINRT_CloseHandle.c)
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
