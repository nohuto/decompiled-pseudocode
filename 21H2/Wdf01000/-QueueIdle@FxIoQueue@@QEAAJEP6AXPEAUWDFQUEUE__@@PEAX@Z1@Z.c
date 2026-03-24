/*
 * XREFs of ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0014E1C
 * Callers:
 *     imp_WdfIoQueueStop @ 0x1C0014DC0 (imp_WdfIoQueueStop.c)
 *     imp_WdfIoQueueStopAndPurge @ 0x1C0074640 (imp_WdfIoQueueStopAndPurge.c)
 *     ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x1C0076D48 (-QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z.c)
 * Callees:
 *     ?IsCancelled@FxRequest@@QEAAEXZ @ 0x1C0001A34 (-IsCancelled@FxRequest@@QEAAEXZ.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0013DA4 (WPP_IFR_SF_qq.c)
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x1C00150B8 (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C001518C (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C00154A8 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0015784 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qid @ 0x1C002FD7C (WPP_IFR_SF_qid.c)
 *     ?PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV1@@Z @ 0x1C004EED0 (-PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0075AB4 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0075C74 (-CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z @ 0x1C0077AE4 (-GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z.c)
 */

__int64 __fastcall FxIoQueue::QueueIdle(
        FxIoQueue *this,
        unsigned __int8 CancelRequests,
        void (__fastcall *IdleComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // r8
  unsigned __int16 v11; // r9
  const void *_a1; // rax
  unsigned int v14; // r14d
  unsigned __int8 v15; // r8
  const void *ObjectHandleUnchecked; // rax
  __int64 _a2; // rdx
  FxRequest *v18; // rdi
  FxRequest *v19; // rcx
  FxRequest *NextRequest; // rax
  unsigned __int8 v21; // r8
  FxRequest *v22; // r14
  FxRequest *v23; // rcx
  unsigned int *v24; // r8
  const void *v25; // rax
  const void *v26; // rdx
  const void *v27; // rax
  unsigned __int8 v28; // r8
  FxRequest *v29; // rax
  unsigned __int8 v30; // r8
  FxRequest *v31; // r14
  unsigned __int8 v32; // dl
  const void *v33; // rax
  FxIoQueue *v34; // rcx
  FxRequest *request; // [rsp+40h] [rbp-20h] BYREF
  _LIST_ENTRY fwrIrpList; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int8 irql; // [rsp+80h] [rbp+20h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  fwrIrpList = 0LL;
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)IdleComplete);
  if ( this->m_Deleted )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v14 = -1073741738;
    WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x40u, WPP_FxIoQueue_cpp_Traceguids, _a1, 0xC0000056);
LABEL_9:
    FxNonPagedObject::Unlock(this, irql, v15);
    return v14;
  }
  if ( !IdleComplete )
    goto LABEL_3;
  if ( this->m_IdleComplete.Method )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v14 = -1073741808;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x41u, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked, _a2, -1073741808);
    goto LABEL_9;
  }
  this->m_IdleComplete.Method = IdleComplete;
  this->m_IdleCompleteContext = Context;
LABEL_3:
  FxIoQueue::SetState(this, FxIoQueueClearDispatchRequests|0x1);
  if ( CancelRequests )
  {
    v18 = 0LL;
    this->m_CancelDispatchedRequests = 1;
    request = 0LL;
    while ( !FxRequest::PeekRequest(&this->m_Queue, v18, 0LL, 0LL, &request) )
    {
      v18 = request;
      v19 = request;
      request->m_Canceled = 1;
      v19->Release(v19, 0LL, 3723, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    }
    if ( this->m_SupportForwardProgress )
    {
      fwrIrpList.Blink = &fwrIrpList;
      fwrIrpList.Flink = &fwrIrpList;
      FxIoQueue::GetForwardProgressIrps(this, &fwrIrpList, 0LL);
    }
  }
  FxNonPagedObject::Unlock(this, irql, v9);
  if ( CancelRequests )
  {
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v10);
      NextRequest = FxRequest::GetNextRequest(&this->m_Queue);
      v22 = NextRequest;
      if ( !NextRequest )
        break;
      if ( !FxRequest::IsCancelled(NextRequest) && FxRequest::InsertHeadIrpQueue(v23, &this->m_Queue, v24) >= 0 )
        goto LABEL_22;
      FxObject::GetObjectHandleUnchecked(this);
      v25 = (const void *)FxObject::GetObjectHandleUnchecked(v22);
      WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x43u, WPP_FxIoQueue_cpp_Traceguids, v25, v26);
      FxObject::AddRef(
        v22,
        (void *)0x75657551,
        3782,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForQueue(this, v22, irql);
    }
    if ( m_Globals->FxVerboseOn )
    {
      v27 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x42u, WPP_FxIoQueue_cpp_Traceguids, v27);
    }
LABEL_22:
    FxNonPagedObject::Unlock(this, irql, v21);
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v28);
      v29 = FxRequest::GetNextRequest(&this->m_DriverCancelable);
      v31 = v29;
      if ( !v29 )
        break;
      v32 = irql;
      v29->m_Canceled = 1;
      FxNonPagedObject::Unlock(this, v32, v30);
      FxObject::AddRef(
        v31,
        (void *)0x75657551,
        3823,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForDriver(this, v31);
    }
    if ( m_Globals->FxVerboseOn )
    {
      v33 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x44u, WPP_FxIoQueue_cpp_Traceguids, v33);
    }
    FxNonPagedObject::Unlock(this, irql, v30);
    if ( this->m_SupportForwardProgress )
      FxIoQueue::CancelIrps(v34, &fwrIrpList);
  }
  FxNonPagedObject::Lock(this, &irql, v10);
  FxIoQueue::DispatchEvents(this, irql, 0LL, v11);
  return 0LL;
}
