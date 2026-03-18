/*
 * XREFs of imp_WdfDeviceIndicateWakeStatus @ 0x1C0048740
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x1C007D5C4 (-PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z.c)
 */

__int64 __fastcall imp_WdfDeviceIndicateWakeStatus(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        unsigned int WaitWakeStatus)
{
  unsigned int v4; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxPkgPnp *m_PkgPnp; // rcx
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  pDevice = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !Device || WaitWakeStatus == 259 || WaitWakeStatus == -1073741536 )
  {
    WPP_IFR_SF_qL(m_Globals, 2u, 0x12u, 0x12u, WPP_FxDeviceApiKm_cpp_Traceguids, Device, WaitWakeStatus);
    return 3221225485LL;
  }
  else
  {
    m_PkgPnp = pDevice->m_PkgPnp;
    if ( m_PkgPnp->m_SharedPower.m_WaitWakeOwner )
    {
      if ( !FxPkgPnp::PowerIndicateWaitWakeStatus(m_PkgPnp, WaitWakeStatus) )
      {
        WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x13u, WPP_FxDeviceApiKm_cpp_Traceguids, Device);
        return (unsigned int)-1073741808;
      }
    }
    else
    {
      WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x14u, WPP_FxDeviceApiKm_cpp_Traceguids, Device);
      return (unsigned int)-1073741436;
    }
    return v4;
  }
}
