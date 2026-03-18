/*
 * XREFs of ?FinalRelease@CRenderTarget@@MEAAXXZ @ 0x1800D4310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTarget::FinalRelease(CRenderTarget *this)
{
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 88LL), this);
}
