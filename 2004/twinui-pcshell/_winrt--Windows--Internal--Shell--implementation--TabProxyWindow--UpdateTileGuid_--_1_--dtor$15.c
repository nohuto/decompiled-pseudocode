/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::UpdateTileGuid_::_1_::dtor$15 @ 0x1800DB749
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ @ 0x180098ED8 (--1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::UpdateTileGuid_::_1_::dtor_15(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 64) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~4u;
    winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView((winrt::Windows::Internal::UI::Shell::WindowTabView *)(a2 + 48));
  }
}
