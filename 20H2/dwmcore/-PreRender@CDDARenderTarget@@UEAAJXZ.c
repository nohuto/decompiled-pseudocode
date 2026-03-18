/*
 * XREFs of ?PreRender@CDDARenderTarget@@UEAAJXZ @ 0x18019899C
 * Callers:
 *     ?PreRender@CDDARenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x1800EFFF0 (-PreRender@CDDARenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 * Callees:
 *     ?EnsureSwapChain@CDDARenderTarget@@IEAAJXZ @ 0x1801986D0 (-EnsureSwapChain@CDDARenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CDDARenderTarget::PreRender(CDDARenderTarget *this)
{
  CDDARenderTarget::EnsureSwapChain((CDDARenderTarget *)((char *)this - 1944));
  return 0LL;
}
