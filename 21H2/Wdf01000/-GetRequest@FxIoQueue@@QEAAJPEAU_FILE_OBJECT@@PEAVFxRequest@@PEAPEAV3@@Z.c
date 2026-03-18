/*
 * XREFs of ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000A580
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0003FB0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfIoQueueRetrieveRequestByFileObject @ 0x1C0010880 (imp_WdfIoQueueRetrieveRequestByFileObject.c)
 *     imp_WdfIoQueueRetrieveNextRequest @ 0x1C0013330 (imp_WdfIoQueueRetrieveNextRequest.c)
 *     imp_WdfIoQueueRetrieveFoundRequest @ 0x1C0013750 (imp_WdfIoQueueRetrieveFoundRequest.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0011510 (-RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C00133E0 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0063FCC (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006D914 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006DC28 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C006E6F0 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7B00 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C85F0 (-Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C8640 (-Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::GetRequest(
        FxIoQueue *this,
        _FILE_OBJECT *FileObject,
        FxRequest *TagRequest,
        FxRequest **pOutRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int8 v8; // r8
  $2E9503FEA5AD2275F0EE453185AD8E99 *v9; // rsi
  FxIrpQueue *p_m_Queue; // r15
  FxIrpQueue *Flink; // rdx
  _IRP *i; // rax
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY *v14; // rdx
  _LIST_ENTRY *Blink; // r8
  $2E9503FEA5AD2275F0EE453185AD8E99 *v16; // rdi
  _LIST_ENTRY *v17; // rax
  $2E9503FEA5AD2275F0EE453185AD8E99 *v18; // rdi
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
  int v29; // edi
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rbx
  FxVerifierLock *v32; // rcx
  const void *v33; // rcx
  unsigned __int16 v34; // r9
  unsigned __int8 v35; // r8
  unsigned __int8 v36; // r8
  _FX_DRIVER_GLOBALS *Csq; // rdx
  const void *_a2; // rdx
  const void *v39; // rcx
  __int64 v40; // r8
  const void *v41; // rdx
  const void *v42; // rcx
  unsigned __int8 v43; // r8
  FxVerifierLock *v44; // rcx
  const void *v45; // rcx
  unsigned __int8 PreviousIrql[16]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int8 irql; // [rsp+90h] [rbp+8h] BYREF
  FxRequest **v48; // [rsp+A8h] [rbp+20h]

  v48 = pOutRequest;
  m_Globals = this->m_Globals;
  irql = 0;
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
    goto LABEL_58;
  }
  if ( (this->m_QueueState & 2) == 0 )
  {
    v33 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v34 = 28;
    if ( !this->m_ObjectSize )
      v33 = 0LL;
LABEL_58:
    WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, v34, WPP_FxIoQueue_cpp_Traceguids, v33, 0xC0200203);
    FxNonPagedObject::Unlock(this, irql, v35);
    return -1071644157;
  }
  v9 = &TagRequest->120;
  p_m_Queue = &this->m_Queue;
  if ( !TagRequest )
    v9 = 0LL;
  while ( 1 )
  {
    if ( v9 )
    {
      if ( !FxIrpQueue::RemoveIrpFromQueueByContext(&this->m_Queue, &v9->m_CsqContext) )
      {
        v29 = -1073741275;
LABEL_35:
        if ( v29 == -2147483622 && !FileObject && !TagRequest && this->m_Queue.m_RequestCount > 0 )
          this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 1;
        FxNonPagedObject::Unlock(this, irql, v8);
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
        if ( !FileObject )
          break;
        if ( i->Tail.Overlay.CurrentStackLocation->FileObject == FileObject )
          break;
        Flink = (FxIrpQueue *)Flink->m_Queue.Flink;
      }
      if ( !i )
      {
LABEL_34:
        v29 = -2147483622;
        goto LABEL_35;
      }
      while ( !_InterlockedExchange64((volatile __int64 *)&i->CancelRoutine, 0LL) )
      {
        i = FxIrpQueue::PeekNextIrpFromQueue(&this->m_Queue, i, FileObject);
        if ( !i )
          goto LABEL_34;
      }
      p_ListEntry = &i->Tail.Overlay.ListEntry;
      v14 = i->Tail.Overlay.ListEntry.Flink;
      if ( (void **)v14->Blink != &i->Tail.CompletionKey + 6 )
        goto LABEL_80;
      Blink = i->Tail.Overlay.ListEntry.Blink;
      if ( Blink->Flink != p_ListEntry )
        goto LABEL_80;
      Blink->Flink = v14;
      v14->Blink = Blink;
      i->Tail.Overlay.ListEntry.Blink = &i->Tail.Overlay.ListEntry;
      p_ListEntry->Flink = p_ListEntry;
      --this->m_Queue.m_RequestCount;
      v16 = ($2E9503FEA5AD2275F0EE453185AD8E99 *)i->Tail.Overlay.DriverContext[3];
      if ( v16->m_CsqContext.Type == 1 )
        v16->m_CsqContext.Irp = 0LL;
      i->Tail.Overlay.DriverContext[3] = 0LL;
    }
    v17 = v16[-5].m_ListEntry.Flink;
    v18 = v16 - 5;
    v19 = v17[1].Flink;
    v18[9].m_CsqContext.Irp = 0LL;
    ((void (__fastcall *)($2E9503FEA5AD2275F0EE453185AD8E99 *, __int64, __int64, const char *))v19)(
      v18,
      1969583441LL,
      2102LL,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    if ( this->m_AllowZeroLengthRequests )
      goto LABEL_24;
    if ( BYTE1(v18->m_CsqContext.Csq[5].CsqInsertIrp) )
    {
      PreviousIrql[0] = 0;
      FxNonPagedObject::Lock((FxNonPagedObject *)v18, PreviousIrql, v20);
      Csq = (_FX_DRIVER_GLOBALS *)v18->m_CsqContext.Csq;
      if ( Csq->FxVerifierOn )
        FxRequest::Vf_VerifyRequestIsNotCompleted((FxRequest *)v18, Csq);
      FxNonPagedObject::Unlock((FxNonPagedObject *)v18, PreviousIrql[0], v36);
    }
    CurrentStackLocation = v18[6].m_CsqContext.Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction != 3 )
      break;
    if ( CurrentStackLocation->Parameters.Read.Length )
      goto LABEL_24;
    FxNonPagedObject::Unlock(this, irql, v20);
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      v39 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !WORD1(v18->m_ListEntry.Blink) )
        v39 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x1Du, WPP_FxIoQueue_cpp_Traceguids, v39, _a2);
    }
    v18[6].m_CsqContext.Irp->IoStatus.Information = 0LL;
    FxRequest::Complete((FxRequest *)v18, 0);
    v40 = 1123LL;
LABEL_77:
    ((void (__fastcall *)($2E9503FEA5AD2275F0EE453185AD8E99 *, __int64, __int64, const char *))v18->m_ListEntry.Flink[1].Flink)(
      v18,
      1886220099LL,
      v40,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &irql, v43);
  }
  if ( CurrentStackLocation->MajorFunction == 4 && !CurrentStackLocation->Parameters.Read.Length )
  {
    FxNonPagedObject::Unlock(this, irql, v20);
    if ( m_Globals->FxVerboseOn )
    {
      v41 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v41 = 0LL;
      v42 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !WORD1(v18->m_ListEntry.Blink) )
        v42 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x1Eu, WPP_FxIoQueue_cpp_Traceguids, v42, v41);
    }
    v18[6].m_CsqContext.Irp->IoStatus.Information = 0LL;
    FxRequest::Complete((FxRequest *)v18, 0);
    v40 = 1139LL;
    goto LABEL_77;
  }
LABEL_24:
  ++this->m_DriverIoCount;
  v22 = &v18[12].m_ListEntry + 1;
  v23 = this->m_DriverOwned.Blink;
  if ( v23->Flink != &this->m_DriverOwned )
LABEL_80:
    __fastfail(3u);
  v22->Flink = &this->m_DriverOwned;
  v18[13].m_ListEntry.Flink = v23;
  v23->Flink = v22;
  this->m_DriverOwned.Blink = v22;
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v44 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v44, irql, v20);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
  if ( *((_BYTE *)&v18[8].m_ListEntry + 22) )
  {
    v45 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !WORD1(v18->m_ListEntry.Blink) )
      v45 = 0LL;
    WPP_IFR_SF_q((_FX_DRIVER_GLOBALS *)v18->m_CsqContext.Csq, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v45);
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
  ((void (__fastcall *)($2E9503FEA5AD2275F0EE453185AD8E99 *, __int64, __int64, const char *))v27[1].Flink)(
    v18,
    1952543827LL,
    1193LL,
    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  *v48 = (FxRequest *)v18;
  return 0;
}
