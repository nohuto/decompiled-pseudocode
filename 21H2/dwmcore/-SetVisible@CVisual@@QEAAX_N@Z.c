/*
 * XREFs of ?SetVisible@CVisual@@QEAAX_N@Z @ 0x1800E69D0
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180045FA0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z @ 0x1801F8038 (-ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z.c)
 * Callees:
 *     ?UpdateBackdropCounts@CVisual@@IEAAXPEBV1@_N@Z @ 0x1800460B0 (-UpdateBackdropCounts@CVisual@@IEAAXPEBV1@_N@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800486D0 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800488D8 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 */

void __fastcall CVisual::SetVisible(CVisual *this, char a2)
{
  char v3; // cl
  CVisual *v4; // rcx
  char v5; // r8

  v3 = *((_BYTE *)this + 103);
  if ( a2 != ((v3 & 2) != 0) )
  {
    *((_BYTE *)this + 103) = (2 * a2) | v3 & 0xFD;
    v4 = (CVisual *)*((_QWORD *)this + 11);
    if ( v4 )
    {
      if ( a2 )
      {
        CVisual::DirtyForVisibleChild(v4, this, 0);
        v5 = 1;
      }
      else
      {
        CVisual::DirtyForInvisibleChild((CComposition **)v4, this, 0);
        v5 = 0;
      }
      CVisual::UpdateBackdropCounts(*((CVisual **)this + 11), this, v5);
    }
  }
}
