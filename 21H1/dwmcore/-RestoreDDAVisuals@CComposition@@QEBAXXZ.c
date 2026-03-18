/*
 * XREFs of ?RestoreDDAVisuals@CComposition@@QEBAXXZ @ 0x18015A280
 * Callers:
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E885C (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x1801B044C (-RestoreVisuals@CVisualGroup@@QEAAXXZ.c)
 */

void __fastcall CComposition::RestoreDDAVisuals(CComposition *this)
{
  CVisualGroup *v1; // rcx

  v1 = (CVisualGroup *)*((_QWORD *)g_pComposition + 107);
  if ( v1 )
    CVisualGroup::RestoreVisuals(v1);
}
