/*
 * XREFs of ?EndWalk@SubTreeContext@CPreComputeContext@@QEAAXJ@Z @ 0x180194078
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x1800CF85C (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180045E68 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?EndPreCompute@CVisualTree@@QEAAXJ@Z @ 0x18008DC78 (-EndPreCompute@CVisualTree@@QEAAXJ@Z.c)
 *     ?CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ @ 0x18008DD94 (-CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ.c)
 */

void __fastcall CPreComputeContext::SubTreeContext::EndWalk(CVisualTree **this, int a2)
{
  CVisualTree::EndPreCompute(this[54], a2);
  CBspPreComputeHelper::CleanupAfterWalking((CBspPreComputeHelper *)this);
  if ( *((_BYTE *)this + 444) )
  {
    CThreadContext::UnregisterGraphWalkRoot();
    *((_BYTE *)this + 444) = 0;
  }
}
