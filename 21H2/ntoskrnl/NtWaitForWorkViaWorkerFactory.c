/*
 * XREFs of NtWaitForWorkViaWorkerFactory @ 0x1402A7A90
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     KiReleaseKobjectLock @ 0x140212970 (KiReleaseKobjectLock.c)
 *     AlpcpQueueIoCompletionPort @ 0x14022AED0 (AlpcpQueueIoCompletionPort.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x14023CFB0 (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     ExpWorkerFactoryWantsToCreate @ 0x14023EE70 (ExpWorkerFactoryWantsToCreate.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeReleaseSemaphoreEx @ 0x140284630 (KeReleaseSemaphoreEx.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402A7748 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeRegisterObjectNotification @ 0x1402A7858 (KeRegisterObjectNotification.c)
 *     IoRemoveIoCompletion @ 0x1402A8D10 (IoRemoveIoCompletion.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402E7740 (ExpWorkerFactoryCheckCreate.c)
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     KiTryUnwaitThread @ 0x14034D570 (KiTryUnwaitThread.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     AlpciDestroyDeferredMessageContext @ 0x1406D3870 (AlpciDestroyDeferredMessageContext.c)
 *     AlpcpSendMessage @ 0x1406D3F60 (AlpcpSendMessage.c)
 *     NtAlpcSendWaitReceivePort @ 0x1406D7150 (NtAlpcSendWaitReceivePort.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExSystemExceptionFilter @ 0x1407D5080 (ExSystemExceptionFilter.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl NtWaitForWorkViaWorkerFactory(
        HANDLE WorkerFactoryHandle,
        PFILE_IO_COMPLETION_INFORMATION MiniPackets,
        ULONG Count,
        PULONG PacketsReturned,
        PWORKER_FACTORY_DEFERRED_WORK DeferredWork)
{
  ULONG v5; // r15d
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v8; // rcx
  __int64 v9; // r8
  _DWORD *SchedulerAssist; // r9
  int v11; // r14d
  PVOID v12; // rbx
  unsigned __int64 *v13; // rbx
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v16; // rdx
  int v17; // eax
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  bool v25; // zf
  ULONG *v26; // rsi
  ULONG *v27; // rcx
  PULONG v28; // rdi
  __int64 Next; // rax
  struct _KPRCB *v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  unsigned __int64 v33; // rbx
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  int v36; // eax
  HANDLE v37; // r15
  ULONG v38; // edi
  HANDLE v39; // rcx
  struct _KTHREAD *v40; // rax
  unsigned int v41; // edi
  signed __int32 v42; // esi
  char *v43; // rbx
  struct _KEVENT *v44; // rcx
  __int64 v45; // r13
  __int64 v46; // rbx
  _DWORD *v47; // r9
  struct _KPRCB *v48; // r10
  int v49; // eax
  int v50; // ecx
  _QWORD *v51; // rax
  int v52; // ebx
  _QWORD *v53; // r12
  __int64 v54; // rax
  _QWORD *v55; // rcx
  char v56; // al
  __int64 v57; // r14
  __int64 v58; // rsi
  char v59; // di
  struct _KPRCB *v60; // rbx
  _DWORD *v61; // rcx
  int v62; // eax
  _DWORD *v63; // rcx
  int v64; // eax
  char v65; // al
  int v66; // ecx
  struct _KPRCB *v67; // rcx
  _DWORD *v68; // rdx
  int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rdi
  struct _KPRCB *v72; // rbx
  _DWORD *v73; // rcx
  int v74; // eax
  _DWORD *v75; // rcx
  int v76; // eax
  __int64 v77; // rdx
  _QWORD *v78; // rcx
  struct _KPRCB *v79; // rcx
  _DWORD *v80; // rdx
  int v81; // eax
  char v82; // al
  __int64 v83; // rcx
  __int64 v84; // rbx
  _QWORD *v85; // rsi
  char v86; // r15
  unsigned __int8 v87; // cl
  _DWORD *v88; // r9
  struct _KPRCB *v89; // r14
  _KTHREAD *v90; // rdi
  unsigned __int8 IsThreadRunning; // al
  int v92; // r8d
  _QWORD *v93; // rdx
  struct _KTHREAD *v94; // rcx
  _QWORD *v95; // rbx
  unsigned __int64 *v96; // rbx
  unsigned __int8 v97; // r10
  _DWORD *v98; // r9
  struct _KPRCB *v99; // rcx
  _DWORD *v100; // rdx
  int v101; // eax
  bool v102; // al
  int *v103; // rdi
  struct _KTHREAD *v104; // r15
  unsigned int v105; // ecx
  _QWORD *v106; // rbx
  struct _KTHREAD **v107; // rax
  __int64 v108; // rax
  unsigned int v109; // edi
  PVOID *v110; // rbx
  int v111; // ecx
  __int64 v112; // rbx
  int v113; // edx
  __int64 v114; // rax
  struct _KPRCB *v115; // rcx
  _DWORD *v116; // rdx
  int v117; // eax
  unsigned __int64 v118; // rbx
  unsigned __int8 v119; // al
  struct _KPRCB *v120; // r9
  _DWORD *v121; // r8
  int v122; // eax
  unsigned __int8 v124; // al
  struct _KPRCB *v125; // r9
  _DWORD *v126; // r8
  int v127; // eax
  int HandleInformation; // [rsp+28h] [rbp-200h]
  int Timeout; // [rsp+38h] [rbp-1F0h]
  unsigned __int8 v130; // [rsp+40h] [rbp-1E8h]
  struct _KPRCB *v131; // [rsp+48h] [rbp-1E0h]
  ULONG v132; // [rsp+50h] [rbp-1D8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-1D0h] BYREF
  _QWORD *v134; // [rsp+70h] [rbp-1B8h]
  ULONG v135; // [rsp+78h] [rbp-1B0h] BYREF
  PULONG v136; // [rsp+80h] [rbp-1A8h]
  PVOID Object; // [rsp+88h] [rbp-1A0h] BYREF
  PFILE_IO_COMPLETION_INFORMATION v138; // [rsp+90h] [rbp-198h]
  PVOID v139; // [rsp+98h] [rbp-190h] BYREF
  int *v140; // [rsp+A0h] [rbp-188h]
  PULONG v141; // [rsp+A8h] [rbp-180h]
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-178h]
  __int128 v143; // [rsp+B8h] [rbp-170h] BYREF
  HANDLE Handle[2]; // [rsp+C8h] [rbp-160h]
  ULONG Flags[2]; // [rsp+D8h] [rbp-150h]
  int v146; // [rsp+E0h] [rbp-148h] BYREF
  int v147; // [rsp+E4h] [rbp-144h] BYREF
  int v148; // [rsp+E8h] [rbp-140h] BYREF
  PFILE_IO_COMPLETION_INFORMATION v149; // [rsp+F0h] [rbp-138h]
  PVOID v150; // [rsp+F8h] [rbp-130h]
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+100h] [rbp-128h] BYREF
  __int128 v152; // [rsp+110h] [rbp-118h]
  __int128 v153; // [rsp+120h] [rbp-108h]
  __int128 v154; // [rsp+130h] [rbp-F8h]
  _QWORD *v155; // [rsp+140h] [rbp-E8h]
  __int64 v156; // [rsp+148h] [rbp-E0h]
  struct _KTHREAD *CurrentThread; // [rsp+150h] [rbp-D8h]
  _OWORD v158[8]; // [rsp+160h] [rbp-C8h] BYREF
  void *retaddr; // [rsp+228h] [rbp+0h]

  v141 = PacketsReturned;
  v5 = Count;
  v132 = Count;
  v149 = MiniPackets;
  v140 = (int *)WorkerFactoryHandle;
  v138 = MiniPackets;
  v136 = PacketsReturned;
  v143 = 0LL;
  *(_OWORD *)Handle = 0LL;
  *(_QWORD *)Flags = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v158, 0, sizeof(v158));
  v135 = 0;
  v150 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v130 = PreviousMode;
  BugCheckParameter2 = (ULONG_PTR)v158;
  if ( Count - 1 > 0x7FFFFFE )
  {
    v11 = -1073741811;
    goto LABEL_249;
  }
  if ( PreviousMode )
  {
    ProbeForWrite(MiniPackets, 32LL * Count, 8u);
    v8 = (__int64)v141;
    if ( (unsigned __int64)v141 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    if ( ((unsigned __int8)DeferredWork & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&DeferredWork[1] > 0x7FFFFFFF0000LL || &DeferredWork[1] < DeferredWork )
      MEMORY[0x7FFFFFFF0000] = 0;
    *(_OWORD *)Handle = *(_OWORD *)&DeferredWork->AlpcSendMessage;
    *(_QWORD *)Flags = *(_QWORD *)&DeferredWork->AlpcSendMessageFlags;
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)&DeferredWork->AlpcSendMessage;
    *(_QWORD *)Flags = *(_QWORD *)&DeferredWork->AlpcSendMessageFlags;
  }
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(WorkerFactoryHandle, 2u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  v12 = Object;
  v134 = Object;
  v150 = Object;
  if ( v11 < 0 )
    goto LABEL_249;
  if ( v5 > 0x10 )
  {
    BugCheckParameter2 = (ULONG_PTR)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v5, 0x656E6F4Eu);
    if ( !BugCheckParameter2 )
    {
      v5 = 16;
      v132 = 16;
      BugCheckParameter2 = (ULONG_PTR)v158;
    }
  }
  v13 = (unsigned __int64 *)*((_QWORD *)v12 + 2);
  LockHandle.LockQueue.Lock = v13;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v9 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = v9;
  }
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = CurrentPrcb->SchedulerAssist;
  if ( v16 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v17 = v16[6];
      v16[6] = v17 + 1;
      if ( v17 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v13);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)v13, (__int64)&LockHandle) )
  {
    KxWaitForLockOwnerShip(&LockHandle);
  }
  v18 = v134;
  v19 = v134[2];
  if ( *(_BYTE *)(v19 + 33) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v21 = KeGetCurrentIrql();
        if ( v21 <= 0xFu && LockHandle.OldIrql <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v25 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
    }
    __writecr8(OldIrql);
    v11 = 128;
    goto LABEL_249;
  }
  v26 = (ULONG *)Object;
  v140 = (int *)((char *)Object + 312);
  if ( (*((_DWORD *)Object + 78) & 0x200) != 0 )
  {
    ExpLeaveWorkerFactoryAwayMode(Object);
    v18 = v134;
    v19 = v134[2];
  }
  ++*(_DWORD *)(v19 + 28);
  v27 = v26 + 71;
  v138 = (PFILE_IO_COMPLETION_INFORMATION)(v26 + 71);
  v28 = v26 + 72;
  v136 = v26 + 72;
  while ( *v27 >= *v28 && !*(_BYTE *)(v18[2] + 33LL) )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( LockHandle.LockQueue.Next )
        goto LABEL_47;
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) != &LockHandle )
      {
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
LABEL_47:
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      }
    }
    v30 = KeGetCurrentPrcb();
    v31 = (__int64)v30->SchedulerAssist;
    if ( v31 )
    {
      if ( v30->NestingLevel <= 1u )
      {
        v32 = *(_DWORD *)(v31 + 24) - 1;
        *(_DWORD *)(v31 + 24) = v32;
        if ( !v32 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
    v33 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v34 = KeGetCurrentIrql();
        if ( v34 <= 0xFu && LockHandle.OldIrql <= 0xFu && v34 >= 2u )
        {
          v35 = KeGetCurrentPrcb();
          SchedulerAssist = v35->SchedulerAssist;
          v31 = -1LL << (LockHandle.OldIrql + 1);
          v36 = ~(unsigned __int16)v31;
          v25 = (v36 & SchedulerAssist[5]) == 0;
          v9 = (unsigned int)v36 & SchedulerAssist[5];
          SchedulerAssist[5] = v9;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v35);
        }
      }
    }
    __writecr8(v33);
    if ( (Flags[1] & 1) != 0 )
    {
      v37 = Handle[0];
      v38 = Flags[0];
      v39 = Handle[1];
      *(_OWORD *)DmaAdapter = 0LL;
      v152 = 0LL;
      v153 = 0LL;
      v154 = 0LL;
      v40 = KeGetCurrentThread();
      --v40->KernelApcDisable;
      v143 = 0LL;
      v41 = v38 & 0xFFFF0000;
      if ( (v41 & 0x20000) != 0 )
        goto LABEL_184;
      v139 = 0LL;
      if ( ObReferenceObjectByHandle(v39, 1u, AlpcPortObjectType, v130, &v139, 0LL) < 0 )
        goto LABEL_184;
      if ( (v41 & 0x40000) == 0 )
        goto LABEL_70;
      v42 = _InterlockedIncrement((volatile signed __int32 *)v139 + 101);
      v43 = (char *)v139;
      if ( *((_QWORD *)v139 + 51) )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v139 + 352, 0LL);
        v44 = (struct _KEVENT *)*((_QWORD *)v43 + 51);
        if ( v44 && v42 == v44[1].Header.LockNV )
          KeSetEvent(v44, 0, 0);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v43 + 352);
        KeAbPostRelease((ULONG_PTR)(v43 + 352));
LABEL_70:
        v43 = (char *)v139;
      }
      DmaAdapter[0] = (PADAPTER_OBJECT)v43;
      LODWORD(v154) = v41 | 4;
      v153 = 0uLL;
      *((_QWORD *)&v152 + 1) = 0LL;
      if ( (int)AlpcpSendMessage(DmaAdapter, v37, 0LL, v130) < 0 )
      {
        HalPutDmaAdapter(DmaAdapter[0]);
LABEL_184:
        v94 = KeGetCurrentThread();
        v25 = v94->KernelApcDisable++ == -1;
        if ( v25
          && ($C459BD0D405E8E46662177FB3D0A143F *)v94->ApcState.ApcListHead[0].Flink != &v94->152
          && !v94->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery(v94, v31, v9, SchedulerAssist);
        }
        v28 = v136;
        v5 = v132;
        goto LABEL_189;
      }
      *(_QWORD *)&v143 = v153;
      *((PADAPTER_OBJECT *)&v143 + 1) = DmaAdapter[0];
      if ( (_QWORD)v153 )
      {
        if ( BYTE10(v154) )
          AlpcpQueueIoCompletionPort(v153, SBYTE11(v154), 1, 1);
        else
          KeReleaseSemaphoreEx(*(_QWORD *)(v153 + 248), 1, 1, (__int64)SchedulerAssist, 1);
        goto LABEL_184;
      }
      if ( !*((_QWORD *)&v152 + 1) )
      {
        if ( (BYTE8(v153) & 1) != 0 )
        {
          if ( (*((_QWORD *)&v153 + 1) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          {
            KeSetEvent((PRKEVENT)(*((_QWORD *)&v153 + 1) & 0xFFFFFFFFFFFFFFFCuLL), 0, 1u);
            if ( (BYTE8(v153) & 2) != 0 )
              HalPutDmaAdapter((PADAPTER_OBJECT)(*((_QWORD *)&v153 + 1) & 0xFFFFFFFFFFFFFFFCuLL));
          }
          *((_QWORD *)&v153 + 1) = 0LL;
        }
        goto LABEL_184;
      }
      v45 = *((_QWORD *)&v152 + 1) + 1160LL;
      v46 = KeGetCurrentIrql();
      v156 = v46;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v46 <= 0xFu )
      {
        v47 = KeGetCurrentPrcb()->SchedulerAssist;
        v47[5] |= (-1 << (v46 + 1)) & 4;
      }
      v48 = KeGetCurrentPrcb();
      v131 = v48;
      v146 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)v45, 7u) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v146);
          while ( (*(_DWORD *)v45 & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset((volatile signed __int32 *)v45, 7u) );
        v48 = v131;
      }
      v49 = *(_DWORD *)(v45 + 4);
      v50 = v49 + 1;
      if ( v49 + 1 > *(_DWORD *)(v45 + 24) || v50 < v49 )
      {
        KiReleaseKobjectLock((volatile signed __int32 *)v45);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v124 = KeGetCurrentIrql();
            if ( v124 <= 0xFu && (unsigned __int8)v46 <= 0xFu && v124 >= 2u )
            {
              v125 = KeGetCurrentPrcb();
              v126 = v125->SchedulerAssist;
              v127 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v46 + 1));
              v25 = (v127 & v126[5]) == 0;
              v126[5] &= v127;
              if ( v25 )
                KiRemoveSystemWorkPriorityKick(v125);
            }
          }
        }
        __writecr8((unsigned __int8)v46);
        RtlRaiseStatus(-1073741753);
      }
      *(_DWORD *)(v45 + 4) = v50;
      if ( v49 || (v51 = *(_QWORD **)(v45 + 8), v51 == (_QWORD *)(v45 + 8)) )
      {
        v52 = (int)v131;
LABEL_91:
        _InterlockedAnd((volatile signed __int32 *)v45, 0xFFFFFF7F);
        KiExitDispatcher(v52, 1, 1, 1, v156);
        goto LABEL_184;
      }
      while ( 2 )
      {
        v53 = v51;
        v54 = *v51;
        v155 = (_QWORD *)v54;
        v55 = (_QWORD *)v53[1];
        if ( *(_QWORD **)(v54 + 8) != v53 || (_QWORD *)*v55 != v53 )
LABEL_208:
          __fastfail(3u);
        *v55 = v54;
        *(_QWORD *)(v54 + 8) = v55;
        v56 = *((_BYTE *)v53 + 16);
        if ( v56 == 1 )
        {
          v57 = *((unsigned __int16 *)v53 + 9);
          v58 = v53[3];
          v59 = 0;
          v60 = KeGetCurrentPrcb();
          v147 = 0;
          while ( 1 )
          {
            v61 = v60->SchedulerAssist;
            if ( v61 )
            {
              if ( v60->NestingLevel <= 1u )
              {
                v62 = v61[6];
                v61[6] = v62 + 1;
                if ( v62 == -1 )
                  KiRemoveSystemWorkPriorityKick(v60);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v58 + 64), 0LL) )
              break;
            v63 = v60->SchedulerAssist;
            if ( v63 )
            {
              if ( v60->NestingLevel <= 1u )
              {
                v64 = v63[6] - 1;
                v63[6] = v64;
                if ( !v64 )
                  KiRemoveSystemWorkPriorityKick(v60);
              }
            }
            do
              KeYieldProcessorEx(&v147);
            while ( *(_QWORD *)(v58 + 64) );
          }
          if ( *(_BYTE *)(v58 + 388) == 5 )
          {
            v65 = *(_BYTE *)(v58 + 112);
            v66 = v65 & 7;
            if ( v66 == 1 || v66 == 4 )
            {
              v70 = *(_QWORD *)(v58 + 232);
              if ( v70 )
              {
                if ( (*(_BYTE *)v70 & 0x7F) == 0x15 )
                {
                  *(_DWORD *)(v58 + 540) = (unsigned __int8)*(_DWORD *)(v58 + 540);
                  _InterlockedIncrement((volatile signed __int32 *)(v70 + 4LL * *(unsigned int *)(v58 + 540) + 536));
                }
                else
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v70 + 40));
                }
              }
              v71 = *(_QWORD *)(v58 + 712);
              if ( v71 )
              {
                v72 = KeGetCurrentPrcb();
                v148 = 0;
                while ( 1 )
                {
                  v73 = v72->SchedulerAssist;
                  if ( v73 )
                  {
                    if ( v72->NestingLevel <= 1u )
                    {
                      v74 = v73[6];
                      v73[6] = v74 + 1;
                      if ( v74 == -1 )
                        KiRemoveSystemWorkPriorityKick(v72);
                    }
                  }
                  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v71 + 31760), 0LL) )
                    break;
                  v75 = v72->SchedulerAssist;
                  if ( v75 )
                  {
                    if ( v72->NestingLevel <= 1u )
                    {
                      v76 = v75[6] - 1;
                      v75[6] = v76;
                      if ( !v76 )
                        KiRemoveSystemWorkPriorityKick(v72);
                    }
                  }
                  do
                    KeYieldProcessorEx(&v148);
                  while ( *(_QWORD *)(v71 + 31760) );
                }
                if ( *(_QWORD *)(v58 + 712) )
                {
                  v77 = *(_QWORD *)(v58 + 216);
                  v78 = *(_QWORD **)(v58 + 224);
                  if ( *(_QWORD *)(v77 + 8) != v58 + 216 || *v78 != v58 + 216 )
                    goto LABEL_208;
                  *v78 = v77;
                  *(_QWORD *)(v77 + 8) = v78;
                  *(_QWORD *)(v58 + 712) = 0LL;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v71 + 31760), 0LL);
                v79 = KeGetCurrentPrcb();
                v80 = v79->SchedulerAssist;
                if ( v80 )
                {
                  if ( v79->NestingLevel <= 1u )
                  {
                    v81 = v80[6] - 1;
                    v80[6] = v81;
                    if ( !v81 )
                      KiRemoveSystemWorkPriorityKick(v79);
                  }
                }
              }
              v82 = *(_BYTE *)(v58 + 388);
              if ( v82 == 1 )
                *(_DWORD *)(v58 + 116) |= 2u;
              if ( v82 == 5 )
              {
                v83 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v58 + 436));
                if ( *(_BYTE *)(v58 + 391) )
                  *(_QWORD *)(v58 + 1000) += v83;
                else
                  *(_QWORD *)(v58 + 992) += v83;
              }
              *(_BYTE *)(v58 + 388) = 7;
              v52 = (int)v131;
              *(_QWORD *)(v58 + 216) = v131->DeferredReadyListHead.Next;
              v131->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v58 + 216);
              *(_QWORD *)(v58 + 200) = v57;
              *(_QWORD *)(v58 + 976) = 0LL;
              v59 = 1;
            }
            else
            {
              if ( (*(_BYTE *)(v58 + 112) & 7) == 0 )
              {
                *(_BYTE *)(v58 + 112) = v65 & 0xF8 | 2;
                *(_QWORD *)(v58 + 200) = v57;
                *(_QWORD *)(v58 + 976) = 0LL;
                v59 = 1;
                *((_BYTE *)v53 + 17) = 0;
                goto LABEL_113;
              }
              if ( v66 == 5 )
              {
                *(_BYTE *)(v58 + 112) = v65 & 0xF8 | 6;
                goto LABEL_113;
              }
              v52 = (int)v131;
              if ( v66 == 3 )
                *((_BYTE *)v53 + 17) = 2;
            }
          }
          else
          {
LABEL_113:
            v52 = (int)v131;
          }
          *(_QWORD *)(v58 + 64) = 0LL;
          v67 = KeGetCurrentPrcb();
          v68 = v67->SchedulerAssist;
          if ( v68 )
          {
            if ( v67->NestingLevel <= 1u )
            {
              v69 = v68[6] - 1;
              v68[6] = v69;
              if ( !v69 )
                KiRemoveSystemWorkPriorityKick(v67);
            }
          }
          ++*((_BYTE *)v53 + 17);
          if ( v59 )
          {
            v25 = (*(_DWORD *)(v45 + 4))-- == 1;
            if ( v25 )
              goto LABEL_91;
          }
        }
        else if ( v56 == 2 )
        {
          *((_BYTE *)v53 + 17) = 5;
          v84 = v53[3];
          *v53 = 0LL;
          v85 = (_QWORD *)(v84 + 8);
          v86 = 0;
          v87 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v87 <= 0xFu )
          {
            v88 = KeGetCurrentPrcb()->SchedulerAssist;
            v88[5] |= (-1 << (v87 + 1)) & 4;
          }
          v89 = KeGetCurrentPrcb();
          v90 = v89->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v89->CurrentThread);
            EtwTraceEnqueueWork(v90, v53, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v84);
          if ( (_QWORD *)*v85 != v85
            && *(_DWORD *)(v84 + 40) < *(_DWORD *)(v84 + 44)
            && (v90->Queue != (_DISPATCHER_HEADER *volatile)v84 || v90->WaitReason != 15) )
          {
            v86 = KiWakeQueueWaiter(v89, v84, v53);
          }
          if ( !v86 )
          {
            v92 = *(_DWORD *)(v84 + 4);
            *(_DWORD *)(v84 + 4) = v92 + 1;
            v93 = *(_QWORD **)(v84 + 32);
            if ( *v93 != v84 + 24 )
              goto LABEL_208;
            *v53 = v84 + 24;
            v53[1] = v93;
            *v93 = v53;
            *(_QWORD *)(v84 + 32) = v53;
            if ( !v92 && (_QWORD *)*v85 != v85 )
              KiWakeOtherQueueWaiters(v89, v84);
          }
          _InterlockedAnd((volatile signed __int32 *)v84, 0xFFFFFF7F);
          v25 = (*(_DWORD *)(v45 + 4))-- == 1;
          v52 = (int)v131;
          if ( v25 )
            goto LABEL_91;
        }
        else
        {
          KiTryUnwaitThread(v48, v53, 256LL, 0LL);
          v52 = (int)v131;
        }
        v51 = v155;
        if ( v155 == (_QWORD *)(v45 + 8) )
          goto LABEL_91;
        v48 = v131;
        continue;
      }
    }
LABEL_189:
    v95 = v134;
    LOBYTE(Timeout) = 1;
    LOBYTE(HandleInformation) = v130;
    v11 = IoRemoveIoCompletion(
            *(_QWORD *)(v134[2] + 8LL),
            v149,
            BugCheckParameter2,
            v5,
            &v135,
            HandleInformation,
            0LL,
            Timeout);
    if ( (Flags[1] & 1) != 0 )
    {
      AlpciDestroyDeferredMessageContext(&v143);
      Flags[1] &= ~1u;
    }
    v96 = (unsigned __int64 *)v95[2];
    LockHandle.LockQueue.Lock = v96;
    LockHandle.LockQueue.Next = 0LL;
    v97 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v97 <= 0xFu )
    {
      v98 = KeGetCurrentPrcb()->SchedulerAssist;
      v98[5] |= (-1 << (v97 + 1)) & 4;
    }
    LockHandle.OldIrql = v97;
    v99 = KeGetCurrentPrcb();
    v100 = v99->SchedulerAssist;
    if ( v100 )
    {
      if ( v99->NestingLevel <= 1u )
      {
        v101 = v100[6];
        v100[6] = v101 + 1;
        if ( v101 == -1 )
          KiRemoveSystemWorkPriorityKick(v99);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v96);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)v96, (__int64)&LockHandle) )
    {
      KxWaitForLockOwnerShip(&LockHandle);
    }
    v26 = (ULONG *)Object;
    if ( v11 != 258 )
      goto LABEL_210;
    v102 = ExpWorkerFactoryWantsToCreate((__int64)Object, 1);
    v27 = (ULONG *)v138;
    if ( !v102
      && *v28 > v26[70]
      && *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber == (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber )
    {
      goto LABEL_210;
    }
    v18 = v134;
  }
  v11 = 258;
LABEL_210:
  --*(_DWORD *)(v134[2] + 28LL);
  if ( v11 == 258 )
  {
    --*v28;
    --v26[73];
    ExpRemoveCurrentThreadFromThreadHistory((__int64)v26);
    v103 = v140;
  }
  else
  {
    v103 = v140;
    if ( (*v140 & 7) != 4 )
    {
      v104 = KeGetCurrentThread();
      v105 = 0;
      v26 = (ULONG *)Object;
      v106 = (char *)Object + 72;
      v107 = (struct _KTHREAD **)((char *)Object + 72);
      while ( *v107 != v104 )
      {
        ++v105;
        ++v107;
        if ( v105 >= 4 )
        {
          ObfReferenceObjectWithTag(v104, 0x746C6644u);
          v108 = 0LL;
          while ( *v106 )
          {
            v108 = (unsigned int)(v108 + 1);
            ++v106;
            if ( (unsigned int)v108 >= 4 )
            {
              v109 = *v103 & 7;
              v110 = (PVOID *)&v26[2 * v109];
              ObfDereferenceObjectWithTag(v110[9], 0x746C6644u);
              v110[9] = v104;
              v111 = ((_BYTE)v109 + 1) & 3;
              v103 = v140;
              *v140 = *v140 & 0xFFFFFFF8 | v111;
              goto LABEL_221;
            }
          }
          *(_QWORD *)&v26[2 * v108 + 18] = v104;
          break;
        }
      }
    }
  }
LABEL_221:
  v112 = v134[2];
  if ( *v136 >= LODWORD(v138->KeyContext) || *(_DWORD *)(v112 + 28) )
  {
LABEL_227:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_234;
    }
    _m_prefetchw(&LockHandle);
    v114 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_234;
      v114 = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v114 + 8), 1uLL);
LABEL_234:
    v115 = KeGetCurrentPrcb();
    v116 = v115->SchedulerAssist;
    if ( v116 )
    {
      if ( v115->NestingLevel <= 1u )
      {
        v117 = v116[6] - 1;
        v116[6] = v117;
        if ( !v117 )
          KiRemoveSystemWorkPriorityKick(v115);
      }
    }
    v118 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v119 = KeGetCurrentIrql();
        if ( v119 <= 0xFu && LockHandle.OldIrql <= 0xFu && v119 >= 2u )
        {
          v120 = KeGetCurrentPrcb();
          v121 = v120->SchedulerAssist;
          v122 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v25 = (v122 & v121[5]) == 0;
          v121[5] &= v122;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v120);
        }
      }
    }
    __writecr8(v118);
    goto LABEL_246;
  }
  if ( v26[77] )
  {
    v113 = *v103 | 0x200;
    *v103 = v113;
    if ( !*(_DWORD *)(*(_QWORD *)(v112 + 8) + 4LL) )
    {
      if ( (v113 & 0x400) == 0 )
      {
        *v103 = v113 | 0x400;
        ObfReferenceObjectWithTag(v26, 0x746C6644u);
        KeRegisterObjectNotification(
          *(_QWORD *)(v112 + 8),
          (__int64)&ExpWorkerFactoryManagerQueue,
          (__int64)(v26 + 130));
      }
      goto LABEL_227;
    }
  }
  ExpWorkerFactoryCheckCreate(v26, &LockHandle);
LABEL_246:
  if ( !v11 )
    *v141 = v135;
LABEL_249:
  if ( (_OWORD *)BugCheckParameter2 != v158 )
    ExFreeHeapPool(BugCheckParameter2);
  if ( v150 )
    ObfDereferenceObjectWithTag(v150, 0x746C6644u);
  if ( (Flags[1] & 1) != 0 )
    NtAlpcSendWaitReceivePort(Handle[1], Flags[0], (PPORT_MESSAGE)Handle[0], 0LL, 0LL, 0LL, 0LL, 0LL);
  return v11;
}
