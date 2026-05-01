/*
 * XREFs of ?SetAndCreateIconFromGlyphAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1800D8010
 * Callers:
 *     ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x1800D6720 (-OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008D5BC (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_InitCoro$1 @ 0x1800D71A4 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconFromGlyphAsync$.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync(
        __int64 a1,
        _BYTE *a2)
{
  _QWORD *v4; // rax
  int v6; // [rsp+F8h] [rbp+10h] BYREF

  v4 = operator new(0xB8uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync__InitCoro_1(
    &v6,
    v4,
    a2,
    a1);
  return a2;
}
