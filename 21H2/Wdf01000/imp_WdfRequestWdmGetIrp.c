/*
 * XREFs of imp_WdfRequestWdmGetIrp @ 0x1C00115C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z @ 0x1C0011624 (-GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

_IRP *__fastcall imp_WdfRequestWdmGetIrp(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  signed int _a2; // eax
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF
  _IRP *irp; // [rsp+60h] [rbp+18h] BYREF

  pRequest = 0LL;
  irp = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  m_Globals = pRequest->m_Globals;
  _a2 = FxRequest::GetIrp(pRequest, &irp);
  if ( _a2 >= 0 )
    return irp;
  WPP_IFR_SF_qL(m_Globals, 2u, 0x10u, 0x3Du, WPP_FxRequestApi_cpp_Traceguids, Request, _a2);
  FxVerifierDbgBreakPoint(m_Globals);
  return 0LL;
}
