/*
 * XREFs of ?GetRuntimeClassName@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800B7FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetRuntimeClassName(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this,
        HSTRING *a2)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::NonDelegatingGetRuntimeClassName(
           (char *)this + 8,
           a2);
}
