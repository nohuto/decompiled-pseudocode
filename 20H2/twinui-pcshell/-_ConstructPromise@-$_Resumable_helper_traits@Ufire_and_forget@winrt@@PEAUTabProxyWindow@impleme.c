/*
 * XREFs of ?_ConstructPromise@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@SAXPEAX0H@Z @ 0x1800CE6FC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_InitCoro$1 @ 0x1800CA088 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActivationTimestamp.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_InitCoro$1 @ 0x1800D71A4 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconFromGlyphAsync$.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_InitCoro$1 @ 0x1800D81A0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_InitCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_InitCoro$1 @ 0x1800D9ECC (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_InitCo.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_InitCoro$1 @ 0x1800DE55C (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--RetryConsentChe.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_InitCoro$1 @ 0x1800DFAC0 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--RetryNetworkAva.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::_ConstructPromise(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  result = a3 != 0 ? 2 : 65538;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
