/*
 * XREFs of ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180045E68
 * Callers:
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEBVCVisual@@@Z @ 0x180045DE8 (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEBVCVisual@@@Z.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180089680 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18009BE70 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18009C700 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 *     ?EndWalk@SubTreeContext@CPreComputeContext@@QEAAXJ@Z @ 0x180194078 (-EndWalk@SubTreeContext@CPreComputeContext@@QEAAXJ@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K0@Z @ 0x180062490 (-RemoveAt@CPtrArrayBase@@IEAAX_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800F1BC4 (--0CThreadContext@@AEAA@XZ.c)
 */

void CThreadContext::UnregisterGraphWalkRoot(void)
{
  _QWORD *Value; // rbx
  __int64 v1; // rdx
  __int64 v2; // rdx
  CThreadContext *v3; // rax
  unsigned int v4; // ecx
  CThreadContext *v5; // rax

  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v3 = (CThreadContext *)operator new(0x150uLL);
    if ( !v3 || (v5 = CThreadContext::CThreadContext(v3), (Value = v5) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024882, 0x42u, 0LL);
      return;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v5);
  }
  v1 = Value[3];
  if ( (v1 & 2) != 0 )
    v2 = *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v2 = Value[3] & 1LL;
  CPtrArrayBase::RemoveAt((CPtrArrayBase *)(Value + 3), v2 - 1, 1uLL);
}
