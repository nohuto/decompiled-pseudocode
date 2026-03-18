/*
 * XREFs of imp_WdfIoQueueRetrieveFoundRequest @ 0x1C0013750
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000A580 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfIoQueueRetrieveFoundRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ *TagRequest,
        WDFREQUEST__ **OutRequest)
{
  WDFREQUEST__ *ObjectHandleUnchecked; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int Request; // edx
  FxRequest *pOutputRequest; // [rsp+20h] [rbp-18h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]
  FxIoQueue *pQueue; // [rsp+40h] [rbp+8h] BYREF
  FxRequest *pTagRequest; // [rsp+58h] [rbp+20h] BYREF

  ObjectHandleUnchecked = 0LL;
  pQueue = 0LL;
  pTagRequest = 0LL;
  pOutputRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Queue, 0x1003u, (void **)&pQueue);
  m_Globals = pQueue->m_Globals;
  if ( !OutRequest )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)TagRequest, 0x1008u, (void **)&pTagRequest);
  Request = FxIoQueue::GetRequest(pQueue, 0LL, pTagRequest, &pOutputRequest);
  if ( Request >= 0 )
    ObjectHandleUnchecked = (WDFREQUEST__ *)FxObject::GetObjectHandleUnchecked(pOutputRequest);
  *OutRequest = ObjectHandleUnchecked;
  return (unsigned int)Request;
}
