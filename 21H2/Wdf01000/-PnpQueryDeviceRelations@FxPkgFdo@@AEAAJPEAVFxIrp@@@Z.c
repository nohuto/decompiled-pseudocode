/*
 * XREFs of ?PnpQueryDeviceRelations@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0002F18
 * Callers:
 *     ?_PnpQueryDeviceRelations@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0002F00 (-_PnpQueryDeviceRelations@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0002DF8 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?_PnpPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0002FB0 (-_PnpPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0017668 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C0088464 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     WPP_IFR_SF_L @ 0x1C0089BE8 (WPP_IFR_SF_L.c)
 */

__int64 __fastcall FxPkgFdo::PnpQueryDeviceRelations(FxPkgFdo *this, FxIrp *Irp, __int64 a3, unsigned __int16 a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  unsigned int Length; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int v9; // ebx
  _FX_DRIVER_GLOBALS *v10; // rcx
  signed int DeviceRelations; // eax
  const _GUID *traceGuid; // [rsp+20h] [rbp-18h]

  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  Length = CurrentStackLocation->Parameters.Read.Length;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_L(
      m_Globals,
      (unsigned __int8)Irp,
      (unsigned int)CurrentStackLocation,
      a4,
      traceGuid,
      CurrentStackLocation->Parameters.Read.Length);
  if ( Length )
  {
    if ( Length != 3 )
    {
LABEL_5:
      v9 = FxPkgFdo::_PnpPassDown(this, Irp);
      goto LABEL_6;
    }
    DeviceRelations = FxPkgPnp::HandleQueryDeviceRelations(this, Irp, this->m_RemovalDeviceList);
  }
  else
  {
    DeviceRelations = FxPkgPnp::HandleQueryBusRelations(this, Irp);
  }
  v9 = DeviceRelations;
  if ( DeviceRelations == -1073741637 || DeviceRelations >= 0 )
    goto LABEL_5;
  FxPkgPnp::CompletePnpRequest(this, Irp, DeviceRelations);
LABEL_6:
  v10 = this->m_Globals;
  if ( v10->FxVerboseOn )
    WPP_IFR_SF_d(v10, 5u, 0xCu, 0xCu, WPP_fxpkgfdo_cpp_Traceguids, v9);
  return v9;
}
