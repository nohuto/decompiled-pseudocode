/*
 * XREFs of ?UpdateVisitedContentRegion@COverlayContext@@AEAAXXZ @ 0x18017D178
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N@Z @ 0x18017A340 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003A990 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009B114 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18009B3D8 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800C0048 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 */

void __fastcall COverlayContext::UpdateVisitedContentRegion(COverlayContext *this)
{
  unsigned int v2; // edi
  int v3; // eax
  int v4; // eax
  int *v5; // [rsp+20h] [rbp-B8h] BYREF
  int v6; // [rsp+28h] [rbp-B0h] BYREF
  void *v7[10]; // [rsp+70h] [rbp-68h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]

  if ( *((_DWORD *)this + 2850) )
  {
    v6 = 0;
    v5 = &v6;
    v2 = 0;
    do
    {
      FastRegion::CRegion::CRegion(
        (FastRegion::CRegion *)v7,
        (const struct tagRECT *)(*((_QWORD *)this + 1422) + 16LL * v2));
      v3 = FastRegion::CRegion::Union((void **)&v5, (const struct FastRegion::Internal::CRgnData **)v7);
      if ( v3 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v3, retaddr);
      FastRegion::CRegion::FreeMemory(v7);
      ++v2;
    }
    while ( v2 < *((_DWORD *)this + 2850) );
    v4 = FastRegion::CRegion::Union((void **)this + 1413, (const struct FastRegion::Internal::CRgnData **)&v5);
    if ( v4 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v4, retaddr);
    *((_DWORD *)this + 2850) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 11376, 0x10u);
    FastRegion::CRegion::FreeMemory((void **)&v5);
  }
}
