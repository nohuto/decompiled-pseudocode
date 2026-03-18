/*
 * XREFs of ?HideDDAVisuals@CComposition@@QEBAXXZ @ 0x180155410
 * Callers:
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E9CB4 (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x1801AB780 (-HideVisuals@CVisualGroup@@QEAAXXZ.c)
 */

void __fastcall CComposition::HideDDAVisuals(CComposition *this)
{
  CVisualGroup *v1; // rcx

  v1 = (CVisualGroup *)*((_QWORD *)g_pComposition + 107);
  if ( v1 )
    CVisualGroup::HideVisuals(v1);
}
