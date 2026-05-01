/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::WindowTabHost::FindAllTileNotifications_::_1_::dtor$16 @ 0x1800CA06C
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ @ 0x180098ED8 (--1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::FindAllTileNotifications_::_1_::dtor_16(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 168) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 168) &= ~4u;
    winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView((winrt::Windows::Internal::UI::Shell::WindowTabView *)(a2 + 184));
  }
}
