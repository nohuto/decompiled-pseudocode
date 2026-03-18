/*
 * XREFs of ?PreRender@CDDARenderTarget@@UEAAJXZ @ 0x18019D1CC
 * Callers:
 *     ?PreRender@CDDARenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x1800ED410 (-PreRender@CDDARenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 * Callees:
 *     ?EnsureSwapChain@CDDARenderTarget@@IEAAJXZ @ 0x18019CF30 (-EnsureSwapChain@CDDARenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CDDARenderTarget::PreRender(CDDARenderTarget *this)
{
  CDDARenderTarget::EnsureSwapChain((CDDARenderTarget *)((char *)this - 1944));
  return 0LL;
}
