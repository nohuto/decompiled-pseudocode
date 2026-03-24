/*
 * XREFs of ?PreRender@CDDARenderTarget@@UEAAJXZ @ 0x1801993BC
 * Callers:
 *     ?PreRender@CDDARenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x1800F5E00 (-PreRender@CDDARenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 * Callees:
 *     ?EnsureSwapChain@CDDARenderTarget@@IEAAJXZ @ 0x1801990F0 (-EnsureSwapChain@CDDARenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CDDARenderTarget::PreRender(CDDARenderTarget *this)
{
  CDDARenderTarget::EnsureSwapChain((CDDARenderTarget *)((char *)this - 1944));
  return 0LL;
}
