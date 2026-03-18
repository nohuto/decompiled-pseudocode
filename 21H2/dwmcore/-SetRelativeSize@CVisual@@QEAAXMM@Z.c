/*
 * XREFs of ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x1800E11F0
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180045FA0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRelativeSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVESIZE@@@Z @ 0x1801F7EFC (-ProcessSetRelativeSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVESIZE@@.c)
 * Callees:
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x1800476E8 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800485B4 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180048E38 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x1800E129C (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z @ 0x1800E12F4 (-SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z.c)
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
    CVisual::PropagateFlags((__int64)this, 5u);
    CVisual::OnOuterTransformChanged(this);
    v4 = *(float *)&a2;
    v5 = *(float *)&a3;
    CPropertyChangeResource::NotifyVector2PropertyChanged(this, 0x1Fu, (const struct D2DVector2 *)&v4);
    CResource::InvalidateAnimationSources(this, 31);
  }
}
