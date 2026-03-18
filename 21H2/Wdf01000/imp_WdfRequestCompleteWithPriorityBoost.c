/*
 * XREFs of imp_WdfRequestCompleteWithPriorityBoost @ 0x1C0038490
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?CompleteWithPriority@FxRequest@@QEAAJJD@Z @ 0x1C00383B4 (-CompleteWithPriority@FxRequest@@QEAAJJD@Z.c)
 *     Vf_VerifyRequestComplete @ 0x1C00C7064 (Vf_VerifyRequestComplete.c)
 */

void __fastcall imp_WdfRequestCompleteWithPriorityBoost(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        unsigned int RequestStatus,
        char PriorityBoost)
{
  FxRequest *v6; // rcx
  FxRequest *pRequest; // [rsp+30h] [rbp+8h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  v6 = pRequest;
  if ( pRequest->m_Globals->FxVerifierOn )
  {
    if ( Vf_VerifyRequestComplete(pRequest->m_Globals, pRequest) < 0 )
      return;
    v6 = pRequest;
  }
  FxRequest::CompleteWithPriority(v6, RequestStatus, PriorityBoost);
}
