/*
 * XREFs of ?UpdateVisitedContentRegion@COverlayContext@@AEAAXXZ @ 0x180008748
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N5@Z @ 0x1800074D8 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003FA54 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008248C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall COverlayContext::UpdateVisitedContentRegion(COverlayContext *this)
{
  unsigned int v2; // edi
  int v3; // eax
  int v4; // eax
  int *v5; // [rsp+20h] [rbp-B8h] BYREF
  int v6; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v7[80]; // [rsp+70h] [rbp-68h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]

  if ( *((_DWORD *)this + 2818) )
  {
    v6 = 0;
    v5 = &v6;
    v2 = 0;
    do
    {
      FastRegion::CRegion::CRegion(
        (FastRegion::CRegion *)v7,
        (const struct tagRECT *)(*((_QWORD *)this + 1406) + 16LL * v2));
      v3 = FastRegion::CRegion::Union((FastRegion::CRegion *)&v5, (const struct CRegion *)v7);
      if ( v3 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v3, retaddr);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v7);
      ++v2;
    }
    while ( v2 < *((_DWORD *)this + 2818) );
    v4 = FastRegion::CRegion::Union((COverlayContext *)((char *)this + 11176), (const struct CRegion *)&v5);
    if ( v4 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v4, retaddr);
    *((_DWORD *)this + 2818) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 11248, 16LL);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v5);
  }
}
