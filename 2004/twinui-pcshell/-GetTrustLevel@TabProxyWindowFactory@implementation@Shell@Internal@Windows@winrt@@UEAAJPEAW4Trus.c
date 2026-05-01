/*
 * XREFs of ?GetTrustLevel@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAW4TrustLevel@@@Z @ 0x1800CA6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::GetTrustLevel(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory *this,
        enum TrustLevel *a2)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::NonDelegatingGetTrustLevel(
           (char *)this + 8,
           a2);
}
