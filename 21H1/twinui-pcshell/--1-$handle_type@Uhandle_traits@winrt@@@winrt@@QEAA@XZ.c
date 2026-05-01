/*
 * XREFs of ??1?$handle_type@Uhandle_traits@winrt@@@winrt@@QEAA@XZ @ 0x1801C4284
 * Callers:
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Internal::UI::Shell::WindowTabDataModel____::_1_::dtor$0 @ 0x1800B3B71 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Int.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference____::_1_::dtor$0 @ 0x1800C0DC5 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Sto.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType____::_1_::dtor$0 @ 0x1800C0EB1 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt-_ea_1800C0EB1.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::hstring____::_1_::dtor$0 @ 0x1800DEA9B (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt--hstring____-.c)
 * Callees:
 *     WINRT_CloseHandle @ 0x18008D8BA (WINRT_CloseHandle.c)
 */

BOOL __fastcall winrt::handle_type<winrt::handle_traits>::~handle_type<winrt::handle_traits>(void **a1)
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
