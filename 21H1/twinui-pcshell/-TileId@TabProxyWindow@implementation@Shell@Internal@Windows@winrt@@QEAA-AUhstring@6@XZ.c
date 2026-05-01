/*
 * XREFs of ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x1800C8F70
 * Callers:
 *     ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800C9008 (-UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?duplicate_string@impl@winrt@@YAPEAXPEAX@Z @ 0x1801C834C (-duplicate_string@impl@winrt@@YAPEAXPEAX@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TileId(__int64 a1, _QWORD *a2)
{
  *a2 = winrt::impl::duplicate_string(*(winrt::impl **)(a1 + 64), a2);
  return a2;
}
