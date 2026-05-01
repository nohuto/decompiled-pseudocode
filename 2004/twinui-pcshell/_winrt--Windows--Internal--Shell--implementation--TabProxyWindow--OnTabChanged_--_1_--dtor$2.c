/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::OnTabChanged_::_1_::dtor$2 @ 0x1800D528E
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ @ 0x180098ED8 (--1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::OnTabChanged_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 224) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 224) &= ~4u;
    winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView((winrt::Windows::Internal::UI::Shell::WindowTabView *)(a2 + 32));
  }
}
