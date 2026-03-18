/*
 * XREFs of ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0014FE0
 * Callers:
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0012998 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     imp_WdfIoQueuePurge @ 0x1C0014F80 (imp_WdfIoQueuePurge.c)
 *     imp_WdfIoQueueDrain @ 0x1C0073AA0 (imp_WdfIoQueueDrain.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C0075640 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?QueueDrainSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C0076198 (-QueueDrainSynchronously@FxIoQueue@@QEAAJXZ.c)
 *     ?QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C00764DC (-QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x1C0015158 (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0015188 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C001522C (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0015824 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C002F42C (WPP_IFR_SF_qid.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0075154 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C0076110 (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 */

__int64 __fastcall FxIoQueue::QueuePurge(
        FxIoQueue *this,
        unsigned __int8 CancelQueueRequests,
        unsigned __int8 CancelDriverRequests,
        void (__fastcall *PurgeComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned int v10; // edx
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // r8
  FxRequest *NextRequest; // r14
  FxRequest *v15; // rax
  unsigned __int8 v16; // r8
  FxRequest *v17; // r14
  unsigned __int16 v18; // r9
  const void *ObjectHandleUnchecked; // rax
  unsigned int v21; // r14d
  unsigned __int8 v22; // r8
  const void *v23; // rax
  __int64 _a2; // rdx
  const void *v25; // rax
  const void *v26; // rdx
  const void *_a1; // rax
  unsigned __int8 v28; // dl
  const void *v29; // rax
  unsigned __int8 irql; // [rsp+70h] [rbp+30h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  FxNonPagedObject::Lock(this, &irql, CancelDriverRequests);
  if ( this->m_Deleted )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v21 = -1073741738;
    WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x46u, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked, 0xC0000056);
LABEL_24:
    FxNonPagedObject::Unlock(this, irql, v22);
    return v21;
  }
  if ( !PurgeComplete )
    goto LABEL_5;
  if ( this->m_PurgeComplete.Method )
  {
    v23 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v21 = -1073741808;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x47u, WPP_FxIoQueue_cpp_Traceguids, v23, _a2, -1073741808);
    goto LABEL_24;
  }
  this->m_PurgeCompleteContext = Context;
  this->m_PurgeComplete.Method = PurgeComplete;
LABEL_5:
  FxIoQueue::SetState(this, FxIoQueueClearAcceptRequests);
  if ( CancelQueueRequests
    && CancelDriverRequests
    && _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v10, 0xBu) )
  {
    this->m_CancelDispatchedRequests = 1;
  }
  FxNonPagedObject::Unlock(this, irql, v11);
  if ( CancelQueueRequests )
  {
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v12);
      NextRequest = FxRequest::GetNextRequest(&this->m_Queue);
      if ( !NextRequest )
        break;
      FxObject::GetObjectHandleUnchecked(this);
      v25 = (const void *)FxObject::GetObjectHandleUnchecked(NextRequest);
      WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x49u, WPP_FxIoQueue_cpp_Traceguids, v25, v26);
      FxObject::AddRef(
        NextRequest,
        (void *)0x75657551,
        4048,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForQueue(this, NextRequest, irql);
    }
    if ( m_Globals->FxVerboseOn )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x48u, WPP_FxIoQueue_cpp_Traceguids, _a1);
    }
    FxNonPagedObject::Unlock(this, irql, v13);
  }
  if ( CancelDriverRequests )
  {
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v12);
      v15 = FxRequest::GetNextRequest(&this->m_DriverCancelable);
      v17 = v15;
      if ( !v15 )
        break;
      v28 = irql;
      v15->m_Canceled = 1;
      FxNonPagedObject::Unlock(this, v28, v16);
      FxObject::AddRef(
        v17,
        (void *)0x75657551,
        4093,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForDriver(this, v17);
    }
    if ( m_Globals->FxVerboseOn )
    {
      v29 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x4Au, WPP_FxIoQueue_cpp_Traceguids, v29);
    }
    FxNonPagedObject::Unlock(this, irql, v16);
  }
  if ( this->m_SupportForwardProgress )
    FxIoQueue::PurgeForwardProgressIrps(this, 0LL);
  FxNonPagedObject::Lock(this, &irql, v12);
  FxIoQueue::DispatchEvents(this, irql, 0LL, v18);
  return 0LL;
}
