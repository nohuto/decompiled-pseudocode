/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::WindowTabHost_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_::UpdateTabsForWindow_::_1_::catch$2 @ 0x1800CDC95
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1801B2454 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::WindowTabHost_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_::UpdateTabsForWindow_::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *(_DWORD *)winrt::to_hresult(a2 + 48);
  return 0LL;
}
