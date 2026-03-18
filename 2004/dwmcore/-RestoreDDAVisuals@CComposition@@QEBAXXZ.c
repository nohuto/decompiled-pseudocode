/*
 * XREFs of ?RestoreDDAVisuals@CComposition@@QEBAXXZ @ 0x18015771C
 * Callers:
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E9490 (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x1801ADAEC (-RestoreVisuals@CVisualGroup@@QEAAXXZ.c)
 */

void __fastcall CComposition::RestoreDDAVisuals(CComposition *this)
{
  CVisualGroup *v1; // rcx

  v1 = (CVisualGroup *)*((_QWORD *)g_pComposition + 107);
  if ( v1 )
    CVisualGroup::RestoreVisuals(v1);
}
