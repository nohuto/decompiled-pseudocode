/*
 * XREFs of ?unhandled_exception@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@II_N@experimental@std@@QEBAXXZ @ 0x1800BCA24
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$2_::_1_::catch$93 @ 0x1800B747D (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiv_ea_1800B747D.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$2_::_1_::catch$58 @ 0x1800C4264 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconF_ea_1800C4264.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$2_::_1_::catch$123 @ 0x1800C60BC (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsyn_ea_1800C60BC.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2_::_1_::catch$133 @ 0x1800C8680 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnai_ea_1800C8680.c)
 * Callees:
 *     ?terminate@winrt@@YAXXZ @ 0x1800BC994 (-terminate@winrt@@YAXXZ.c)
 */

void __fastcall __noreturn std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *,unsigned int,unsigned int,bool>::promise_type::unhandled_exception(
        winrt *a1)
{
  winrt::terminate(a1);
}
