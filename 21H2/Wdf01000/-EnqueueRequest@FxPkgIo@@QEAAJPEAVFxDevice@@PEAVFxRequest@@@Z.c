/*
 * XREFs of ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0009010
 * Callers:
 *     imp_WdfDeviceEnqueueRequest @ 0x1C0008F10 (imp_WdfDeviceEnqueueRequest.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0009310 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009550 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C000AEBC (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C000AF4C (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C000E238 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C000E390 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C0011584 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C00196F8 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006D914 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C006E6F0 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C0082384 (WPP_IFR_SF_qLsqd.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00C74F8 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 *     ?Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z @ 0x1C00C8124 (-Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z.c)
 *     ?Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1C00C816C (-Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z.c)
 */

int __fastcall FxPkgIo::EnqueueRequest(FxPkgIo *this, unsigned __int64 Device, FxRequest *pRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxIoQueue *m_InternalContext; // rbx
  int MajorFunction; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned __int8 m_CompletionState; // al
  char m_ObjectFlags; // al
  unsigned __int8 v13; // r8
  unsigned __int8 v14; // r14
  unsigned int m_QueueState; // r10d
  bool v16; // bp
  _FX_DRIVER_GLOBALS *v17; // rdx
  FxIrpQueue *p_m_Queue; // rsi
  unsigned int v19; // edx
  _IRP *m_Irp; // r9
  $2E9503FEA5AD2275F0EE453185AD8E99 *v21; // r10
  _LIST_ENTRY *v22; // rcx
  _LIST_ENTRY *p_ListEntry; // rax
  int v24; // esi
  int result; // eax
  const void *v26; // rcx
  int v27; // esi
  unsigned __int16 v28; // ax
  const void *_a2; // rcx
  const void *v30; // r14
  unsigned __int16 v31; // ax
  const void *v32; // r14
  const void *v33; // rcx
  _FX_DRIVER_GLOBALS *v34; // rdx
  FxPkgIo *v35; // rcx
  int v36; // edx
  int v37; // edx
  FxRequestContext *m_RequestContext; // rax
  FxTagTracker *Blink; // rcx
  _LIST_ENTRY *v40; // rcx
  const void *v41; // rcx
  FxVerifierLock *v42; // rcx
  const void *globals; // r8
  const char *v44; // rdx
  const void *v45; // rcx
  unsigned __int8 v46; // r8
  _LIST_ENTRY *v47; // rcx
  __int64 v48; // r9
  __int64 v49; // r10
  FxRequest_vtbl *v50; // rax
  unsigned __int8 v51; // r8
  const _GUID *Line; // [rsp+20h] [rbp-68h]
  unsigned __int8 PreviousIrql; // [rsp+90h] [rbp+8h] BYREF
  __int16 origVerifierFlags; // [rsp+A0h] [rbp+18h] BYREF
  FxIrp Irp; // [rsp+A8h] [rbp+20h] BYREF

  m_Globals = this->m_Globals;
  origVerifierFlags = 0;
  if ( m_Globals->FxVerboseOn )
  {
    v26 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !pRequest->m_ObjectSize )
      v26 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x12u, WPP_FxPkgIo_cpp_Traceguids, v26);
  }
  if ( !m_Globals->FxVerifierOn
    || (result = FxPkgIo::Vf_VerifyEnqueueRequestUpdateFlags(this, m_Globals, pRequest, &origVerifierFlags), result >= 0) )
  {
    m_InternalContext = (FxIoQueue *)pRequest->m_InternalContext;
    pRequest->m_InternalContext = 0LL;
    if ( !m_InternalContext )
    {
      m_InternalContext = this->m_DispatchTable[pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction];
      if ( !m_InternalContext )
      {
        if ( !this->m_Filter )
        {
          v27 = -1073741808;
          v28 = *(_WORD *)(Device + 10);
          _a2 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !pRequest->m_ObjectSize )
            _a2 = 0LL;
          v30 = (const void *)(Device ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v28 )
            v30 = 0LL;
          WPP_IFR_SF_qqd(m_Globals, 2u, 0xDu, 0x13u, WPP_FxPkgIo_cpp_Traceguids, v30, _a2, -1073741808);
LABEL_53:
          FxVerifierDbgBreakPoint(m_Globals);
LABEL_81:
          if ( m_Globals->FxVerifierOn )
            FxPkgIo::Vf_VerifyEnqueueRequestRestoreFlags(v35, v34, pRequest, origVerifierFlags);
          return v27;
        }
LABEL_62:
        m_RequestContext = pRequest->m_RequestContext;
        if ( !m_RequestContext || !m_RequestContext->m_RequestType )
        {
          FxRequest::PreProcessSendAndForget(pRequest);
          IofCallDriver(*(PDEVICE_OBJECT *)(Device + 152), pRequest->m_Irp.m_Irp);
          FxRequest::PostProcessSendAndForget(pRequest);
          return 0;
        }
        v27 = -1073741808;
        v31 = *(_WORD *)(Device + 10);
        v32 = (const void *)(Device ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v31 )
          v32 = 0LL;
        v33 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !pRequest->m_ObjectSize )
          v33 = 0LL;
        WPP_IFR_SF_qqd(m_Globals, 2u, 0xDu, 0x14u, WPP_FxPkgIo_cpp_Traceguids, v33, v32, -1073741808);
        goto LABEL_53;
      }
    }
    if ( this->m_Filter
      && m_InternalContext == this->m_DefaultQueue
      && m_InternalContext->m_Type != WdfIoQueueDispatchManual
      && !m_InternalContext->m_IoDefault.Method )
    {
      MajorFunction = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
      if ( MajorFunction == 14 )
      {
        if ( !m_InternalContext->m_IoDeviceControl.Method )
          goto LABEL_62;
      }
      else
      {
        v36 = MajorFunction - 3;
        if ( v36 )
        {
          v37 = v36 - 1;
          if ( v37 )
          {
            if ( v37 != 11 || !m_InternalContext->m_IoInternalDeviceControl.Method )
              goto LABEL_62;
          }
          else if ( !m_InternalContext->m_IoWrite.Method )
          {
            goto LABEL_62;
          }
        }
        else if ( !m_InternalContext->m_IoRead.Method )
        {
          goto LABEL_62;
        }
      }
    }
    v9 = _InterlockedIncrement(&m_InternalContext->m_Refcnt);
    if ( SLOBYTE(m_InternalContext->m_ObjectFlags) < 0 )
    {
      Blink = (FxTagTracker *)m_InternalContext[-1].m_PowerIdle.m_Event.Header.WaitListHead.Blink;
      if ( Blink )
        FxTagTracker::UpdateTagHistory(Blink, 0LL, 0, 0LL, TagAddRef, v9);
    }
    v10 = _InterlockedIncrement(&pRequest->m_Refcnt);
    if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
    {
      v40 = pRequest[-1].m_OwnerListEntry2.Blink;
      if ( v40 )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)v40,
          (void *)0x74617453,
          690,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
          TagAddRef,
          v10);
    }
    if ( pRequest->m_Completed )
    {
      v41 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !pRequest->m_ObjectSize )
        v41 = 0LL;
      WPP_IFR_SF_q(pRequest->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v41);
      FxVerifierDbgBreakPoint(pRequest->m_Globals);
    }
    else
    {
      m_CompletionState = pRequest->m_CompletionState;
      pRequest->m_CompletionState = 0;
      if ( m_CompletionState )
        pRequest->Release(pRequest, (void *)1952543827, 1813, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
    m_ObjectFlags = m_InternalContext->m_ObjectFlags;
    PreviousIrql = 0;
    if ( m_ObjectFlags < 0
      && (v42 = *(FxVerifierLock **)&m_InternalContext[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v42, &PreviousIrql, (unsigned __int8)pRequest);
      v14 = PreviousIrql;
    }
    else
    {
      v14 = KeAcquireSpinLockRaiseToDpc(&m_InternalContext->m_NPLock.m_Lock);
      PreviousIrql = v14;
    }
    m_QueueState = m_InternalContext->m_QueueState;
    if ( (m_QueueState & 1) == 0 )
    {
      globals = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      v44 = "power stopping (Drain) in progress,";
      v27 = -1071644156;
      if ( !pRequest->m_ObjectSize )
        globals = 0LL;
      if ( (m_QueueState & 0x10000) == 0 )
        v44 = a5;
      v45 = (const void *)((unsigned __int64)m_InternalContext ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_InternalContext->m_ObjectSize )
        v45 = 0LL;
      WPP_IFR_SF_qLsqd(
        m_InternalContext->m_Globals,
        3u,
        (unsigned int)globals,
        0x2Bu,
        Line,
        v45,
        m_QueueState,
        v44,
        globals,
        -1071644156);
      FxNonPagedObject::Unlock(m_InternalContext, v14, v46);
      m_InternalContext->Release(m_InternalContext, 0LL, 0, 0LL);
      FxRequest::SetCompletionState(pRequest, FxRequestCompletionStateIoPkg);
      pRequest->Release(
        pRequest,
        (void *)1952543827,
        722,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
      goto LABEL_81;
    }
    v16 = pRequest->m_IrpAllocation == 0;
    v17 = pRequest->m_Globals;
    p_m_Queue = &m_InternalContext->m_Queue;
    if ( v17->FxVerifierOn && FxRequest::Vf_VerifyInsertIrpQueue(pRequest, v17, &m_InternalContext->m_Queue) < 0 )
    {
      pRequest->m_IoQueue = m_InternalContext;
    }
    else
    {
      v19 = _InterlockedIncrement(&pRequest->m_Refcnt);
      if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
      {
        v47 = pRequest[-1].m_OwnerListEntry2.Blink;
        if ( v47 )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)v47,
            (void *)0x75657551,
            1900,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            v19);
      }
      m_Irp = pRequest->m_Irp.m_Irp;
      v21 = &pRequest->120;
      pRequest->m_IrpQueue = p_m_Queue;
      Irp.m_Irp = m_Irp;
      if ( pRequest == (FxRequest *)-120LL )
      {
        m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
      }
      else
      {
        m_Irp->Tail.Overlay.DriverContext[3] = v21;
        pRequest->m_CsqContext.Irp = m_Irp;
        pRequest->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
        v21->m_CsqContext.Type = 1;
      }
      v22 = m_InternalContext->m_Queue.m_Queue.Blink;
      p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
      if ( (FxIrpQueue *)v22->Flink != p_m_Queue )
        __fastfail(3u);
      p_ListEntry->Flink = &p_m_Queue->m_Queue;
      m_Irp->Tail.Overlay.ListEntry.Blink = v22;
      v22->Flink = p_ListEntry;
      m_InternalContext->m_Queue.m_Queue.Blink = p_ListEntry;
      ++m_InternalContext->m_Queue.m_RequestCount;
      m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
      if ( m_Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
      {
        FxIrpQueue::RemoveIrpFromListEntry(&m_InternalContext->m_Queue, &Irp);
        if ( v49 )
          *(_QWORD *)(v49 + 8) = 0LL;
        *(_QWORD *)(v48 + 144) = 0LL;
        v50 = pRequest->__vftable;
        pRequest->m_IrpQueue = 0LL;
        v24 = -1073741536;
        v50->Release(pRequest, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
      }
      else
      {
        v24 = 0;
      }
      pRequest->m_IoQueue = m_InternalContext;
      if ( v24 >= 0 )
      {
        if ( m_InternalContext->m_Queue.m_RequestCount == 1
          || m_InternalContext->m_ForceTransitionFromEmptyWhenAddingNewRequest )
        {
          m_InternalContext->m_TransitionFromEmpty = 1;
          m_InternalContext->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
          if ( m_InternalContext->m_IsDevicePowerPolicyOwner )
          {
            if ( m_InternalContext->m_PowerManaged
              && !m_InternalContext->m_PowerReferenced
              && FxPowerIdleMachine::PowerReferenceWorker(
                   *(FxPowerIdleMachine **)(*(_QWORD *)&m_InternalContext->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized
                                          + 888LL),
                   0,
                   FxPowerReferenceDefault,
                   0LL,
                   0,
                   0LL) >= 0 )
            {
              m_InternalContext->m_PowerReferenced = 1;
            }
          }
        }
        goto LABEL_28;
      }
      v14 = PreviousIrql;
    }
    FxObject::AddRef(
      pRequest,
      (void *)0x75657551,
      2459,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxIoQueue::CancelForQueue(m_InternalContext, pRequest, v14);
    FxNonPagedObject::Lock(m_InternalContext, &PreviousIrql, v51);
LABEL_28:
    if ( v16 || !m_InternalContext->m_Dispatching )
      FxIoQueue::DispatchEvents(m_InternalContext, PreviousIrql, 0LL);
    else
      FxNonPagedObject::Unlock(m_InternalContext, PreviousIrql, v13);
    m_InternalContext->Release(m_InternalContext, 0LL, 0, 0LL);
    return 0;
  }
  return result;
}
