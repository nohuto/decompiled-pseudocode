/*
 * XREFs of ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C0077B00
 * Callers:
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00071B0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0012FB0 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C0012F08 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C002FCFC (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qdd @ 0x1C003C8B8 (WPP_IFR_SF_qdd.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0049D0C (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z @ 0x1C0077DC4 (-QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z.c)
 */

__int64 __fastcall FxIoQueue::GetReservedRequest(FxIoQueue *this, _IRP *Irp, FxRequest **ReservedRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned int v5; // ebp
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rdx
  int v9; // edx
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 (__fastcall *v11)(unsigned __int64, _IRP *); // r8
  const void *_a1; // rax
  int _a2; // edx
  const void *v15; // rax
  int v16; // edx
  KIRQL v17; // r15
  _LIST_ENTRY *p_m_ReservedRequestList; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v20; // rdx
  FxRequest *v21; // rsi
  _LIST_ENTRY *p_m_ReservedRequestInUseList; // rcx
  _LIST_ENTRY *Blink; // rdx
  FxRequestBase *v24; // rcx
  unsigned __int8 v25; // r8

  m_Globals = this->m_Globals;
  v5 = 0;
  m_FwdProgContext = this->m_FwdProgContext;
  *ReservedRequest = 0LL;
  if ( m_FwdProgContext->m_Policy == WdfIoForwardProgressReservedPolicyAlwaysUseReservedRequest )
    goto LABEL_11;
  if ( m_FwdProgContext->m_Policy == WdfIoForwardProgressReservedPolicyUseExamine )
  {
    if ( !m_FwdProgContext->m_IoExamineIrp.Method )
      goto LABEL_14;
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    v9 = v11(ObjectHandleUnchecked, Irp);
    if ( (unsigned int)(v9 - 1) > 1 )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qdd(m_Globals, 2u, 0xDu, 0xAu, WPP_FxIoQueueKm_cpp_Traceguids, _a1, _a2, 0xC0000001);
      FxVerifierDbgBreakPoint(m_Globals);
      return 3221225473LL;
    }
    goto LABEL_12;
  }
  if ( m_FwdProgContext->m_Policy != WdfIoForwardProgressReservedPolicyPagingIO )
    goto LABEL_14;
  if ( (Irp->Flags & 2) != 0 && Irp->Tail.Overlay.CurrentStackLocation->MajorFunction != 13 )
LABEL_11:
    v9 = 2;
  else
    v9 = 1;
LABEL_12:
  if ( v9 == 1 )
  {
    v15 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qid(m_Globals, 2u, v16 + 12, v16 + 10, WPP_FxIoQueueKm_cpp_Traceguids, v15, (__int64)Irp, -1073741823);
    return 3221225473LL;
  }
LABEL_14:
  v17 = KeAcquireSpinLockRaiseToDpc(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock);
  p_m_ReservedRequestList = &this->m_FwdProgContext->m_ReservedRequestList;
  Flink = p_m_ReservedRequestList->Flink;
  if ( p_m_ReservedRequestList->Flink == p_m_ReservedRequestList )
  {
    v5 = FxIoQueue::QueueForwardProgressIrpLocked(this, Irp);
  }
  else
  {
    if ( Flink->Blink != p_m_ReservedRequestList
      || (v20 = Flink->Flink, Flink->Flink->Blink != Flink)
      || (p_m_ReservedRequestList->Flink = v20,
          v21 = (FxRequest *)&Flink[-20],
          v20->Blink = p_m_ReservedRequestList,
          p_m_ReservedRequestInUseList = &this->m_FwdProgContext->m_ReservedRequestInUseList,
          Blink = this->m_FwdProgContext->m_ReservedRequestInUseList.Blink,
          Blink->Flink != p_m_ReservedRequestInUseList) )
    {
      __fastfail(3u);
    }
    Flink->Flink = p_m_ReservedRequestInUseList;
    Flink->Blink = Blink;
    Blink->Flink = Flink;
    p_m_ReservedRequestInUseList->Blink = Flink;
    v21->m_Irp.m_Irp = Irp;
    FxRequest::AssignMemoryBuffers((FxRequest *)&Flink[-20], (_WDF_DEVICE_IO_TYPE)this->m_DeviceBase[1].m_Refcnt);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v24, 1024, v25);
    *ReservedRequest = v21;
  }
  KeReleaseSpinLock(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock, v17);
  return v5;
}
