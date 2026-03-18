/*
 * XREFs of ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x180045CC0
 * Callers:
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x180046190 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18004B070 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x18008FDF0 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeCont.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18009BE70 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18009C700 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 * Callees:
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x180045D18 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGraphWalker<CVisual>::BeginWalk(__int64 a1, __int64 a2, const void *a3)
{
  unsigned int v3; // edi
  int v6; // eax
  unsigned int v7; // ecx

  v3 = 0;
  if ( a3 && (v6 = CThreadContext::RegisterGraphWalkRoot(a3), v3 = v6, v6 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x3Eu, 0LL);
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 8) = a2;
  }
  return v3;
}
