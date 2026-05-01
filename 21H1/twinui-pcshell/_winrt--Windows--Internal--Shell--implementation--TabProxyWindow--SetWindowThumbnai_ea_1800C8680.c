/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2_::_1_::catch$133 @ 0x1800C8680
 * Callers:
 *     <none>
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x1800BAF18 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 *     ?unhandled_exception@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@II_N@experimental@std@@QEBAXXZ @ 0x1800BCA24 (-unhandled_exception@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@.c)
 */

void __fastcall __noreturn winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync__ResumeCoro_2_::_1_::catch_133(
        __int64 a1,
        __int64 a2)
{
  winrt *v2; // rax

  v2 = IApplicationViewChangeListener::IApplicationViewChangeListener(*(IApplicationViewChangeListener **)(a2 + 2304));
  std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *,unsigned int,unsigned int,bool>::promise_type::unhandled_exception(v2);
}
