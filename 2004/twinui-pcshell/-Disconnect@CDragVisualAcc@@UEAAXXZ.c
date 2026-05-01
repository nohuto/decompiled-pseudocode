/*
 * XREFs of ?Disconnect@CDragVisualAcc@@UEAAXXZ @ 0x18042D7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_DismissPlaceModeButtons@CDragVisualAcc@@AEAAXXZ @ 0x18042EF1C (-_DismissPlaceModeButtons@CDragVisualAcc@@AEAAXXZ.c)
 */

void __fastcall CDragVisualAcc::Disconnect(IRawElementProviderSimple *this)
{
  CDragVisualAcc::_DismissPlaceModeButtons(this - 4);
  LODWORD(this[2].lpVtbl) = 0;
  this[4].lpVtbl = 0LL;
}
