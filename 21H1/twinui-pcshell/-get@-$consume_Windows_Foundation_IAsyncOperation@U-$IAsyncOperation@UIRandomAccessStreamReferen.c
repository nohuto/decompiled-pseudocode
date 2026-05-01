/*
 * XREFs of ?get@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@UIRandomAccessStreamReference@Streams@Storage@34@@impl@winrt@@QEBA?AUIRandomAccessStreamReference@Streams@Storage@Windows@3@XZ @ 0x1800C9398
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$2 @ 0x1800C45A0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800C6310 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 * Callees:
 *     ??$wait_get@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUIRandomAccessStreamReference@Streams@Storage@Windows@1@AEBU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@51@@Z @ 0x1800C0EDC (--$wait_get@U-$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Fou.c)
 */

winrt *__fastcall winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::get(
        __int64 *a1,
        winrt *a2)
{
  winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>>(
    a2,
    a1);
  return a2;
}
