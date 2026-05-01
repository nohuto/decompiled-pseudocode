/*
 * XREFs of ?SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1800D9E68
 * Callers:
 *     ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1800D58AC (-CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 *     ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x1800D6720 (-OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008D5BC (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_InitCoro$1 @ 0x1800D81A0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_InitCoro$1.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync(
        __int64 a1,
        _BYTE *a2)
{
  _QWORD *v4; // rax
  int v6; // [rsp+248h] [rbp+10h] BYREF

  v4 = operator new(0x208uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync__InitCoro_1(&v6, v4, a2, a1);
  return a2;
}
