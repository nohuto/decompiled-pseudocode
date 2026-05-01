/*
 * XREFs of ?get@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@UIRandomAccessStreamWithContentType@Streams@Storage@34@@impl@winrt@@QEBA?AUIRandomAccessStreamWithContentType@Streams@Storage@Windows@3@XZ @ 0x1800DD1BC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$2 @ 0x1800D8310 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800DA080 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 * Callees:
 *     ??$wait_get@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUIRandomAccessStreamWithContentType@Streams@Storage@Windows@1@AEBU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@51@@Z @ 0x1800D4D24 (--$wait_get@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt.c)
 */

winrt *__fastcall winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>::get(
        __int64 *a1,
        winrt *a2)
{
  winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>(
    a2,
    a1);
  return a2;
}
