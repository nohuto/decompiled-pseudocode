/*
 * XREFs of ?RestoreVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x180189D90
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18008BBEC (-RestoreCursors@CComposition@@QEAAXXZ.c)
 */

void __fastcall COffScreenRenderTarget::RestoreVisuals(CComposition **this)
{
  if ( *((_DWORD *)this + 442) )
    CComposition::RestoreCursors(this[2]);
}
