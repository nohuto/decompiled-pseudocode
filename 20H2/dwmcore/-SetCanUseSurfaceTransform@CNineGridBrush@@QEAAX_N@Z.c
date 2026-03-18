/*
 * XREFs of ?SetCanUseSurfaceTransform@CNineGridBrush@@QEAAX_N@Z @ 0x180021020
 * Callers:
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x180021348 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV-.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CNineGridBrush::SetCanUseSurfaceTransform(CNineGridBrush *this)
{
  __int64 v1; // rax

  if ( *((_BYTE *)this + 145) != 1 )
  {
    v1 = *(_QWORD *)this;
    *((_BYTE *)this + 145) = 1;
    (*(void (__fastcall **)(CNineGridBrush *, __int64, CNineGridBrush *))(v1 + 72))(this, 6LL, this);
  }
}
