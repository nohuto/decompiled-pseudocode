/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::UpdateTileGuid_::_1_::dtor$15 @ 0x1800C9249
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ @ 0x1800B48B4 (--1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::UpdateTileGuid_::_1_::dtor_15(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 64) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~4u;
    winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView((__int64 *)(a2 + 48));
  }
}
