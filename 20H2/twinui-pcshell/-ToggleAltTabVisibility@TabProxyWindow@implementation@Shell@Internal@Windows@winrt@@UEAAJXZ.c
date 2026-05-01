/*
 * XREFs of ?ToggleAltTabVisibility@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1800DCDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x1800D65F0 (-HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::ToggleAltTabVisibility(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this)
{
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(this, *((_BYTE *)this + 168));
  return 0LL;
}
