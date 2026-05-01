/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::OnTabChanged_::_1_::dtor$0 @ 0x1800D5234
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ @ 0x180098ED8 (--1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::OnTabChanged_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 224) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 224) &= ~1u;
    winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView((winrt::Windows::Internal::UI::Shell::WindowTabView *)(a2 + 48));
  }
}
