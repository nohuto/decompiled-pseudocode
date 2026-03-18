/*
 * XREFs of ?SetSize@CVisual@@QEAAXMM@Z @ 0x180070DC8
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800CC590 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z @ 0x1801AE070 (-ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z.c)
 * Callees:
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x180070E60 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800710C0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180071284 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800AA3B8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

void __fastcall CVisual::SetSize(CVisual *this, float a2, float a3)
{
  float v4; // [rsp+50h] [rbp+8h] BYREF
  float v5; // [rsp+54h] [rbp+Ch]

  if ( *((float *)this + 31) != a2 || *((float *)this + 32) != a3 )
  {
    *((float *)this + 31) = a2;
    *((float *)this + 32) = a3;
    CVisual::PropagateFlags(this, 5LL);
    CVisual::OnOuterTransformChanged(this);
    v4 = a2;
    v5 = a3;
    CPropertyChangeResource::NotifyVector2PropertyChanged(this, 0x1Du, (const struct D2DVector2 *)&v4);
    CResource::InvalidateAnimationSources(this, 0x1Du);
  }
}
