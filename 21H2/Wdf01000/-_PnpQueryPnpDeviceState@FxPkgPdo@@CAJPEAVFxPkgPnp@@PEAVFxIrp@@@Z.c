/*
 * XREFs of ?_PnpQueryPnpDeviceState@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0032010
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0002DF8 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     WPP_IFR_SF_qqdq @ 0x1C0010A5C (WPP_IFR_SF_qqdq.c)
 *     ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C0010B10 (-HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 */

__int64 __fastcall FxPkgPdo::_PnpQueryPnpDeviceState(FxPkgPnp *This, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  const void *_a3; // rax
  __int64 v6; // rdx
  unsigned int v7; // r8d

  m_Globals = This->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x16u, (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids);
  Irp->m_Irp->IoStatus.Information = (unsigned int)FxPkgPnp::HandleQueryPnpDeviceState(
                                                     This,
                                                     Irp->m_Irp->IoStatus.Information);
  _a3 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  WPP_IFR_SF_qqdq(
    m_Globals,
    v6,
    v7,
    0x17u,
    (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids,
    _a3,
    *(const void **)(v6 + 144),
    v7,
    Irp->m_Irp);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x18u, (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids);
  return FxPkgPnp::CompletePnpRequest(This, Irp, 0);
}
