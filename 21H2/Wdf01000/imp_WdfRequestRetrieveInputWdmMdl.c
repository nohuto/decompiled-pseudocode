/*
 * XREFs of imp_WdfRequestRetrieveInputWdmMdl @ 0x1C0064C10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C0067904 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfRequestRetrieveInputWdmMdl(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request, _MDL **Mdl)
{
  FxRequest *v5; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  v5 = pRequest;
  m_Globals = pRequest->m_Globals;
  if ( !Mdl )
    FxVerifierNullBugCheck(pRequest->m_Globals, retaddr);
  *Mdl = 0LL;
  if ( v5->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction != 3 )
    return FxRequest::GetMdl(v5, Mdl);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qL(m_Globals, 5u, 0x10u, 0x29u, WPP_FxRequestApi_cpp_Traceguids, Request, 0xC0000010);
  return -1073741808;
}
