/*
 * XREFs of ??$Walk@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@PEAV2@@Z @ 0x180088180
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800884A8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18009BE70 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W.c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x1801FAFC8 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CVisualTreeIterator::Walk<CDrawingContext>(
        __int64 a1,
        CVisualTree *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct CVisual *a6)
{
  struct CVisual *v6; // rbx
  int v11; // eax
  unsigned int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = a6;
  *(_QWORD *)(a1 + 64) = a2;
  if ( !a6 )
  {
    v6 = (struct CVisual *)*((_QWORD *)a2 + 8);
    return CVisualTreeIterator::WalkSubtree<CDrawingContext>(a1, v6, a3, a4, 3);
  }
  if ( a6 == *((struct CVisual **)a2 + 8) )
    return CVisualTreeIterator::WalkSubtree<CDrawingContext>(a1, v6, a3, a4, 3);
  v11 = CVisualTree::EnsureVisualTransform(a2, a6);
  v12 = v11;
  if ( v11 >= 0 )
    return CVisualTreeIterator::WalkSubtree<CDrawingContext>(a1, v6, a3, a4, 3);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA1,
    (int)"onecoreuap\\Windows\\DWM\\dwmcore\\engine\\TreeIterator.h",
    (const char *)(unsigned int)v11);
  return v12;
}
