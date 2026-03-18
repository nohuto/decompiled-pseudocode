/*
 * XREFs of imp_WdfFdoGetDefaultChildList @ 0x1C001B7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

WDFCHILDLIST__ *__fastcall imp_WdfFdoGetDefaultChildList(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Fdo)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxPkgPnp *m_PkgPnp; // rcx
  FxObject *v5; // rcx
  FxDevice *pDevice; // [rsp+40h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Fdo, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( pDevice->m_Legacy || (m_PkgPnp = pDevice->m_PkgPnp, m_PkgPnp->m_Type != 4353) )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x11u, WPP_FxDeviceFdoAPI_cpp_Traceguids, Fdo);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    v5 = (FxObject *)m_PkgPnp[1].__vftable;
    if ( v5 )
      return (WDFCHILDLIST__ *)FxObject::GetObjectHandleUnchecked(v5);
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x12u, WPP_FxDeviceFdoAPI_cpp_Traceguids, Fdo);
  }
  return 0LL;
}
