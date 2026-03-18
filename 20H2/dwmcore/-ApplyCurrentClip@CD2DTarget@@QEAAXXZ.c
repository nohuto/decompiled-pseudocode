/*
 * XREFs of ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800395C0
 * Callers:
 *     ?PopLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@@Z @ 0x1800393B0 (-PopLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@@Z.c)
 *     ?PushLayer@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180039414 (-PushLayer@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANT.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180039580 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180083230 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DTarget::ApplyCurrentClip(CD2DTarget *this)
{
  if ( *((_BYTE *)this + 56) )
    CD2DTarget::SetClip(this, (const struct D2D_RECT_F *)((char *)this + 60), *((enum D2D1_ANTIALIAS_MODE *)this + 19));
  else
    CD2DContext::D2DRemoveClip(*((CD2DContext **)this + 2));
}
