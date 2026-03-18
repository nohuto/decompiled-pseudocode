/*
 * XREFs of ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800486D0
 * Callers:
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x180045B3C (-RemoveChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800474A4 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?SetVisible@CVisual@@QEAAX_N@Z @ 0x1800E69D0 (-SetVisible@CVisual@@QEAAX_N@Z.c)
 * Callees:
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180048F38 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?AddToInputSinkPossibleDirtyList@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x1800492AC (-AddToInputSinkPossibleDirtyList@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180085064 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 */

void __fastcall CVisual::DirtyForInvisibleChild(CComposition **this, struct CVisual *a2, char a3)
{
  unsigned int v6; // esi

  v6 = 17;
  if ( ((_BYTE)this[12] & 4) == 0 )
  {
    if ( !*((_DWORD *)a2 + 27) || *((float *)a2 + 42) == 0.0 && *((float *)a2 + 41) == 0.0 )
      CVisual::AddAdditionalDirtyRect((CVisual *)this);
    else
      v6 = 21;
  }
  if ( !a3 )
    CVisual::NotifyMidManipulationUpdate(this, 3LL, a2);
  CComposition::AddToInputSinkPossibleDirtyList(this[2], a2);
  CVisual::PropagateFlags(this, v6);
}
