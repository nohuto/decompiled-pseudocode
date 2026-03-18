/*
 * XREFs of ?SetVisible@CVisual@@QEAAX_N@Z @ 0x180020580
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800CC590 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z @ 0x1801AE0B4 (-ProcessSetVisible@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETVISIBLE@@@Z.c)
 * Callees:
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800A9CA8 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 */

void __fastcall CVisual::SetVisible(CVisual *this, char a2)
{
  CVisual *v2; // rax

  if ( a2 != ((*((_BYTE *)this + 95) & 2) != 0) )
  {
    v2 = (CVisual *)*((_QWORD *)this + 10);
    *((_BYTE *)this + 95) = (2 * a2) | *((_BYTE *)this + 95) & 0xFD;
    if ( v2 )
    {
      if ( a2 )
        CVisual::DirtyForVisibleChild(v2, this, 0);
      else
        CVisual::DirtyForInvisibleChild(v2, this, 0);
    }
  }
}
