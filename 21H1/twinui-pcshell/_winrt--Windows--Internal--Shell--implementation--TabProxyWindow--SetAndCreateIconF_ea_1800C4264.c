/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$2_::_1_::catch$58 @ 0x1800C4264
 * Callers:
 *     <none>
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x1800BAF18 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 *     ?unhandled_exception@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@II_N@experimental@std@@QEBAXXZ @ 0x1800BCA24 (-unhandled_exception@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@.c)
 */

void __fastcall __noreturn winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync__ResumeCoro_2_::_1_::catch_58(
        __int64 a1,
        __int64 a2)
{
  winrt *v2; // rax

  v2 = IApplicationViewChangeListener::IApplicationViewChangeListener(*(IApplicationViewChangeListener **)(a2 + 784));
  std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *,unsigned int,unsigned int,bool>::promise_type::unhandled_exception(v2);
}
