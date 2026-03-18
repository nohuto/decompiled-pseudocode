/*
 * XREFs of ?RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x18018D1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x180034AD4 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x1801ADAEC (-RestoreVisuals@CVisualGroup@@QEAAXXZ.c)
 */

void __fastcall CMagnifierRenderTarget::RestoreVisuals(CComposition **this)
{
  CVisualGroup *v2; // rcx
  CVisualGroup *v3; // rcx

  if ( *((_DWORD *)this + 442) )
    CComposition::RestoreCursors(this[2]);
  v2 = this[266];
  if ( v2 )
    CVisualGroup::RestoreVisuals(v2);
  v3 = (CVisualGroup *)*((_QWORD *)this[2] + 106);
  if ( v3 )
    CVisualGroup::RestoreVisuals(v3);
}
