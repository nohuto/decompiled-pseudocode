/*
 * XREFs of ?unhandled_exception@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@QEBAXXZ @ 0x1800D0A44
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$2_::_1_::catch$92 @ 0x1800CB721 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiv_ea_1800CB721.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$2_::_1_::catch$58 @ 0x1800D7FD4 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconF_ea_1800D7FD4.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$2_::_1_::catch$123 @ 0x1800D9E2C (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsyn_ea_1800D9E2C.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2_::_1_::catch$133 @ 0x1800DC3F0 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnai_ea_1800DC3F0.c)
 *     _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2_::_1_::catch$46 @ 0x1800DFA22 (_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--R_ea_1800DFA22.c)
 *     _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2_::_1_::catch$42 @ 0x1800E065B (_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--R_ea_1800E065B.c)
 * Callees:
 *     ?terminate@winrt@@YAXXZ @ 0x1800D09B4 (-terminate@winrt@@YAXXZ.c)
 */

void __fastcall __noreturn std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::promise_type::unhandled_exception(
        winrt *a1)
{
  winrt::terminate(a1);
}
