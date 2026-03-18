/*
 * XREFs of ?HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C00109B0
 * Callers:
 *     ?_PnpQueryPnpDeviceState@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0010940 (-_PnpQueryPnpDeviceState@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqdq @ 0x1C0010A5C (WPP_IFR_SF_qqdq.c)
 *     ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C0010B10 (-HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 */

void __fastcall FxPkgFdo::HandleQueryPnpDeviceStateCompletion(FxPkgFdo *this, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a3; // rax
  __int64 v6; // rdx
  unsigned int globals; // r8d
  _FX_DRIVER_GLOBALS *v8; // rcx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x13u, WPP_fxpkgfdo_cpp_Traceguids);
  Irp->m_Irp->IoStatus.Information = FxPkgPnp::HandleQueryPnpDeviceState(this, Irp->m_Irp->IoStatus.Information);
  _a3 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_qqdq(
    this->m_Globals,
    v6,
    globals,
    0x14u,
    WPP_fxpkgfdo_cpp_Traceguids,
    _a3,
    *(const void **)(v6 + 144),
    globals,
    Irp->m_Irp);
  v8 = this->m_Globals;
  if ( v8->FxVerboseOn )
    WPP_IFR_SF_(v8, 5u, 0xCu, 0x15u, WPP_fxpkgfdo_cpp_Traceguids);
}
