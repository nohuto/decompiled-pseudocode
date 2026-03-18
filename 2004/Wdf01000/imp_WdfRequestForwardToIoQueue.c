/*
 * XREFs of imp_WdfRequestForwardToIoQueue @ 0x1C000BAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C000B944 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C00591D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C0076B7C (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     Vf_VerifyWdfRequestForwardToIoQueue @ 0x1C00C5FE4 (Vf_VerifyWdfRequestForwardToIoQueue.c)
 *     ?Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1C00C71EC (-Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z.c)
 */

int __fastcall imp_WdfRequestForwardToIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int64 DestinationQueue)
{
  __int64 Offset; // rcx
  FxIoQueue *v5; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int64 v7; // rcx
  FxRequest *v8; // rbx
  FxIoQueue *m_IoQueue; // rsi
  _FX_DRIVER_GLOBALS *v10; // rdx
  int result; // eax
  FxIoQueue *queue; // [rsp+50h] [rbp+8h] BYREF
  void *PPObject; // [rsp+60h] [rbp+18h] BYREF

  PPObject = 0LL;
  queue = 0LL;
  if ( !DestinationQueue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  LOWORD(Offset) = 0;
  v5 = (FxIoQueue *)(~DestinationQueue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (DestinationQueue & 1) != 0 )
  {
    Offset = LOWORD(v5->FxNonPagedObject::FxObject::__vftable);
    v5 = (FxIoQueue *)((char *)v5 - Offset);
  }
  if ( v5->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    queue = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&queue, (void *)DestinationQueue, 0x1003u, Offset);
    v5 = queue;
  }
  m_Globals = v5->m_Globals;
  if ( !Request )
    FxVerifierBugCheckWorker(v5->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v7) = 0;
  v8 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v7 = LOWORD(v8->__vftable);
    v8 = (FxRequest *)((char *)v8 - v7);
  }
  if ( v8->m_Type == 4104 )
  {
    PPObject = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, &PPObject, (void *)Request, 0x1008u, v7);
    v8 = (FxRequest *)PPObject;
    v5 = queue;
  }
  if ( v8->m_Completed || (m_IoQueue = v8->m_IoQueue) == 0LL )
  {
    if ( m_Globals->FxVerifierOn )
    {
      result = Vf_VerifyWdfRequestForwardToIoQueue(m_Globals, v8);
      v8 = (FxRequest *)PPObject;
      v5 = queue;
    }
    else
    {
      result = 0;
    }
    if ( result >= 0 )
      return FxIoQueue::QueueDriverCreatedRequest(v5, v8, 0);
  }
  else
  {
    v10 = m_IoQueue->m_Globals;
    if ( v10->FxVerifierOn )
      result = FxIoQueue::Vf_VerifyForwardRequest(v8->m_IoQueue, v10, v5, v8);
    else
      result = 0;
    if ( result >= 0 )
      return FxIoQueue::ForwardRequestWorker(m_IoQueue, v8, v5);
  }
  return result;
}
