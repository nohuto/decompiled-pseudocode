/*
 * XREFs of ?CollectOverlayCandidates@CDDisplayRenderTarget@@UEBAPEAVCOverlayContext@@XZ @ 0x18016FCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x18007C6E8 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 */

struct COverlayContext *__fastcall CDDisplayRenderTarget::CollectOverlayCandidates(CDDisplayRenderTarget *this)
{
  CDesktopTree *v2; // rcx

  if ( !*((_QWORD *)this + 4) )
    return 0LL;
  v2 = (CDesktopTree *)*((_QWORD *)this + 3);
  if ( !v2 )
    return 0LL;
  CDesktopTree::CalcOcclusionAndCollectOverlayCandidates(v2);
  return (CDDisplayRenderTarget *)((char *)this + 40);
}
