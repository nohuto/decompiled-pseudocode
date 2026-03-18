/*
 * XREFs of imp_WdfUsbInterfaceGetConfiguredPipe @ 0x1C0069F80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C002E65C (WPP_IFR_SF_DDd.c)
 *     ?GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C00720CC (-GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 */

WDFUSBPIPE__ *__fastcall imp_WdfUsbInterfaceGetConfiguredPipe(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        unsigned __int8 PipeIndex,
        _WDF_USB_PIPE_INFORMATION *PipeInfo)
{
  unsigned __int8 v6; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxUsbInterface *pUsbInterface; // [rsp+50h] [rbp+8h] BYREF

  pUsbInterface = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)UsbInterface,
    0x1204u,
    (void **)&pUsbInterface);
  m_Globals = pUsbInterface->m_Globals;
  if ( !PipeInfo || PipeInfo->Size == 20 )
    return FxUsbInterface::GetConfiguredPipe(pUsbInterface, PipeIndex, PipeInfo);
  WPP_IFR_SF_DDd(m_Globals, v6, 0xEu, 0xEu, WPP_FxUsbInterfaceAPI_cpp_Traceguids, PipeInfo->Size, 20, -1073741820);
  FxVerifierDbgBreakPoint(m_Globals);
  return 0LL;
}
