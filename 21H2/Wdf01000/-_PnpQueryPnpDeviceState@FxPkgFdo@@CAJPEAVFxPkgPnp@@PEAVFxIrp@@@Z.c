/*
 * XREFs of ?_PnpQueryPnpDeviceState@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0010940
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0002DF8 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C00109B0 (-HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgFdo::_PnpQueryPnpDeviceState(FxPkgFdo *This, FxIrp *Irp)
{
  int _a1; // eax
  unsigned int v5; // ebx

  _a1 = ((__int64 (__fastcall *)(FxPkgFdo *))This->SendIrpSynchronously)(This);
  v5 = _a1;
  if ( _a1 == -1073741637 )
  {
    v5 = 0;
    Irp->m_Irp->IoStatus.Status = 0;
  }
  else if ( _a1 < 0 )
  {
    WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0xCu, WPP_FxPkgFdoKm_cpp_Traceguids, _a1);
    return FxPkgPnp::CompletePnpRequest(This, Irp, v5);
  }
  FxPkgFdo::HandleQueryPnpDeviceStateCompletion(This, Irp);
  return FxPkgPnp::CompletePnpRequest(This, Irp, v5);
}
