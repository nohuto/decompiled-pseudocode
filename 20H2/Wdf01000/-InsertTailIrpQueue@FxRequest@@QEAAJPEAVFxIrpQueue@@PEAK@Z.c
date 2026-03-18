/*
 * XREFs of ?InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C00053B0
 * Callers:
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005488 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C00154AC (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x1C0016B14 (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 * Callees:
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C00184D4 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005AE28 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00C2400 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 */

int __fastcall FxRequest::InsertTailIrpQueue(FxRequest *this, FxIrpQueue *IrpQueue, _IRP *a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned int RefCount; // edx
  _IRP *m_Irp; // r9
  $1B06A8CAC2803A14CDDB839694AE83F6 *v8; // r10
  _LIST_ENTRY *v9; // rax
  _LIST_ENTRY *p_ListEntry; // rcx
  int v11; // edi
  int result; // eax
  _LIST_ENTRY *Blink; // rcx
  __int64 v14; // r9
  __int64 v15; // r10
  FxRequest_vtbl *v16; // rax
  FxIrp Irp; // [rsp+50h] [rbp+18h] BYREF

  Irp.m_Irp = a3;
  m_Globals = this->m_Globals;
  if ( !m_Globals->FxVerifierOn || (result = FxRequest::Vf_VerifyInsertIrpQueue(this, m_Globals, IrpQueue), result >= 0) )
  {
    RefCount = _InterlockedIncrement(&this->m_Refcnt);
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
    {
      Blink = this[-1].m_OwnerListEntry2.Blink;
      if ( Blink )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)Blink,
          (void *)0x75657551,
          1900,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
          TagAddRef,
          RefCount);
    }
    m_Irp = this->m_Irp.m_Irp;
    v8 = &this->120;
    this->m_IrpQueue = IrpQueue;
    Irp.m_Irp = m_Irp;
    if ( this == (FxRequest *)-120LL )
    {
      m_Irp->Tail.Overlay.DriverContext[3] = IrpQueue;
    }
    else
    {
      m_Irp->Tail.Overlay.DriverContext[3] = v8;
      this->m_CsqContext.Irp = m_Irp;
      this->m_CsqContext.Csq = (_IO_CSQ *)IrpQueue;
      v8->m_CsqContext.Type = 1;
    }
    v9 = IrpQueue->m_Queue.Blink;
    p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
    if ( (FxIrpQueue *)v9->Flink != IrpQueue )
      __fastfail(3u);
    m_Irp->Tail.Overlay.ListEntry.Blink = v9;
    p_ListEntry->Flink = &IrpQueue->m_Queue;
    v9->Flink = p_ListEntry;
    IrpQueue->m_Queue.Blink = p_ListEntry;
    ++IrpQueue->m_RequestCount;
    m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
    if ( !m_Irp->Cancel || !_InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
      return 0;
    FxIrpQueue::RemoveIrpFromListEntry(IrpQueue, &Irp);
    if ( v15 )
      *(_QWORD *)(v15 + 8) = 0LL;
    *(_QWORD *)(v14 + 144) = 0LL;
    v16 = this->__vftable;
    this->m_IrpQueue = 0LL;
    v11 = -1073741536;
    v16->Release(this, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    return v11;
  }
  return result;
}
