/*
 * XREFs of ??0CTreeData@@IEAA@XZ @ 0x18004A6C4
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18004B070 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 *     ?CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z @ 0x18004C450 (-CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x180088200 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008F210 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x18008FDF0 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeCont.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18009BE70 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18009C700 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 * Callees:
 *     <none>
 */

CTreeData *__fastcall CTreeData::CTreeData(CTreeData *this)
{
  char v1; // al

  *(_QWORD *)this = &CTreeData::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = (char *)this + 40;
  *((_QWORD *)this + 3) = (char *)this + 40;
  *((_QWORD *)this + 4) = (char *)this + 88;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_BYTE *)this + 152) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_BYTE *)this + 176) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 46) = 16842752;
  *((_BYTE *)this + 188) = 1;
  *((_QWORD *)this + 24) = (char *)this + 216;
  *((_QWORD *)this + 25) = (char *)this + 216;
  *((_QWORD *)this + 26) = (char *)this + 224;
  *((_QWORD *)this + 28) = (char *)this + 248;
  *((_QWORD *)this + 29) = (char *)this + 248;
  *((_QWORD *)this + 30) = (char *)this + 256;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 1065353216LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_DWORD *)this + 82) = 0;
  *(_QWORD *)((char *)this + 332) = 1065353216LL;
  *(_QWORD *)((char *)this + 340) = 0LL;
  *((_DWORD *)this + 87) = 0;
  *((_QWORD *)this + 44) = 1065353216LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 92) = 0;
  *((_DWORD *)this + 93) = 1065353216;
  v1 = *((_BYTE *)this + 377) & 0xD7;
  *((_BYTE *)this + 376) = 85;
  *((_BYTE *)this + 377) = v1 | 0x17;
  return this;
}
