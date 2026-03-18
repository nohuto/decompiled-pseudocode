/*
 * XREFs of ?SetInsetProperty@CNineGridBrush@@QEAAXKM@Z @ 0x180093334
 * Callers:
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x1800064C4 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV-.c)
 *     ?ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY@@@Z @ 0x1800932EC (-ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SE.c)
 * Callees:
 *     ?TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z @ 0x180093384 (-TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180096450 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall CNineGridBrush::SetInsetProperty(CNineGridBrush *this, unsigned int a2, float a3)
{
  float *InsetFieldPointer; // rax
  CResource *v5; // rcx
  unsigned int v6; // r8d

  InsetFieldPointer = CNineGridBrush::TryGetInsetFieldPointer(this, a2);
  if ( a3 != *InsetFieldPointer )
  {
    *InsetFieldPointer = a3;
    CResource::InvalidateAnimationSources(v5, v6);
    (*(void (__fastcall **)(CNineGridBrush *, __int64, CNineGridBrush *))(*(_QWORD *)this + 72LL))(this, 6LL, this);
  }
}
