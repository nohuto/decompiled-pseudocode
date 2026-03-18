/*
 * XREFs of ??_GCVisualTreePath@@QEAAPEAXI@Z @ 0x1801942BC
 * Callers:
 *     ??$?4U?$default_delete@VCVisualTreePath@@@std@@$0A@@?$unique_ptr@VCVisualTreePath@@U?$default_delete@VCVisualTreePath@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180014CAC (--$-4U-$default_delete@VCVisualTreePath@@@std@@$0A@@-$unique_ptr@VCVisualTreePath@@U-$default_de.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1800499A8 (--1CDrawingContext@@MEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x1800644D8 (--1COcclusionContext@@QEAA@XZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800884A8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x18008BD78 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CVisualTreePath *__fastcall CVisualTreePath::`scalar deleting destructor'(CVisualTreePath *this)
{
  __int64 v1; // rdx
  CVisualTreePath *v3; // rcx
  __int64 v4; // rax

  v1 = *((_QWORD *)this + 1);
  v3 = *(CVisualTreePath **)this;
  v4 = (v1 - (__int64)v3) >> 4;
  if ( v4 )
    *((_QWORD *)this + 1) = v1 - 16 * v4;
  *(_QWORD *)this = 0LL;
  if ( v3 == (CVisualTreePath *)((char *)this + 24) )
    v3 = 0LL;
  DefaultHeap::Free(v3);
  operator delete(this);
  return this;
}
