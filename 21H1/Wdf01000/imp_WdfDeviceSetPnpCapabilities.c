/*
 * XREFs of imp_WdfDeviceSetPnpCapabilities @ 0x1C0048720
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C003C8B8 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qsd @ 0x1C0046E60 (WPP_IFR_SF_qsd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0059244 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?SetPnpCaps@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_PNP_CAPABILITIES@@@Z @ 0x1C0082990 (-SetPnpCaps@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_PNP_CAPABILITIES@@@Z.c)
 */

void __fastcall imp_WdfDeviceSetPnpCapabilities(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_PNP_CAPABILITIES *PnpCapabilities)
{
  int v4; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 *i; // rdx
  __int64 v8; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  pDevice = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !PnpCapabilities )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  if ( PnpCapabilities->Size == 48 )
  {
    for ( i = &offsets[0].Offset; ; i += 16 )
    {
      v8 = *i;
      if ( (unsigned __int64)(v8 + 4) > 0x30 )
        break;
      if ( *(unsigned int *)((char *)&PnpCapabilities->Size + v8) > 2 )
      {
        WPP_IFR_SF_qsd(
          m_Globals,
          (unsigned __int8)i,
          v8,
          0x29u,
          traceGuid,
          Device,
          offsets[v4].Name,
          *(unsigned int *)((char *)&PnpCapabilities->Size + v8));
        goto LABEL_11;
      }
      if ( (unsigned int)++v4 >= 9 )
      {
        FxPkgPnp::SetPnpCaps(pDevice->m_PkgPnp, PnpCapabilities);
        return;
      }
    }
  }
  else
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0x12u, 0x28u, WPP_FxDeviceApi_cpp_Traceguids, Device, PnpCapabilities->Size, 0x30u);
LABEL_11:
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
