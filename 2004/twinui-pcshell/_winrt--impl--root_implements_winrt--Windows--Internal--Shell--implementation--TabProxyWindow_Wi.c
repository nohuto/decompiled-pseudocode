/*
 * XREFs of _winrt::impl::root_implements_winrt::Windows::Internal::Shell::implementation::TabProxyWindow_Windows::Internal::Shell::ITabProxyWindowInternal_::NonDelegatingGetRuntimeClassName_::_1_::catch$4 @ 0x1800CAC08
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1801B2844 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::root_implements_winrt::Windows::Internal::Shell::implementation::TabProxyWindow_Windows::Internal::Shell::ITabProxyWindowInternal_::NonDelegatingGetRuntimeClassName_::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *(_DWORD *)winrt::to_hresult(a2 + 48);
  return 0LL;
}
