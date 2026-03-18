/*
 * XREFs of ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000A1C0
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005FD0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfIoQueueRetrieveNextRequest @ 0x1C0017E70 (imp_WdfIoQueueRetrieveNextRequest.c)
 *     imp_WdfIoQueueRetrieveFoundRequest @ 0x1C0019730 (imp_WdfIoQueueRetrieveFoundRequest.c)
 *     imp_WdfIoQueueRetrieveRequestByFileObject @ 0x1C0074500 (imp_WdfIoQueueRetrieveRequestByFileObject.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0016C68 (-RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0049A94 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C0055888 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005A8F8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005ABF8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005B708 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6A10 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C751C (-Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C756C (-Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::GetRequest(
        FxIoQueue *this,
        _FILE_OBJECT *FileObject,
        FxRequest *TagRequest,
        $D2630951142BB9990C21B010EDE8224F **pOutRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _FILE_OBJECT *v7; // rbx
  $D2630951142BB9990C21B010EDE8224F *v9; // rbp
  FxIrpQueue *p_m_Queue; // r12
  FxIrpQueue *Flink; // rdx
  _IRP *i; // rax
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY *v14; // rdx
  _LIST_ENTRY *Blink; // r8
  $D2630951142BB9990C21B010EDE8224F *v16; // rbx
  _LIST_ENTRY *v17; // rax
  $D2630951142BB9990C21B010EDE8224F *v18; // rbx
  _LIST_ENTRY *v19; // rax
  unsigned __int8 v20; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _LIST_ENTRY *v22; // rax
  _LIST_ENTRY *v23; // rdx
  _FX_DRIVER_GLOBALS *v24; // rdx
  FxTagTracker *v25; // rcx
  char v26; // al
  _LIST_ENTRY *v27; // rax
  int result; // eax
  int v29; // ebx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdi
  FxVerifierLock *v32; // rcx
  const void *v33; // rcx
  unsigned __int16 v34; // r9
  _FX_DRIVER_GLOBALS *Csq; // rdx
  const void *_a2; // rdx
  const void *v37; // rcx
  __int64 v38; // r8
  const void *v39; // rdx
  const void *v40; // rcx
  FxVerifierLock *v41; // rcx
  const void *v42; // rcx
  unsigned __int8 PreviousIrql[8]; // [rsp+40h] [rbp-48h] BYREF
  $D2630951142BB9990C21B010EDE8224F *v44; // [rsp+48h] [rbp-40h]
  unsigned __int8 irql; // [rsp+90h] [rbp+8h] BYREF
  _FILE_OBJECT *v46; // [rsp+98h] [rbp+10h]

  v46 = FileObject;
  m_Globals = this->m_Globals;
  irql = 0;
  v7 = FileObject;
  if ( m_Globals->FxVerifierOn )
  {
    result = FxIoQueue::Vf_VerifyGetRequestUpdateFlags(this, m_Globals, TagRequest);
    if ( result < 0 )
      return result;
  }
  if ( ((this->m_Type - 1) & 0xFFFFFFFD) != 0 )
  {
    m_ObjectSize = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x1Au, WPP_FxIoQueue_cpp_Traceguids, _a1, 0xC0000184);
    return -1073741436;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v32 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v32, &irql, (unsigned __int8)TagRequest);
  }
  else
  {
    irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  if ( this->m_PowerState == FxIoQueuePowerOff )
  {
    v33 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v34 = 27;
    if ( !this->m_ObjectSize )
      v33 = 0LL;
    goto LABEL_54;
  }
  if ( (this->m_QueueState & 2) == 0 )
  {
    v33 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v34 = 28;
    if ( !this->m_ObjectSize )
      v33 = 0LL;
LABEL_54:
    WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, v34, WPP_FxIoQueue_cpp_Traceguids, v33, 0xC0200203);
    FxNonPagedObject::Unlock(this, irql);
    return -1071644157;
  }
  v9 = &TagRequest->120;
  if ( !TagRequest )
    v9 = 0LL;
  p_m_Queue = &this->m_Queue;
  while ( 1 )
  {
    if ( v9 )
    {
      if ( !FxIrpQueue::RemoveIrpFromQueueByContext(&this->m_Queue, &v9->m_CsqContext) )
      {
        v29 = -1073741275;
LABEL_36:
        if ( v29 == -2147483622 && !v46 && !TagRequest && this->m_Queue.m_RequestCount > 0 )
          this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 1;
        FxNonPagedObject::Unlock(this, irql);
        return v29;
      }
      v16 = v9;
    }
    else
    {
      Flink = (FxIrpQueue *)p_m_Queue->m_Queue.Flink;
      for ( i = 0LL; Flink != p_m_Queue; i = 0LL )
      {
        i = (_IRP *)&Flink[-5].m_RequestCount;
        if ( !v7 )
          break;
        if ( i->Tail.Overlay.CurrentStackLocation->FileObject == v7 )
          break;
        Flink = (FxIrpQueue *)Flink->m_Queue.Flink;
      }
      if ( !i )
      {
LABEL_35:
        v29 = -2147483622;
        goto LABEL_36;
      }
      while ( !_InterlockedExchange64((volatile __int64 *)&i->CancelRoutine, 0LL) )
      {
        i = FxIrpQueue::PeekNextIrpFromQueue(&this->m_Queue, i, v7);
        if ( !i )
          goto LABEL_35;
      }
      p_ListEntry = &i->Tail.Overlay.ListEntry;
      v14 = i->Tail.Overlay.ListEntry.Flink;
      if ( (void **)v14->Blink != &i->Tail.CompletionKey + 6 )
        goto LABEL_83;
      Blink = i->Tail.Overlay.ListEntry.Blink;
      if ( Blink->Flink != p_ListEntry )
        goto LABEL_83;
      Blink->Flink = v14;
      v14->Blink = Blink;
      i->Tail.Overlay.ListEntry.Blink = &i->Tail.Overlay.ListEntry;
      p_ListEntry->Flink = p_ListEntry;
      --this->m_Queue.m_RequestCount;
      v16 = ($D2630951142BB9990C21B010EDE8224F *)i->Tail.Overlay.DriverContext[3];
      if ( v16->m_CsqContext.Type == 1 )
        v16->m_CsqContext.Irp = 0LL;
      v44 = v16;
      i->Tail.Overlay.DriverContext[3] = 0LL;
    }
    v17 = v16[-5].m_ListEntry.Flink;
    v18 = v16 - 5;
    v19 = v17[1].Flink;
    v18[9].m_CsqContext.Irp = 0LL;
    ((void (__fastcall *)($D2630951142BB9990C21B010EDE8224F *, __int64, __int64, const char *))v19)(
      v18,
      1969583441LL,
      2102LL,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    if ( this->m_AllowZeroLengthRequests )
      goto LABEL_25;
    if ( BYTE1(v18->m_CsqContext.Csq[5].Type) )
    {
      PreviousIrql[0] = 0;
      FxNonPagedObject::Lock((FxNonPagedObject *)v18, PreviousIrql);
      Csq = (_FX_DRIVER_GLOBALS *)v18->m_CsqContext.Csq;
      if ( Csq->FxVerifierOn )
        FxRequest::Vf_VerifyRequestIsNotCompleted((FxRequest *)v18, Csq);
      FxNonPagedObject::Unlock((FxNonPagedObject *)v18, PreviousIrql[0]);
    }
    CurrentStackLocation = v18[6].m_CsqContext.Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction != 3 )
      break;
    if ( CurrentStackLocation->Parameters.Read.Length )
      goto LABEL_25;
    FxNonPagedObject::Unlock(this, irql);
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      v37 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !WORD1(v18->m_ListEntry.Blink) )
        v37 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x1Du, WPP_FxIoQueue_cpp_Traceguids, v37, _a2);
    }
    v18[6].m_CsqContext.Irp->IoStatus.Information = 0LL;
    FxRequest::Complete((FxRequest *)v18, 0);
    v38 = 1123LL;
LABEL_79:
    ((void (__fastcall *)($D2630951142BB9990C21B010EDE8224F *, __int64, __int64, const char *))v18->m_ListEntry.Flink[1].Flink)(
      v18,
      1886220099LL,
      v38,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &irql);
    v7 = v46;
  }
  if ( CurrentStackLocation->MajorFunction == 4 && !CurrentStackLocation->Parameters.Read.Length )
  {
    FxNonPagedObject::Unlock(this, irql);
    if ( m_Globals->FxVerboseOn )
    {
      v39 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v39 = 0LL;
      v40 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !WORD1(v18->m_ListEntry.Blink) )
        v40 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x1Eu, WPP_FxIoQueue_cpp_Traceguids, v40, v39);
    }
    v18[6].m_CsqContext.Irp->IoStatus.Information = 0LL;
    FxRequest::Complete((FxRequest *)v18, 0);
    v38 = 1139LL;
    goto LABEL_79;
  }
LABEL_25:
  ++this->m_DriverIoCount;
  v22 = &v18[12].m_ListEntry + 1;
  v23 = this->m_DriverOwned.Blink;
  if ( v23->Flink != &this->m_DriverOwned )
LABEL_83:
    __fastfail(3u);
  v22->Flink = &this->m_DriverOwned;
  v18[13].m_ListEntry.Flink = v23;
  v23->Flink = v22;
  this->m_DriverOwned.Blink = v22;
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v41 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v41, irql, v20);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
  if ( *((_BYTE *)&v18[8].m_ListEntry + 22) )
  {
    v42 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !WORD1(v18->m_ListEntry.Blink) )
      v42 = 0LL;
    WPP_IFR_SF_q((_FX_DRIVER_GLOBALS *)v18->m_CsqContext.Csq, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v42);
    FxVerifierDbgBreakPoint((_FX_DRIVER_GLOBALS *)v18->m_CsqContext.Csq);
  }
  else
  {
    v26 = *((_BYTE *)&v18[9].m_ListEntry + 21);
    *((_BYTE *)&v18[9].m_ListEntry + 21) = 1;
    if ( !v26 )
    {
      v24 = (_FX_DRIVER_GLOBALS *)(unsigned int)_InterlockedIncrement((volatile signed __int32 *)&v18->m_ListEntry.Blink + 1);
      if ( SLOBYTE(v18[1].m_CsqContext.Type) < 0 )
      {
        v25 = (FxTagTracker *)v18[-2].m_ListEntry.Flink;
        if ( v25 )
          FxTagTracker::UpdateTagHistory(
            v25,
            (void *)0x74617453,
            1820,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            (unsigned int)v24);
      }
    }
  }
  if ( m_Globals->FxVerifierOn )
    FxIoQueue::Vf_VerifyGetRequestRestoreFlags((FxIoQueue *)v25, v24, (FxRequest *)v18);
  v27 = v18->m_ListEntry.Flink;
  *((_BYTE *)&v18[14].m_ListEntry + 16) = 1;
  ((void (__fastcall *)($D2630951142BB9990C21B010EDE8224F *, __int64, __int64, const char *))v27[1].Flink)(
    v18,
    1952543827LL,
    1193LL,
    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  result = 0;
  *pOutRequest = v18;
  return result;
}
