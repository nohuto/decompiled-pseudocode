/*
 * XREFs of ?FireAndForgetIrp@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C00838F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_PnpPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0004610 (-_PnpPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0010430 (-_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxPkgFdo::FireAndForgetIrp(FxPkgFdo *this, FxIrp *Irp)
{
  if ( Irp->m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 22 )
    return FxPkgFdo::_PowerPassDown(this, Irp);
  else
    return FxPkgFdo::_PnpPassDown(this, Irp);
}
