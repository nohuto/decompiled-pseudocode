/*
 * XREFs of ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x18009EF68
 * Callers:
 *     ?SetVisible@CVisual@@QEAAX_N@Z @ 0x18001F5C0 (-SetVisible@CVisual@@QEAAX_N@Z.c)
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x18009EEC0 (-RemoveChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 * Callees:
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009BC70 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x18009EDE0 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 */

void __fastcall CVisual::DirtyForInvisibleChild(CVisual *this, struct CVisual *a2, char a3)
{
  unsigned int v6; // esi
  char *v7; // rdx

  v6 = 17;
  if ( (*((_BYTE *)this + 88) & 4) == 0 )
  {
    v7 = (char *)a2 + 140;
    if ( !*((_DWORD *)a2 + 25) || *((float *)a2 + 40) == 0.0 && *((float *)a2 + 39) == 0.0 )
      CVisual::AddAdditionalDirtyRect(this, (__int64)v7);
    else
      v6 = 21;
  }
  if ( !a3 )
    CVisual::NotifyMidManipulationUpdate((__int64)this, 3u, (__int64)a2);
  CVisual::PropagateFlags(this, v6);
}
