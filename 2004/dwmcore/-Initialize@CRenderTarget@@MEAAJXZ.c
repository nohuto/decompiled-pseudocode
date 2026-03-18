/*
 * XREFs of ?Initialize@CRenderTarget@@MEAAJXZ @ 0x1800DBD20
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800DB75C (-AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 */

__int64 __fastcall CRenderTarget::Initialize(CRenderTarget *this)
{
  CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 88LL), this);
  return 0LL;
}
