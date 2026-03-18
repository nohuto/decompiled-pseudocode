/*
 * XREFs of ?CheckOcclusionState@CDDARenderTarget@@UEAAJXZ @ 0x180113300
 * Callers:
 *     ?CheckOcclusionState@CDDARenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x180107110 (-CheckOcclusionState@CDDARenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 * Callees:
 *     ?EnsureSwapChain@CDDARenderTarget@@IEAAJXZ @ 0x1801E102C (-EnsureSwapChain@CDDARenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CDDARenderTarget::CheckOcclusionState(CDDARenderTarget *this)
{
  CDDARenderTarget::EnsureSwapChain((CDDARenderTarget *)((char *)this - 2136));
  return 142213121LL;
}
