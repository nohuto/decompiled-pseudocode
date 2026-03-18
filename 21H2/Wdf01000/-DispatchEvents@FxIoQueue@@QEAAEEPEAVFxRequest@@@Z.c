/*
 * XREFs of ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009550
 * Callers:
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C000350C (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     ?FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z @ 0x1C00074E0 (-FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0008700 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008890 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0009010 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000A0B0 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C000A250 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000DF58 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C000F900 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C000F9BC (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C0018E80 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C001B404 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     imp_WdfIoQueueStart @ 0x1C001B5B0 (imp_WdfIoQueueStart.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C001B8B0 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0033CA0 (-ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C0035380 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 *     ?DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ @ 0x1C0081A20 (-DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C0081AB0 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 * Callees:
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0003538 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0009310 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0009D30 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C000A8B0 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C000D590 (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C000D6E0 (-ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0011924 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C0012800 (-ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C001289C (-ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z @ 0x1C0012938 (-ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C00133E0 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0016980 (WPP_IFR_SF_qqLL.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0053CE8 (WPP_IFR_SF_ql.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006D914 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006DC28 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C006E6F0 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qcq @ 0x1C0082540 (WPP_IFR_SF_qcq.c)
 */

unsigned __int8 __fastcall FxIoQueue::DispatchEvents(
        FxIoQueue *this,
        unsigned __int8 PreviousIrql,
        FxRequest *NewRequest,
        unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  FxCallbackLock *m_CallbackLockPtr; // rcx
  _LIST_ENTRY *p_m_Cancelled; // r15
  int v8; // edi
  FxIoQueuePowerState m_PowerState; // edx
  _FX_IO_QUEUE_STATE _a2; // edx
  _WDF_IO_QUEUE_DISPATCH_TYPE m_Type; // eax
  FxRequest *v12; // rdi
  FxIrpQueue *p_m_Queue; // r10
  _IRP *p_Blink; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY *v18; // r8
  _LIST_ENTRY *Blink; // rdx
  _QWORD *v20; // rdi
  __int64 v21; // rax
  void (__fastcall *v22)(FxRequest *, __int64, __int64, const char *); // rax
  _LIST_ENTRY *p_m_OwnerListEntry2; // rcx
  _LIST_ENTRY *v24; // rdx
  unsigned __int64 *p_m_Lock; // r14
  unsigned __int8 v26; // r8
  KIRQL v27; // al
  __int64 v28; // rdi
  __int64 v29; // r14
  unsigned __int64 *v30; // r13
  _FX_DRIVER_GLOBALS *v31; // r12
  __int64 v32; // rax
  unsigned int v33; // r14d
  __int64 v34; // r12
  int v35; // eax
  unsigned int TargetStatesCount; // r8d
  const FxPowerIdleTargetState *TargetStates; // rdx
  unsigned int _a3; // r14d
  __int64 v39; // rdx
  const void *v40; // rcx
  char v41; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  FxTagTracker *v43; // rcx
  const void *v44; // rax
  const void *v45; // rsi
  unsigned __int8 v46; // r8
  FxSystemWorkItem *v47; // rcx
  bool v48; // zf
  const void *v49; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  struct _KTHREAD *v52; // rax
  const void *v53; // rcx
  __int64 v54; // rax
  const void *v55; // rdx
  unsigned int v56; // edx
  _FX_DRIVER_GLOBALS *v57; // rcx
  const void *v58; // rcx
  unsigned __int8 v59; // dl
  FxVerifierLock *v60; // rcx
  FxVerifierLock *v61; // rcx
  FxVerifierLock *v62; // rcx
  const _GUID *Line; // [rsp+20h] [rbp-29h]
  _FX_DRIVER_GLOBALS *v64; // [rsp+50h] [rbp+7h]
  KIRQL v65; // [rsp+B0h] [rbp+67h]
  unsigned __int8 v66; // [rsp+B8h] [rbp+6Fh] BYREF
  FxRequest *Request; // [rsp+C0h] [rbp+77h] BYREF
  unsigned int v68; // [rsp+C8h] [rbp+7Fh]

  Request = NewRequest;
  v66 = PreviousIrql;
  m_Globals = this->m_Globals;
  v64 = m_Globals;
  if ( this->m_Deleted )
  {
    FxNonPagedObject::Unlock(this, v66, (unsigned __int8)NewRequest);
    return 0;
  }
  if ( v66 && this->m_PassiveLevel )
  {
    v49 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v48 = this->m_ObjectSize == 0;
    CurrentThread = KeGetCurrentThread();
    if ( v48 )
      v49 = 0LL;
    WPP_IFR_SF_qcq(this->m_Globals, (unsigned __int8)v49, (unsigned int)NewRequest, a4, Line, CurrentThread, v66, v49);
    if ( !this->m_WorkItemQueued )
    {
      m_SystemWorkItem = this->m_SystemWorkItem;
      this->m_WorkItemQueued = 1;
      if ( !FxSystemWorkItem::EnqueueWorker(m_SystemWorkItem, FxIoQueue::_DeferredDispatchThreadThunk, this, 1u) )
        this->m_WorkItemQueued = 0;
    }
    goto LABEL_105;
  }
  m_CallbackLockPtr = this->m_CallbackLockPtr;
  if ( !m_CallbackLockPtr || !m_CallbackLockPtr->IsOwner(m_CallbackLockPtr) )
  {
    ++this->m_Dispatching;
    if ( m_Globals->FxVerboseOn )
    {
      v52 = KeGetCurrentThread();
      v53 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v53 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x2Fu, WPP_FxIoQueue_cpp_Traceguids, v52, v53);
    }
    p_m_Cancelled = &this->m_Cancelled;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                do
                {
                  do
                    v8 = (Request != 0LL) + this->m_Queue.m_RequestCount + this->m_DriverIoCount;
                  while ( p_m_Cancelled->Flink != p_m_Cancelled
                       && (Request && FxIoQueue::InsertNewRequestLocked(this, &Request, v66) < 0
                        || FxIoQueue::ProcessCancelledRequests(this, &v66)) );
                }
                while ( this->m_CanceledOnQueueList.Flink != &this->m_CanceledOnQueueList
                     && (Request && FxIoQueue::InsertNewRequestLocked(this, &Request, v66) < 0
                      || FxIoQueue::ProcessCancelledRequestsOnQueue(this, &v66)) );
                if ( !this->m_IdleComplete.Method || this->m_Dispatching != 1 || this->m_DriverIoCount )
                  break;
                if ( Request )
                  FxIoQueue::InsertNewRequestLocked(this, &Request, v66);
                this->m_CancelDispatchedRequests = 0;
                FxIoQueue::ProcessIdleComplete(this, &v66);
              }
              if ( !this->m_PurgeComplete.Method || v8 || this->m_Dispatching != 1 )
                break;
              if ( Request )
                FxIoQueue::InsertNewRequestLocked(this, &Request, v66);
              this->m_CancelDispatchedRequests = 0;
              FxIoQueue::ProcessPurgeComplete(this, &v66);
            }
            if ( !this->m_IsDevicePowerPolicyOwner
              || !this->m_PowerManaged
              || !this->m_PowerReferenced
              || v8
              || this->m_Dispatching != 1 )
            {
              break;
            }
            v28 = *(_QWORD *)(*(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
            v29 = *(_QWORD *)(v28 + 624);
            v30 = (unsigned __int64 *)(v28 + 16);
            v31 = *(_FX_DRIVER_GLOBALS **)(v29 + 16);
            v65 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v28 + 16));
            if ( !*(_DWORD *)(v28 + 24) )
            {
              v54 = *(_QWORD *)(v29 + 96);
              v55 = (const void *)(v54 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !*(_WORD *)(v54 + 10) )
                v55 = 0LL;
              WPP_IFR_SF_qq(
                v31,
                2u,
                0xCu,
                0xFu,
                WPP_PowerIdleStateMachine_cpp_Traceguids,
                v55,
                *(const void **)(v54 + 144));
              if ( v31->FxVerifierOn
                && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v31, v56, 0xBu) || v31->FxVerifyDownlevel) )
              {
                FxVerifierDbgBreakPoint(v57);
              }
            }
            v32 = *(unsigned __int8 *)(v28 + 225);
            v33 = --*(_DWORD *)(v28 + 24);
            v34 = *(_QWORD *)(v28 + 624);
            *(_DWORD *)(v28 + 4 * v32 + 232) = 256;
            LOBYTE(v32) = *(_BYTE *)(v28 + 225) + 1;
            v68 = v33;
            *(_BYTE *)(v28 + 225) = v32 & 7;
            v35 = 0;
            TargetStatesCount = FxPowerIdleMachine::m_StateTable[*(int *)(v28 + 228) - 1].TargetStatesCount;
            if ( TargetStatesCount )
            {
              TargetStates = FxPowerIdleMachine::m_StateTable[*(int *)(v28 + 228) - 1].TargetStates;
              while ( TargetStates[v35].PowerIdleEvent != PowerIdleEventIoDecrement )
              {
                if ( ++v35 >= TargetStatesCount )
                  goto LABEL_71;
              }
              _a3 = TargetStates[v35].PowerIdleState;
              if ( _a3 != 35 )
              {
                do
                {
                  v39 = *(_QWORD *)(v34 + 96);
                  v40 = 0LL;
                  if ( *(_WORD *)(v39 + 10) )
                    v40 = (const void *)(*(_QWORD *)(v34 + 96) ^ 0xFFFFFFFFFFFFFFF8uLL);
                  WPP_IFR_SF_qqLL(
                    *(_FX_DRIVER_GLOBALS **)(v34 + 16),
                    4u,
                    0x15u,
                    0x11u,
                    WPP_PowerIdleStateMachine_cpp_Traceguids,
                    v40,
                    *(const void **)(v39 + 144),
                    _a3,
                    *(_DWORD *)(v28 + 228));
                  *(_DWORD *)(v28 + 4LL * *(unsigned __int8 *)(v28 + 226) + 264) = _a3;
                  v41 = *(_BYTE *)(v28 + 226) + 1;
                  *(_DWORD *)(v28 + 228) = _a3;
                  *(_BYTE *)(v28 + 226) = v41 & 7;
                  StateFunc = FxPowerIdleMachine::m_StateTable[(int)_a3 - 1].StateFunc;
                  if ( !StateFunc )
                    break;
                  _a3 = StateFunc((FxPowerIdleMachine *)v28);
                }
                while ( _a3 != 35 );
                p_m_Cancelled = &this->m_Cancelled;
                v30 = (unsigned __int64 *)(v28 + 16);
              }
              v33 = v68;
            }
