/*
 * XREFs of ?Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z @ 0x1800D9B40
 * Callers:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180006798 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800D9AAC (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 * Callees:
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800D9B88 (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 */

void __fastcall CMILMatrix::Set2DScaleAndOffset(CMILMatrix *this, float a2, float a3, float a4, float a5)
{
  CMILMatrix::Set2DAffineMatrix(this, a2, 0.0, 0.0, a3, a4, a5);
  *((_BYTE *)this + 64) &= 0x3Fu;
  *((_BYTE *)this + 64) |= 0x40u;
  *((_BYTE *)this + 65) |= 3u;
}
