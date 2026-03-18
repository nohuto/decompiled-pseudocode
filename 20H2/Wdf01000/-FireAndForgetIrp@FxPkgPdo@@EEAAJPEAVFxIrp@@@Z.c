/*
 * XREFs of ?FireAndForgetIrp@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C0078700
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0004B54 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C00104EC (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 */

__int64 __fastcall FxPkgPdo::FireAndForgetIrp(FxPkgPdo *this, FxIrp *Irp)
{
  unsigned int Status; // r8d

  Status = Irp->m_Irp->IoStatus.Status;
  if ( Irp->m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 22 )
    return FxPkgPnp::CompletePowerRequest(this, Irp, Status);
  else
    return FxPkgPnp::CompletePnpRequest(this, Irp, Status);
}
