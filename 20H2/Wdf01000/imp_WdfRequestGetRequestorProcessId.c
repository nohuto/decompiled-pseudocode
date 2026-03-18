/*
 * XREFs of imp_WdfRequestGetRequestorProcessId @ 0x1C0049B50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z @ 0x1C004939C (-GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestGetRequestorProcessId(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  unsigned int v2; // ebx
  FxRequest *v3; // rdi
  unsigned __int8 v4; // r8
  const void *_a1; // rax
  unsigned int _a2; // edx
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF
  _IRP *ppIrp; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  pRequest = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest);
  v3 = pRequest;
  ppIrp = 0LL;
  if ( (int)FxRequest::GetIrp(pRequest, &ppIrp, v4) >= 0 )
  {
    return IoGetRequestorProcessId(ppIrp);
  }
  else
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v3);
    WPP_IFR_SF_qL(v3->m_Globals, 2u, 0x10u, 0x24u, WPP_FxRequestKm_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(v3->m_Globals);
  }
  return v2;
}
