/*
 * XREFs of ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440
 * Callers:
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005488 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005CA0 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005FD0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0006C90 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0007B30 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007EE0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C000B944 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C000C420 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C00128E0 (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0012998 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C0012BAC (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0014EBC (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0014FE0 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     imp_WdfIoQueueStart @ 0x1C00151B0 (imp_WdfIoQueueStart.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C00158A8 (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     ?DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ @ 0x1C0075E84 (-DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C0075F20 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0076EC0 (-ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0077060 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0004224 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C000598C (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0008E30 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_qcq @ 0x1C000C14C (WPP_IFR_SF_qcq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0012700 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0013CE0 (-ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001444C (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0015188 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C00154AC (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C0017798 (-ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z @ 0x1C0017834 (-ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C00184D4 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C002FA6C (WPP_IFR_SF_ql.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0049A94 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C0055888 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005A8F8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005ABF8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005B708 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C00767A4 (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C0076928 (-ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00C6400 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 */

unsigned __int8 __fastcall FxIoQueue::DispatchEvents(
        FxIoQueue *this,
        unsigned __int8 PreviousIrql,
        FxRequest *NewRequest,
        unsigned __int16 a4)
{
  FxIoQueue *v4; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxCallbackLock *m_CallbackLockPtr; // rcx
  const _GUID *v7; // r8
  _LIST_ENTRY *p_m_Cancelled; // rcx
  int v9; // edi
  int m_PowerState; // edx
  unsigned int m_QueueState; // edx
  _WDF_IO_QUEUE_DISPATCH_TYPE m_Type; // eax
  FxRequest *v13; // rdi
  __int64 v15; // rdi
  __int64 v16; // rsi
  unsigned __int64 *v17; // r15
  _FX_DRIVER_GLOBALS *v18; // r14
  KIRQL v19; // r12
  __int64 v20; // rax
  unsigned int v21; // r13d
  __int64 v22; // r14
  __int64 v23; // rax
  unsigned int TargetStatesCount; // edx
  const FxPowerIdleTargetState *TargetStates; // r8
  FxTagTracker *v26; // rcx
  const void *id; // rdx
  bool v28; // zf
  struct _KTHREAD *level; // rcx
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  const void *v31; // rax
  FxIrpQueue *p_m_Queue; // r10
  _IRP *p_Blink; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY *v36; // r8
  _LIST_ENTRY *Blink; // rdx
  _QWORD *v38; // rdi
  __int64 v39; // rax
  void (__fastcall *v40)(FxRequest *, __int64, __int64, const char *); // rax
  _LIST_ENTRY *p_m_OwnerListEntry2; // rcx
  _LIST_ENTRY *v42; // rdx
  unsigned __int64 *p_m_Lock; // rsi
  unsigned __int8 v44; // r8
  FxRequest *v45; // rdi
  unsigned int v46; // r15d
  __int64 v47; // rsi
  unsigned __int64 *v48; // r12
  KIRQL v49; // al
  char v50; // cl
  KIRQL v51; // r13
  __int64 v52; // rax
  unsigned int v53; // edx
  const FxPowerIdleTargetState *v54; // r8
  int v55; // r14d
  FxTagTracker *v56; // rcx
  _FX_DRIVER_GLOBALS *v57; // rdx
  FxIrpQueue *v58; // rsi
  unsigned __int8 v59; // r14
  signed __int32 v60; // edx
  FxRequest *v61; // rdi
  unsigned int v62; // edx
  _IRP *m_Irp; // r9
  $D2630951142BB9990C21B010EDE8224F *v64; // r10
  _LIST_ENTRY *v65; // rcx
  _LIST_ENTRY *v66; // rax
  int v67; // r15d
  unsigned __int8 v68; // al
  unsigned int PowerIdleState; // esi
  __int64 v70; // rcx
  const void *v71; // rdx
  char v72; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  const void *v74; // rcx
  FxSystemWorkItem *v75; // rcx
  FxVerifierLock *v76; // rcx
  struct _KTHREAD *CurrentThread; // rax
  const void *v78; // rcx
  int inserted; // eax
  int v80; // eax
  unsigned __int8 v81; // al
  __int64 v82; // rax
  const void *v83; // rdx
  unsigned int v84; // edx
  _FX_DRIVER_GLOBALS *v85; // rcx
  const void *v86; // rcx
  int v87; // eax
  unsigned __int8 v88; // dl
  _LIST_ENTRY *v89; // rcx
  __int64 v90; // r9
  __int64 v91; // r10
  unsigned int v92; // r14d
  __int64 v93; // r12
  __int64 v94; // rdx
  const void *v95; // rcx
  char v96; // al
  FxPowerIdleStates (__fastcall *v97)(FxPowerIdleMachine *); // rax
  FxVerifierLock *v98; // rcx
  FxVerifierLock *v99; // rcx
  const _GUID *traceGuid; // [rsp+28h] [rbp-49h]
  KIRQL v101; // [rsp+58h] [rbp-19h]
  _FX_DRIVER_GLOBALS *v102; // [rsp+60h] [rbp-11h]
  FxIrp Irp; // [rsp+68h] [rbp-9h] BYREF
  __int64 v104; // [rsp+70h] [rbp-1h]
  _QWORD *v105; // [rsp+78h] [rbp+7h]
  unsigned __int8 flags; // [rsp+E0h] [rbp+6Fh] BYREF
  FxRequest *Request; // [rsp+E8h] [rbp+77h] BYREF
  unsigned __int8 v109; // [rsp+F0h] [rbp+7Fh] BYREF

  Request = NewRequest;
  flags = PreviousIrql;
  v4 = this;
  m_Globals = this->m_Globals;
  v102 = m_Globals;
  if ( this->m_Deleted )
  {
    FxNonPagedObject::Unlock(this, flags);
    return 0;
  }
  else
  {
    if ( flags && this->m_PassiveLevel )
    {
      id = 0LL;
      v28 = this->m_ObjectSize == 0;
      level = KeGetCurrentThread();
      if ( !v28 )
        id = (const void *)((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qcq(v4->m_Globals, (unsigned __int8)id, (unsigned int)NewRequest, a4, traceGuid, level, flags, id);
      if ( !v4->m_WorkItemQueued )
      {
        m_SystemWorkItem = v4->m_SystemWorkItem;
        v4->m_WorkItemQueued = 1;
        if ( !FxSystemWorkItem::EnqueueWorker(m_SystemWorkItem, FxIoQueue::_DeferredDispatchThreadThunk, v4, 1u) )
          v4->m_WorkItemQueued = 0;
      }
      goto LABEL_44;
    }
    m_CallbackLockPtr = this->m_CallbackLockPtr;
    if ( m_CallbackLockPtr && m_CallbackLockPtr->IsOwner(m_CallbackLockPtr) )
    {
      v74 = (const void *)((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v4->m_ObjectSize )
        v74 = 0LL;
      WPP_IFR_SF_q(v4->m_Globals, 3u, 0xDu, 0x2Eu, WPP_FxIoQueue_cpp_Traceguids, v74);
      if ( v4->m_PassiveLevel )
      {
        if ( !v4->m_WorkItemQueued )
        {
          v75 = v4->m_SystemWorkItem;
          v4->m_WorkItemQueued = 1;
          if ( !FxSystemWorkItem::EnqueueWorker(v75, FxIoQueue::_DeferredDispatchThreadThunk, v4, 1u) )
            v4->m_WorkItemQueued = 0;
        }
      }
      else if ( !v4->m_DpcQueued )
      {
        v4->m_DpcQueued = 1;
        KeInsertQueueDpc(&v4->m_Dpc, 0LL, 0LL);
      }
LABEL_44:
      v28 = Request == 0LL;
      v4->m_RequeueDeferredDispatcher = 1;
      if ( !v28 )
        FxIoQueue::InsertNewRequestLocked(v4, &Request, flags);
      if ( SLOBYTE(v4->m_ObjectFlags) < 0 )
      {
        v76 = *(FxVerifierLock **)&v4[-1].m_PowerIdle.m_DbgFlagIsInitialized;
        if ( v76 )
          goto LABEL_197;
      }
      goto LABEL_23;
    }
    ++v4->m_Dispatching;
    v7 = WPP_FxIoQueue_cpp_Traceguids;
    if ( !m_Globals->FxVerboseOn )
      goto LABEL_6;
    CurrentThread = KeGetCurrentThread();
    v78 = (const void *)((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v4->m_ObjectSize )
      v78 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x2Fu, WPP_FxIoQueue_cpp_Traceguids, CurrentThread, v78);
LABEL_37:
    v7 = WPP_FxIoQueue_cpp_Traceguids;
LABEL_6:
    while ( 2 )
    {
      p_m_Cancelled = &v4->m_Cancelled;
      do
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v9 = (Request != 0LL) + v4->m_Queue.m_RequestCount + v4->m_DriverIoCount;
              if ( p_m_Cancelled->Flink == p_m_Cancelled )
                break;
              if ( Request )
              {
                inserted = FxIoQueue::InsertNewRequestLocked(v4, &Request, flags);
                p_m_Cancelled = &v4->m_Cancelled;
                v7 = WPP_FxIoQueue_cpp_Traceguids;
                if ( inserted < 0 )
                  continue;
              }
              v68 = FxIoQueue::ProcessCancelledRequests(v4, &flags);
              p_m_Cancelled = &v4->m_Cancelled;
              v7 = WPP_FxIoQueue_cpp_Traceguids;
              if ( !v68 )
                break;
            }
            if ( v4->m_CanceledOnQueueList.Flink == &v4->m_CanceledOnQueueList )
              break;
            if ( Request )
            {
              v80 = FxIoQueue::InsertNewRequestLocked(v4, &Request, flags);
              p_m_Cancelled = &v4->m_Cancelled;
              v7 = WPP_FxIoQueue_cpp_Traceguids;
              if ( v80 < 0 )
                continue;
            }
            v81 = FxIoQueue::ProcessCancelledRequestsOnQueue(v4, &flags);
            p_m_Cancelled = &v4->m_Cancelled;
            v7 = WPP_FxIoQueue_cpp_Traceguids;
            if ( !v81 )
              break;
          }
          if ( v4->m_IdleComplete.Method && v4->m_Dispatching == 1 && !v4->m_DriverIoCount )
          {
            if ( Request )
              FxIoQueue::InsertNewRequestLocked(v4, &Request, flags);
            v4->m_CancelDispatchedRequests = 0;
            FxIoQueue::ProcessIdleComplete(v4, &flags);
            goto LABEL_94;
          }
          if ( v4->m_PurgeComplete.Method && !v9 && v4->m_Dispatching == 1 )
          {
            if ( Request )
              FxIoQueue::InsertNewRequestLocked(v4, &Request, flags);
            v4->m_CancelDispatchedRequests = 0;
            FxIoQueue::ProcessPurgeComplete(v4, &flags);
            v7 = WPP_FxIoQueue_cpp_Traceguids;
            goto LABEL_6;
          }
          if ( v4->m_IsDevicePowerPolicyOwner
            && v4->m_PowerManaged
            && v4->m_PowerReferenced
            && !v9
            && v4->m_Dispatching == 1 )
          {
            v15 = *(_QWORD *)(*(_QWORD *)&v4->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
            v16 = *(_QWORD *)(v15 + 624);
            v17 = (unsigned __int64 *)(v15 + 16);
            v18 = *(_FX_DRIVER_GLOBALS **)(v16 + 16);
            v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 16));
            if ( !*(_DWORD *)(v15 + 24) )
            {
              v82 = *(_QWORD *)(v16 + 96);
              v83 = (const void *)(v82 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !*(_WORD *)(v82 + 10) )
                v83 = 0LL;
              WPP_IFR_SF_qq(
                v18,
                2u,
                0xCu,
                0xFu,
                WPP_PowerIdleStateMachine_cpp_Traceguids,
                v83,
                *(const void **)(v82 + 144));
              if ( v18->FxVerifierOn
                && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v18, v84, 0xBu) || v18->FxVerifyDownlevel) )
              {
                FxVerifierDbgBreakPoint(v85);
              }
            }
            v20 = *(unsigned __int8 *)(v15 + 225);
            v21 = --*(_DWORD *)(v15 + 24);
            v22 = *(_QWORD *)(v15 + 624);
            *(_DWORD *)(v15 + 4 * v20 + 232) = 256;
            *(_BYTE *)(v15 + 225) = (*(_BYTE *)(v15 + 225) + 1) & 7;
            v23 = 0LL;
            TargetStatesCount = FxPowerIdleMachine::m_StateTable[*(int *)(v15 + 228) - 1].TargetStatesCount;
            if ( TargetStatesCount )
            {
              TargetStates = FxPowerIdleMachine::m_StateTable[*(int *)(v15 + 228) - 1].TargetStates;
              while ( TargetStates[v23].PowerIdleEvent != PowerIdleEventIoDecrement )
              {
                v23 = (unsigned int)(v23 + 1);
                if ( (unsigned int)v23 >= TargetStatesCount )
                  goto LABEL_34;
              }
              PowerIdleState = TargetStates[v23].PowerIdleState;
              if ( PowerIdleState != 35 )
              {
                do
                {
                  v70 = *(_QWORD *)(v22 + 96);
                  v71 = 0LL;
                  if ( *(_WORD *)(v70 + 10) )
                    v71 = (const void *)(*(_QWORD *)(v22 + 96) ^ 0xFFFFFFFFFFFFFFF8uLL);
                  WPP_IFR_SF_qqLL(
                    *(_FX_DRIVER_GLOBALS **)(v22 + 16),
                    4u,
                    0x15u,
                    0x11u,
                    WPP_PowerIdleStateMachine_cpp_Traceguids,
                    v71,
                    *(const void **)(v70 + 144),
                    PowerIdleState,
                    *(_DWORD *)(v15 + 228));
                  *(_DWORD *)(v15 + 4LL * *(unsigned __int8 *)(v15 + 226) + 264) = PowerIdleState;
                  v72 = *(_BYTE *)(v15 + 226) + 1;
                  *(_DWORD *)(v15 + 228) = PowerIdleState;
                  *(_BYTE *)(v15 + 226) = v72 & 7;
                  StateFunc = FxPowerIdleMachine::m_StateTable[(int)PowerIdleState - 1].StateFunc;
                  if ( !StateFunc )
                    break;
                  PowerIdleState = StateFunc((FxPowerIdleMachine *)v15);
                }
                while ( PowerIdleState != 35 );
                v4 = this;
                v17 = (unsigned __int64 *)(v15 + 16);
              }
            }
LABEL_34:
            KeReleaseSpinLock(v17, v19);
            v26 = *(FxTagTracker **)(v15 + 32);
            if ( v26 )
              FxTagTracker::UpdateTagHistory(v26, 0LL, 0, 0LL, TagRelease, v21);
            m_Globals = v102;
            v4->m_PowerReferenced = 0;
            goto LABEL_37;
          }
          m_PowerState = v4->m_PowerState;
          if ( (unsigned int)(m_PowerState - 1) <= 1 )
            break;
          if ( m_Globals->FxVerboseOn )
          {
            v86 = (const void *)((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v4->m_ObjectSize )
              v86 = 0LL;
            WPP_IFR_SF_ql(m_Globals, 5u, 0xDu, 0x30u, WPP_FxIoQueue_cpp_Traceguids, v86, m_PowerState);
          }
          if ( Request )
          {
            v87 = FxIoQueue::InsertNewRequestLocked(v4, &Request, flags);
            p_m_Cancelled = &v4->m_Cancelled;
            v7 = WPP_FxIoQueue_cpp_Traceguids;
            if ( v87 < 0 )
              continue;
          }
          if ( !FxIoQueue::ProcessPowerEvents(v4, &flags) )
            goto $Done_2;
          goto LABEL_94;
        }
        if ( v4->m_Disposing && !v9 && v4->m_Dispatching == 1 )
        {
          v88 = flags;
          v4->m_Deleted = 1;
          FxNonPagedObject::Unlock(v4, v88);
          KeSetEvent(&v4->m_FinishDisposing.m_Event, 0, 0);
          return 1;
        }
        if ( v4->m_PowerState == FxIoQueuePowerOff )
          goto LABEL_51;
        m_QueueState = v4->m_QueueState;
        if ( (m_QueueState & 2) == 0 )
        {
          v31 = 0LL;
          if ( v4->m_ObjectSize )
            v31 = (const void *)((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
          WPP_IFR_SF_qL(m_Globals, 3u, 0xDu, 0x31u, WPP_FxIoQueue_cpp_Traceguids, v31, m_QueueState);
          goto LABEL_51;
        }
        m_Type = v4->m_Type;
        if ( m_Type != WdfIoQueueDispatchManual )
        {
          if ( m_Type == WdfIoQueueDispatchSequential && v4->m_DriverIoCount > 0
            || v4->m_Type == WdfIoQueueDispatchParallel
            && v4->m_DriverIoCount >= v4->m_MaxParallelQueuePresentedRequests )
          {
LABEL_51:
            if ( !Request || FxIoQueue::InsertNewRequestLocked(v4, &Request, flags) >= 0 )
              goto $Done_2;
LABEL_94:
            v7 = WPP_FxIoQueue_cpp_Traceguids;
            goto LABEL_6;
          }
          if ( v4->m_Queue.m_RequestCount <= 0 )
            goto LABEL_21;
          p_m_Queue = &v4->m_Queue;
          p_Blink = 0LL;
          Flink = v4->m_Queue.m_Queue.Flink;
          if ( Flink != (_LIST_ENTRY *)&v4->m_Queue )
            p_Blink = (_IRP *)&Flink[-11].Blink;
          if ( p_Blink )
          {
            while ( !_InterlockedExchange64((volatile __int64 *)&p_Blink->CancelRoutine, 0LL) )
            {
              p_Blink = FxIrpQueue::PeekNextIrpFromQueue(p_m_Queue, p_Blink, 0LL);
              if ( !p_Blink )
                goto LABEL_21;
            }
            p_ListEntry = &p_Blink->Tail.Overlay.ListEntry;
            v36 = p_Blink->Tail.Overlay.ListEntry.Flink;
            if ( (void **)v36->Blink != &p_Blink->Tail.CompletionKey + 6
              || (Blink = p_Blink->Tail.Overlay.ListEntry.Blink, Blink->Flink != p_ListEntry) )
            {
LABEL_195:
              __fastfail(3u);
            }
            Blink->Flink = v36;
            v36->Blink = Blink;
            p_Blink->Tail.Overlay.ListEntry.Blink = &p_Blink->Tail.Overlay.ListEntry;
            p_ListEntry->Flink = p_ListEntry;
            --p_m_Queue->m_RequestCount;
            v38 = p_Blink->Tail.Overlay.DriverContext[3];
            if ( *(_DWORD *)v38 == 1 )
              v38[1] = 0LL;
            p_Blink->Tail.Overlay.DriverContext[3] = 0LL;
            v39 = *(v38 - 15);
            v105 = v38;
            v13 = (FxRequest *)(v38 - 15);
            v40 = *(void (__fastcall **)(FxRequest *, __int64, __int64, const char *))(v39 + 16);
            v13->m_IrpQueue = 0LL;
            v40(v13, 1969583441LL, 2062LL, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
            if ( Request )
              FxIoQueue::InsertNewRequestLocked(v4, &Request, flags);
          }
          else
          {
LABEL_21:
            v13 = Request;
            if ( !Request )
              goto $Done_2;
            Request->m_IoQueue = v4;
            v28 = v4->m_IsDevicePowerPolicyOwner == 0;
            v4->m_TransitionFromEmpty = 1;
            v4->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
            if ( !v28 && v4->m_PowerManaged && !v4->m_PowerReferenced )
            {
              v46 = 0;
              v47 = *(_QWORD *)(*(_QWORD *)&v4->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
              v48 = (unsigned __int64 *)(v47 + 16);
              v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v47 + 16));
              v50 = *(_BYTE *)(v47 + 224);
              v51 = v49;
              v101 = v49;
              if ( (v50 & 0x10) != 0 )
              {
                v55 = -1073741101;
              }
              else if ( (v50 & 0x20) != 0 )
              {
                v46 = ++*(_DWORD *)(v47 + 24);
                v104 = *(_QWORD *)(v47 + 624);
                *(_DWORD *)(v47 + 4LL * *(unsigned __int8 *)(v47 + 225) + 232) = 512;
                *(_BYTE *)(v47 + 225) = (*(_BYTE *)(v47 + 225) + 1) & 7;
                v52 = 0LL;
                v53 = FxPowerIdleMachine::m_StateTable[*(int *)(v47 + 228) - 1].TargetStatesCount;
                if ( v53 )
                {
                  v54 = FxPowerIdleMachine::m_StateTable[*(int *)(v47 + 228) - 1].TargetStates;
                  while ( v54[v52].PowerIdleEvent != PowerIdleEventIoIncrement )
                  {
                    v52 = (unsigned int)(v52 + 1);
                    if ( (unsigned int)v52 >= v53 )
                      goto LABEL_86;
                  }
                  v92 = v54[v52].PowerIdleState;
                  if ( v92 != 35 )
                  {
                    v93 = v104;
                    do
                    {
                      v94 = *(_QWORD *)(v93 + 96);
                      v95 = (const void *)(v94 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      if ( !*(_WORD *)(v94 + 10) )
                        v95 = 0LL;
                      WPP_IFR_SF_qqLL(
                        *(_FX_DRIVER_GLOBALS **)(v93 + 16),
                        4u,
                        0x15u,
                        0x11u,
                        WPP_PowerIdleStateMachine_cpp_Traceguids,
                        v95,
                        *(const void **)(v94 + 144),
                        v92,
                        *(_DWORD *)(v47 + 228));
                      *(_DWORD *)(v47 + 4LL * *(unsigned __int8 *)(v47 + 226) + 264) = v92;
                      v96 = *(_BYTE *)(v47 + 226) + 1;
                      *(_DWORD *)(v47 + 228) = v92;
                      *(_BYTE *)(v47 + 226) = v96 & 7;
                      v97 = FxPowerIdleMachine::m_StateTable[(int)v92 - 1].StateFunc;
                      if ( !v97 )
                        break;
                      v92 = v97((FxPowerIdleMachine *)v47);
                    }
                    while ( v92 != 35 );
                    v4 = this;
                    v48 = (unsigned __int64 *)(v47 + 16);
                    v51 = v101;
                  }
                }
LABEL_86:
                v55 = 259;
                if ( KeReadStateEvent((PRKEVENT)(v47 + 192)) )
                  v55 = 0;
              }
              else
              {
                v55 = -1073741101;
              }
              KeReleaseSpinLock(v48, v51);
              v56 = *(FxTagTracker **)(v47 + 32);
              if ( v56 && (!v55 || v55 == 259) )
                FxTagTracker::UpdateTagHistory(v56, 0LL, 0, 0LL, TagAddRef, v46);
              if ( v55 >= 0 )
                v4->m_PowerReferenced = 1;
            }
            Request = 0LL;
          }
          p_m_OwnerListEntry2 = &v13->m_OwnerListEntry2;
          ++v4->m_DriverIoCount;
          v42 = v4->m_DriverOwned.Blink;
          if ( v42->Flink != &v4->m_DriverOwned )
            goto LABEL_195;
          p_m_OwnerListEntry2->Flink = &v4->m_DriverOwned;
          v13->m_OwnerListEntry2.Blink = v42;
          v42->Flink = p_m_OwnerListEntry2;
          v4->m_DriverOwned.Blink = p_m_OwnerListEntry2;
          if ( SLOBYTE(v4->m_ObjectFlags) < 0
            && (v98 = *(FxVerifierLock **)&v4[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Unlock(v98, flags, (unsigned __int8)v7);
            p_m_Lock = &v4->m_NPLock.m_Lock;
          }
          else
          {
            p_m_Lock = &v4->m_NPLock.m_Lock;
            KeReleaseSpinLock(&v4->m_NPLock.m_Lock, flags);
          }
          FxIoQueue::DispatchRequestToDriver(v4, v13);
          if ( SLOBYTE(v4->m_ObjectFlags) < 0
            && (v99 = *(FxVerifierLock **)&v4[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Lock(v99, &flags, v44);
          }
          else
          {
            flags = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
          }
          m_Globals = v102;
          v7 = WPP_FxIoQueue_cpp_Traceguids;
          goto LABEL_6;
        }
        v45 = Request;
        if ( !Request )
          break;
        v57 = Request->m_Globals;
        v58 = &v4->m_Queue;
        v59 = flags;
        v109 = flags;
        if ( !v57->FxVerifierOn || (v67 = FxRequest::Vf_VerifyInsertIrpQueue(Request, v57, &v4->m_Queue), v67 >= 0) )
        {
          v60 = _InterlockedExchangeAdd(&v45->m_Refcnt, 1u);
          v61 = Request;
          v62 = v60 + 1;
          if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
          {
            v89 = Request[-1].m_OwnerListEntry2.Blink;
            if ( v89 )
              FxTagTracker::UpdateTagHistory(
                (FxTagTracker *)v89,
                (void *)0x75657551,
                1900,
                "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                TagAddRef,
                v62);
          }
          m_Irp = v61->m_Irp.m_Irp;
          v64 = &v61->120;
          v61->m_IrpQueue = v58;
          Irp.m_Irp = m_Irp;
          if ( v61 == (FxRequest *)-120LL )
          {
            m_Irp->Tail.Overlay.DriverContext[3] = v58;
          }
          else
          {
            m_Irp->Tail.Overlay.DriverContext[3] = v64;
            v61->m_CsqContext.Irp = m_Irp;
            v61->m_CsqContext.Csq = (_IO_CSQ *)v58;
            v64->m_CsqContext.Type = 1;
          }
          v65 = v4->m_Queue.m_Queue.Blink;
          v66 = &m_Irp->Tail.Overlay.ListEntry;
          if ( (FxIrpQueue *)v65->Flink != v58 )
            goto LABEL_195;
          v66->Flink = &v58->m_Queue;
          m_Irp->Tail.Overlay.ListEntry.Blink = v65;
          v65->Flink = v66;
          v4->m_Queue.m_Queue.Blink = v66;
          ++v4->m_Queue.m_RequestCount;
          m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          _InterlockedExchange64(
            (volatile __int64 *)&m_Irp->CancelRoutine,
            (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
          if ( m_Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
          {
            FxIrpQueue::RemoveIrpFromListEntry(&v4->m_Queue, &Irp);
            if ( v91 )
              *(_QWORD *)(v91 + 8) = 0LL;
            *(_QWORD *)(v90 + 144) = 0LL;
            v61->m_IrpQueue = 0LL;
            v45 = Request;
            v67 = -1073741536;
            Request->Release(
              Request,
              (void *)1969583441,
              1916,
              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
          }
          else
          {
            v45 = Request;
            v67 = 0;
          }
          v59 = v109;
        }
        if ( v67 < 0 )
        {
          FxNonPagedObject::Unlock(v4, v59);
          v45->m_Irp.m_Irp->IoStatus.Information = 0LL;
          FxRequest::Complete(v45, v67);
          v45->Release(
            v45,
            (void *)1886220099,
            2636,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          FxNonPagedObject::Lock(v4, &v109);
        }
        else
        {
          v45->m_IoQueue = v4;
          if ( v4->m_Queue.m_RequestCount == 1 || v4->m_ForceTransitionFromEmptyWhenAddingNewRequest )
          {
            v28 = v4->m_IsDevicePowerPolicyOwner == 0;
            v4->m_TransitionFromEmpty = 1;
            v4->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
            if ( !v28
              && v4->m_PowerManaged
              && !v4->m_PowerReferenced
              && (int)FxPowerIdleMachine::PowerReferenceWorker(
                        *(FxPowerIdleMachine **)(*(_QWORD *)&v4->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized
                                               + 888LL),
                        0,
                        FxPowerReferenceDefault,
                        0LL,
                        0,
                        0LL) >= 0 )
            {
              v4->m_PowerReferenced = 1;
            }
          }
        }
        m_Globals = v102;
        p_m_Cancelled = &v4->m_Cancelled;
        Request = 0LL;
        v7 = WPP_FxIoQueue_cpp_Traceguids;
      }
      while ( v67 < 0 );
      if ( v4->m_ReadyNotify.Method && v4->m_TransitionFromEmpty )
      {
        FxIoQueue::ProcessReadyNotify(v4, &flags);
        v7 = WPP_FxIoQueue_cpp_Traceguids;
        continue;
      }
      break;
    }
$Done_2:
    --v4->m_Dispatching;
    if ( SLOBYTE(v4->m_ObjectFlags) >= 0
      || (v76 = *(FxVerifierLock **)&v4[-1].m_PowerIdle.m_DbgFlagIsInitialized) == 0LL )
    {
LABEL_23:
      KeReleaseSpinLock(&v4->m_NPLock.m_Lock, flags);
      return 1;
    }
LABEL_197:
    FxVerifierLock::Unlock(v76, flags, (unsigned __int8)v7);
    return 1;
  }
}
