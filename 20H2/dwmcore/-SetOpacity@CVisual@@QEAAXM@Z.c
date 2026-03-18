/*
 * XREFs of ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180073604
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800CC590 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetOpacity@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPACITY@@@Z @ 0x1801ADF80 (-ProcessSetOpacity@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPACITY@@@Z.c)
 * Callees:
 *     ?SetOpacityInternal@CVisual@@QEAAXM@Z @ 0x180070AF4 (-SetOpacityInternal@CVisual@@QEAAXM@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x180070B3C (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800710C0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x1800736A0 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800AA3B8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

void __fastcall CVisual::SetOpacity(CVisual *this, float a2)
{
  float OpacityInternal; // xmm7_4

  OpacityInternal = CVisual::GetOpacityInternal(this);
  if ( OpacityInternal != a2 )
  {
    CVisual::SetOpacityInternal(this, a2);
    CVisual::PropagateFlags(
      this,
      ((COERCE_FLOAT(LODWORD(a2) & _xmm) < 0.0000011920929) ^ (unsigned int)(COERCE_FLOAT(LODWORD(OpacityInternal) & _xmm) < 0.0000011920929))
    + 4);
    CPropertyChangeResource::NotifyScalarPropertyChanged(this, 0x1Au, a2);
    CResource::InvalidateAnimationSources(this, 26);
  }
}
