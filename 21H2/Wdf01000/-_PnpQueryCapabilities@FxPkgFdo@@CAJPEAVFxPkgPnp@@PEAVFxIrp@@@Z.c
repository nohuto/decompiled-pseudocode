/*
 * XREFs of ?_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C000FDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C000FE78 (-HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?HandleQueryCapabilities@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C000FFE0 (-HandleQueryCapabilities@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgFdo::_PnpQueryCapabilities(FxPkgFdo *This, FxIrp *Irp)
{
  int v4; // ebp
  _IRP *m_Irp; // rbx

  FxPkgFdo::HandleQueryCapabilities(This, Irp);
  v4 = This->SendIrpSynchronously(This, Irp);
  if ( v4 >= 0 )
    FxPkgFdo::HandleQueryCapabilitiesCompletion(This, Irp);
  m_Irp = Irp->m_Irp;
  Irp->m_Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp->m_Irp, 0);
  Irp->m_Irp = 0LL;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&This->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return (unsigned int)v4;
}
