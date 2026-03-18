/*
 * XREFs of ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18003FFF0
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18003F9D0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRelativeSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVESIZE@@@Z @ 0x1801AFF5C (-ProcessSetRelativeSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVESIZE@@.c)
 * Callees:
 *     ?SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z @ 0x18003F474 (-SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18004009C (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x18009FDF8 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A0060 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800A0224 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A28A8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CVisual::SetRelativeSize(CVisual *this, double a2, double a3)
{
  float v4; // [rsp+68h] [rbp+20h] BYREF
  float v5; // [rsp+6Ch] [rbp+24h]

  CVisual::GetRelativeLayoutSizeInternal(this);
  if ( v4 != *(float *)&a2 || v5 != *(float *)&a3 )
  {
    CVisual::SetRelativeLayoutSizeInternal(
      this,
      (struct D2D_SIZE_F)*(_OWORD *)&_mm_unpacklo_ps(*(__m128 *)&a2, *(__m128 *)&a3));
    CVisual::PropagateFlags(this, 5LL);
    CVisual::OnOuterTransformChanged(this);
    v4 = *(float *)&a2;
    v5 = *(float *)&a3;
    CPropertyChangeResource::NotifyVector2PropertyChanged(this, 0x1Fu, (const struct D2DVector2 *)&v4);
    CResource::InvalidateAnimationSources(this, 0x1Fu);
  }
}
