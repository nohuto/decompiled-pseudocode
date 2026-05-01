/*
 * XREFs of _winrt::impl::invoke_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs__winrt::Windows::Internal::Shell::implementation::WindowTabHost_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs__::_1_::catch$10 @ 0x1800C6465
 * Callers:
 *     <none>
 * Callees:
 *     WINRT_RoTransformError @ 0x18008E979 (WINRT_RoTransformError.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1801B2844 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

_BOOL8 __fastcall winrt::impl::invoke_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs__winrt::Windows::Internal::Shell::implementation::WindowTabHost_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs__::_1_::catch_10(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // ebx

  v2 = *(_DWORD *)winrt::to_hresult(a2 + 56);
  WINRT_RoTransformError(v2, 0LL, 0LL);
  return v2 == -2147417848 || v2 == -2147023174 || v2 == -1996357631;
}
