/*
 * XREFs of ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0077060
 * Callers:
 *     imp_WdfRequestRequeue @ 0x1C004A7F0 (imp_WdfRequestRequeue.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     ?CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C001551C (-CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C0015548 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?RemoveFromDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x1C0015748 (-RemoveFromDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C00158D4 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0075A34 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?Vf_VerifyRequeue@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C7848 (-Vf_VerifyRequeue@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::Requeue(FxIoQueue *this, FxRequest *pRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int result; // eax
  FxIoQueue *m_IoQueue; // rax
  unsigned __int8 v7; // r8
  unsigned int *v8; // r8
  const void *ObjectHandleUnchecked; // rax
  int inserted; // esi
  unsigned __int16 v11; // r9
  unsigned __int8 v12; // r8
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  if ( m_Globals->FxVerifierOn )
    result = FxIoQueue::Vf_VerifyRequeue(this, m_Globals, pRequest);
  else
    result = 0;
  if ( result >= 0 )
  {
    if ( pRequest->m_Completed )
      m_IoQueue = 0LL;
    else
      m_IoQueue = pRequest->m_IoQueue;
    if ( m_IoQueue->m_Type == WdfIoQueueDispatchManual )
    {
      FxObject::AddRef(
        pRequest,
        (void *)0x74617453,
        1992,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxRequest::SetCompletionState(pRequest, FxRequestCompletionStateNone);
      FxNonPagedObject::Lock(this, &irql, v7);
      FxIoQueue::RemoveFromDriverOwnedList(this, pRequest);
      if ( m_Globals->FxVerboseOn )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(pRequest);
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x28u, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked);
      }
      if ( this->m_CancelDispatchedRequests
        || (inserted = FxRequest::InsertHeadIrpQueue(pRequest, &this->m_Queue, v8), inserted < 0) )
      {
        inserted = 0;
        FxObject::AddRef(
          pRequest,
          (void *)0x75657551,
          2046,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        FxIoQueue::CancelForQueue(this, pRequest, irql);
        FxNonPagedObject::Lock(this, &irql, v12);
      }
      else
      {
        FxIoQueue::CheckTransitionFromEmpty(this);
      }
      FxIoQueue::DispatchEvents(this, irql, 0LL, v11);
      return inserted;
    }
    else
    {
      WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x27u, WPP_FxIoQueue_cpp_Traceguids, pRequest, 0xC0000010);
      FxVerifierDbgBreakPoint(m_Globals);
      return -1073741808;
    }
  }
  return result;
}
