/*
 * XREFs of ?unhandled_exception@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@QEBAXXZ @ 0x1800CEF64
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$2_::_1_::catch$92 @ 0x1800C9C41 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiv_ea_1800C9C41.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$2_::_1_::catch$58 @ 0x1800D6764 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconF_ea_1800D6764.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$2_::_1_::catch$123 @ 0x1800D85BC (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsyn_ea_1800D85BC.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2_::_1_::catch$133 @ 0x1800DAB80 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnai_ea_1800DAB80.c)
 *     _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2_::_1_::catch$46 @ 0x1800DE302 (_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--R_ea_1800DE302.c)
 *     _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2_::_1_::catch$42 @ 0x1800DEF3B (_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--R_ea_1800DEF3B.c)
 * Callees:
 *     ?terminate@winrt@@YAXXZ @ 0x1800CEED4 (-terminate@winrt@@YAXXZ.c)
 */

void __fastcall __noreturn std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::promise_type::unhandled_exception(
        winrt *a1)
{
  winrt::terminate(a1);
}
