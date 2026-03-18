/*
 * XREFs of ?Initialize@CCaptureRenderTarget@@MEAAJXZ @ 0x18018BB00
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800D3B64 (-AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 */

__int64 __fastcall CCaptureRenderTarget::Initialize(CCaptureRenderTarget *this)
{
  *((_BYTE *)this + 1772) = 1;
  CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 88LL), this);
  return 0LL;
}
