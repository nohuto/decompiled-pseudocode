/*
 * XREFs of _winrt::impl::fast_iterator_winrt::Windows::Foundation::Collections::IVectorView_winrt::Windows::Internal::UI::Shell::WindowTabView___::operator__::_1_::dtor$1 @ 0x1800D11AB
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ @ 0x180098ED8 (--1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::fast_iterator_winrt::Windows::Foundation::Collections::IVectorView_winrt::Windows::Internal::UI::Shell::WindowTabView___::operator__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView(*(winrt::Windows::Internal::UI::Shell::WindowTabView **)(a2 + 72));
  }
}
