/*
 * XREFs of imp_WdfRequestIsCanceled @ 0x1C00019E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCancelled@FxRequest@@QEAAEXZ @ 0x1C0001A34 (-IsCancelled@FxRequest@@QEAAEXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     Vf_VerifyWdfRequestIsCanceled @ 0x1C00C2180 (Vf_VerifyWdfRequestIsCanceled.c)
 */

unsigned __int8 __fastcall imp_WdfRequestIsCanceled(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  FxRequest *v2; // rcx
  int IsCanceled; // eax
  FxRequest *pRequest; // [rsp+30h] [rbp+8h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, Request, 0x1008u, (void **)&pRequest);
  v2 = pRequest;
  if ( pRequest->m_Globals->FxVerifierOn )
  {
    IsCanceled = Vf_VerifyWdfRequestIsCanceled(pRequest->m_Globals, pRequest);
    v2 = pRequest;
  }
  else
  {
    IsCanceled = 0;
  }
  if ( IsCanceled < 0 )
    return 0;
  else
    return FxRequest::IsCancelled(v2);
}
