/*
 * XREFs of ?_DispatchSetPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0011090
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00110C0 (-DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchSystemSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0011144 (-DispatchSystemSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgFdo::_DispatchSetPower(FxPkgFdo *This, FxIrp *Irp)
{
  if ( Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options )
    return FxPkgFdo::DispatchDeviceSetPower(This, Irp);
  else
    return FxPkgFdo::DispatchSystemSetPower(This, Irp);
}