LABEL_71:
            KeReleaseSpinLock(v30, v65);
            v43 = *(FxTagTracker **)(v28 + 32);
            if ( v43 )
              FxTagTracker::UpdateTagHistory(v43, 0LL, 0, 0LL, TagRelease, v33);
            m_Globals = v64;
            this->m_PowerReferenced = 0;
          }
          m_PowerState = this->m_PowerState;
          if ( (unsigned int)(m_PowerState - 1) <= 1 )
            break;
          if ( m_Globals->FxVerboseOn )
          {
            v58 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !this->m_ObjectSize )
              v58 = 0LL;
            WPP_IFR_SF_ql(m_Globals, 5u, 0xDu, 0x30u, WPP_FxIoQueue_cpp_Traceguids, v58, m_PowerState);
          }
          if ( (!Request || FxIoQueue::InsertNewRequestLocked(this, &Request, v66) >= 0)
            && !FxIoQueue::ProcessPowerEvents(this, &v66) )
          {
$Done_1:
            --this->m_Dispatching;
            if ( SLOBYTE(this->m_ObjectFlags) < 0
              && (v62 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
            {
              FxVerifierLock::Unlock(v62, v66, (unsigned __int8)NewRequest);
            }
            else
            {
              KeReleaseSpinLock(&this->m_NPLock.m_Lock, v66);
            }
            return 1;
          }
        }
        if ( this->m_Disposing && !v8 && this->m_Dispatching == 1 )
        {
          v59 = v66;
          this->m_Deleted = 1;
          FxNonPagedObject::Unlock(this, v59, (unsigned __int8)NewRequest);
          KeSetEvent(&this->m_FinishDisposing.m_Event, 0, 0);
          return 1;
        }
        if ( this->m_PowerState != FxIoQueuePowerOff )
          break;
LABEL_77:
        if ( !Request || FxIoQueue::InsertNewRequestLocked(this, &Request, v66) >= 0 )
          goto $Done_1;
      }
      _a2 = this->m_QueueState;
      if ( (_a2 & 2) == 0 )
      {
        v44 = 0LL;
        if ( this->m_ObjectSize )
          v44 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_qL(m_Globals, 3u, 0xDu, 0x31u, WPP_FxIoQueue_cpp_Traceguids, v44, _a2);
        goto LABEL_77;
      }
      m_Type = this->m_Type;
      if ( m_Type == WdfIoQueueDispatchManual )
      {
        if ( !Request || FxIoQueue::InsertNewRequestLocked(this, &Request, v66) >= 0 )
        {
          if ( !this->m_ReadyNotify.Method || !this->m_TransitionFromEmpty )
            goto $Done_1;
          FxIoQueue::ProcessReadyNotify(this, &v66);
        }
      }
      else
      {
        if ( m_Type == WdfIoQueueDispatchSequential && this->m_DriverIoCount > 0
          || this->m_Type == WdfIoQueueDispatchParallel
          && this->m_DriverIoCount >= this->m_MaxParallelQueuePresentedRequests )
        {
          goto LABEL_77;
        }
        if ( this->m_Queue.m_RequestCount <= 0 )
          goto LABEL_24;
        p_m_Queue = &this->m_Queue;
        p_Blink = 0LL;
        Flink = this->m_Queue.m_Queue.Flink;
        if ( Flink != (_LIST_ENTRY *)&this->m_Queue )
          p_Blink = (_IRP *)&Flink[-11].Blink;
        if ( p_Blink )
        {
          while ( !_InterlockedExchange64((volatile __int64 *)&p_Blink->CancelRoutine, 0LL) )
          {
            p_Blink = FxIrpQueue::PeekNextIrpFromQueue(p_m_Queue, p_Blink, 0LL);
            if ( !p_Blink )
              goto LABEL_24;
          }
          p_ListEntry = &p_Blink->Tail.Overlay.ListEntry;
          v18 = p_Blink->Tail.Overlay.ListEntry.Flink;
          if ( (void **)v18->Blink != &p_Blink->Tail.CompletionKey + 6
            || (Blink = p_Blink->Tail.Overlay.ListEntry.Blink, Blink->Flink != p_ListEntry) )
          {
LABEL_146:
            __fastfail(3u);
          }
          Blink->Flink = v18;
          v18->Blink = Blink;
          p_Blink->Tail.Overlay.ListEntry.Blink = &p_Blink->Tail.Overlay.ListEntry;
          p_ListEntry->Flink = p_ListEntry;
          --p_m_Queue->m_RequestCount;
          v20 = p_Blink->Tail.Overlay.DriverContext[3];
          if ( *(_DWORD *)v20 == 1 )
            v20[1] = 0LL;
          p_Blink->Tail.Overlay.DriverContext[3] = 0LL;
          v21 = *(v20 - 15);
          v12 = (FxRequest *)(v20 - 15);
          v22 = *(void (__fastcall **)(FxRequest *, __int64, __int64, const char *))(v21 + 16);
          v12->m_IrpQueue = 0LL;
          v22(v12, 1969583441LL, 2062LL, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
          if ( Request )
            FxIoQueue::InsertNewRequestLocked(this, &Request, v66);
        }
        else
        {
LABEL_24:
          v12 = Request;
          if ( !Request )
            goto $Done_1;
          Request->m_IoQueue = this;
          this->m_TransitionFromEmpty = 1;
          this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
          if ( this->m_IsDevicePowerPolicyOwner
            && this->m_PowerManaged
            && !this->m_PowerReferenced
            && (int)FxPowerIdleMachine::PowerReferenceWorker(
                      *(FxPowerIdleMachine **)(*(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized
                                             + 888LL),
                      0,
                      FxPowerReferenceDefault,
                      0LL,
                      0,
                      0LL) >= 0 )
          {
            this->m_PowerReferenced = 1;
          }
          Request = 0LL;
        }
        p_m_OwnerListEntry2 = &v12->m_OwnerListEntry2;
        ++this->m_DriverIoCount;
        v24 = this->m_DriverOwned.Blink;
        if ( v24->Flink != &this->m_DriverOwned )
          goto LABEL_146;
        p_m_OwnerListEntry2->Flink = &this->m_DriverOwned;
        v12->m_OwnerListEntry2.Blink = v24;
        v24->Flink = p_m_OwnerListEntry2;
        this->m_DriverOwned.Blink = p_m_OwnerListEntry2;
        if ( SLOBYTE(this->m_ObjectFlags) < 0
          && (v60 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Unlock(v60, v66, (unsigned __int8)NewRequest);
          p_m_Lock = &this->m_NPLock.m_Lock;
        }
        else
        {
          p_m_Lock = &this->m_NPLock.m_Lock;
          KeReleaseSpinLock(&this->m_NPLock.m_Lock, v66);
        }
        FxIoQueue::DispatchRequestToDriver(this, v12);
        if ( SLOBYTE(this->m_ObjectFlags) < 0
          && (v61 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Lock(v61, &v66, v26);
          m_Globals = v64;
        }
        else
        {
          v27 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
          m_Globals = v64;
          v66 = v27;
        }
      }
    }
  }
  v45 = 0LL;
  if ( this->m_ObjectSize )
    v45 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  WPP_IFR_SF_q(this->m_Globals, 3u, 0xDu, 0x2Eu, WPP_FxIoQueue_cpp_Traceguids, v45);
  if ( this->m_PassiveLevel )
  {
    if ( !this->m_WorkItemQueued )
    {
      v47 = this->m_SystemWorkItem;
      this->m_WorkItemQueued = 1;
      if ( !FxSystemWorkItem::EnqueueWorker(v47, FxIoQueue::_DeferredDispatchThreadThunk, this, 1u) )
        this->m_WorkItemQueued = 0;
    }
  }
  else if ( !this->m_DpcQueued )
  {
    this->m_DpcQueued = 1;
    KeInsertQueueDpc(&this->m_Dpc, 0LL, 0LL);
  }
LABEL_105:
  v48 = Request == 0LL;
  this->m_RequeueDeferredDispatcher = 1;
  if ( !v48 )
    FxIoQueue::InsertNewRequestLocked(this, &Request, v66);
  FxNonPagedObject::Unlock(this, v66, v46);
  return 1;
}
