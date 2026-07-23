/*
 * XREFs of NtWaitForWorkViaWorkerFactory @ 0x140268DF0
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140245EC0 (ExpWorkerFactoryCheckCreate.c)
 *     KiWakeOtherQueueWaiters @ 0x1402462E0 (KiWakeOtherQueueWaiters.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14024C350 (KiTryUnwaitThread.c)
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IoRemoveIoCompletion @ 0x140268050 (IoRemoveIoCompletion.c)
 *     KeRegisterObjectNotification @ 0x1402C048C (KeRegisterObjectNotification.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402E2740 (ExpLeaveWorkerFactoryAwayMode.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x14030ED20 (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     ExpWorkerFactoryWantsToCreate @ 0x140310BD0 (ExpWorkerFactoryWantsToCreate.c)
 *     KeReleaseSemaphoreEx @ 0x140330D70 (KeReleaseSemaphoreEx.c)
 *     AlpcpQueueIoCompletionPort @ 0x140334A14 (AlpcpQueueIoCompletionPort.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KeIsThreadRunning @ 0x14050D594 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A1C00 (EtwTraceEnqueueWork.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     NtAlpcSendWaitReceivePort @ 0x14060A800 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpSendMessage @ 0x14060D070 (AlpcpSendMessage.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     AlpciDestroyDeferredMessageContext @ 0x14062D5D0 (AlpciDestroyDeferredMessageContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     ExSystemExceptionFilter @ 0x1407BEDE0 (ExSystemExceptionFilter.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl NtWaitForWorkViaWorkerFactory(
        HANDLE WorkerFactoryHandle,
        PFILE_IO_COMPLETION_INFORMATION MiniPackets,
        ULONG Count,
        PULONG PacketsReturned,
        PWORKER_FACTORY_DEFERRED_WORK DeferredWork)
{
  ULONG v6; // r12d
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v9; // rcx
  NTSTATUS v10; // esi
  PVOID v11; // r13
  unsigned __int64 *v12; // rbx
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // r15
  _DWORD *v19; // rbx
  _DWORD *v20; // rcx
  __int64 v21; // rax
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  unsigned __int64 v24; // rbx
  unsigned __int64 *v25; // rbx
  unsigned __int8 v26; // r10
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  PULONG v29; // rdi
  struct _KTHREAD *v30; // r12
  unsigned int v31; // ecx
  _QWORD *v32; // rbx
  struct _KTHREAD **v33; // rax
  __int64 v34; // rax
  unsigned int v35; // edi
  PVOID *v36; // rbx
  int v37; // ecx
  __int64 v38; // rbx
  __int64 Next; // rax
  struct _KPRCB *v40; // rcx
  _DWORD *v41; // rdx
  unsigned __int64 v42; // rbx
  ULONG v44; // esi
  HANDLE v45; // rbx
  struct _KTHREAD *v46; // rax
  unsigned int v47; // esi
  signed __int32 v48; // ebx
  struct _DMA_ADAPTER *v49; // r15
  __int64 v50; // r8
  _DWORD *v51; // r9
  PADAPTER_OBJECT v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // rdx
  int DmaOperations_high; // eax
  int v56; // ecx
  struct _DMA_ADAPTER *i; // r15
  __int64 v58; // rsi
  struct _DMA_ADAPTER *v59; // rax
  struct _DMA_ADAPTER **v60; // rcx
  char v61; // al
  bool v62; // zf
  struct _KTHREAD *v63; // rcx
  char v64; // al
  _DWORD *SchedulerAssist; // r9
  int v66; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v68; // al
  struct _KPRCB *v69; // r9
  _DWORD *v70; // r8
  int v71; // eax
  int v72; // eax
  unsigned __int8 v73; // al
  struct _KPRCB *v74; // r10
  _DWORD *v75; // r9
  int v76; // eax
  struct _KEVENT *DmaOperations; // rcx
  ULONG_PTR v78; // r15
  struct _KTHREAD *v79; // rbx
  unsigned int SessionId; // r8d
  struct _KPRCB *v81; // rdx
  unsigned int v82; // r9d
  __int64 v83; // rcx
  struct _KPRCB *v84; // rcx
  __int64 v85; // rdx
  unsigned __int8 v86; // al
  __int64 v87; // rcx
  volatile signed __int32 *v88; // rax
  unsigned __int8 v89; // cl
  _DWORD *v90; // r9
  __int64 v91; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v93; // r9
  _QWORD *p_KeyContext; // r9
  volatile signed __int32 *v95; // rcx
  char v96; // al
  __int64 *v97; // rdx
  _DWORD *v98; // r9
  int v99; // eax
  unsigned __int8 v100; // bl
  unsigned __int8 v101; // al
  struct _KPRCB *v102; // r9
  _DWORD *v103; // r8
  int v104; // eax
  int v105; // eax
  unsigned __int8 v106; // al
  struct _KPRCB *v107; // r9
  _DWORD *v108; // r8
  int v109; // eax
  unsigned __int8 v110; // [rsp+40h] [rbp-1E8h]
  unsigned __int8 v111; // [rsp+41h] [rbp-1E7h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-1E0h] BYREF
  int v113; // [rsp+60h] [rbp-1C8h] BYREF
  ULONG v114; // [rsp+64h] [rbp-1C4h] BYREF
  volatile signed __int32 *v115; // [rsp+68h] [rbp-1C0h]
  PVOID Object; // [rsp+70h] [rbp-1B8h] BYREF
  struct _KPRCB *v117; // [rsp+78h] [rbp-1B0h]
  PFILE_IO_COMPLETION_INFORMATION v118; // [rsp+80h] [rbp-1A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-1A0h]
  int v120; // [rsp+90h] [rbp-198h]
  PVOID v121; // [rsp+98h] [rbp-190h] BYREF
  __int64 v122; // [rsp+A0h] [rbp-188h]
  PULONG v123; // [rsp+A8h] [rbp-180h]
  _DWORD *v124; // [rsp+B0h] [rbp-178h]
  _DWORD *v125; // [rsp+B8h] [rbp-170h]
  ULONG_PTR PoolWithTag; // [rsp+C0h] [rbp-168h]
  __int128 v127; // [rsp+C8h] [rbp-160h] BYREF
  HANDLE Handle[2]; // [rsp+D8h] [rbp-150h]
  ULONG Flags[2]; // [rsp+E8h] [rbp-140h]
  int v130; // [rsp+F0h] [rbp-138h] BYREF
  volatile void *Address; // [rsp+F8h] [rbp-130h]
  PULONG v132; // [rsp+100h] [rbp-128h]
  PVOID v133; // [rsp+108h] [rbp-120h]
  PADAPTER_OBJECT DmaAdapter[8]; // [rsp+110h] [rbp-118h] BYREF
  __int64 v135; // [rsp+150h] [rbp-D8h]
  struct _KTHREAD *CurrentThread; // [rsp+158h] [rbp-D0h]
  _BYTE v137[128]; // [rsp+160h] [rbp-C8h] BYREF
  _UNKNOWN *retaddr; // [rsp+228h] [rbp+0h]

  v132 = PacketsReturned;
  v6 = Count;
  Address = MiniPackets;
  BugCheckParameter2 = (ULONG_PTR)WorkerFactoryHandle;
  v118 = MiniPackets;
  LODWORD(v115) = Count;
  v123 = PacketsReturned;
  v127 = 0LL;
  *(_OWORD *)Handle = 0LL;
  *(_QWORD *)Flags = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v137, 0, sizeof(v137));
  v114 = 0;
  v133 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v111 = PreviousMode;
  PoolWithTag = (ULONG_PTR)v137;
  if ( v6 - 1 > 0x7FFFFFE )
  {
    v10 = -1073741811;
    goto LABEL_58;
  }
  if ( PreviousMode )
  {
    ProbeForWrite(Address, 32LL * v6, 8u);
    v9 = (__int64)PacketsReturned;
    if ( (unsigned __int64)PacketsReturned >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v9 = *(_DWORD *)v9;
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
  v10 = ObReferenceObjectByHandle(WorkerFactoryHandle, 2u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  v11 = Object;
  v133 = Object;
  if ( v10 >= 0 )
  {
    if ( v6 > 0x10 )
    {
      PoolWithTag = (ULONG_PTR)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v6, 0x656E6F4Eu);
      if ( !PoolWithTag )
      {
        v6 = 16;
        PoolWithTag = (ULONG_PTR)v137;
      }
    }
    v12 = (unsigned __int64 *)*((_QWORD *)v11 + 2);
    LockHandle.LockQueue.Lock = v12;
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    LockHandle.OldIrql = CurrentIrql;
    CurrentPrcb = KeGetCurrentPrcb();
    v15 = CurrentPrcb->SchedulerAssist;
    if ( v15 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v66 = v15[6];
        v15[6] = v66 + 1;
        if ( v66 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v12);
    }
    else
    {
      v16 = _InterlockedExchange64((volatile __int64 *)v12, (__int64)&LockHandle);
      if ( v16 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, (_QWORD *)v16);
    }
    v17 = *((_QWORD *)v11 + 2);
    if ( *(_BYTE *)(v17 + 33) )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v68 = KeGetCurrentIrql();
          if ( v68 <= 0xFu && LockHandle.OldIrql <= 0xFu && v68 >= 2u )
          {
            v69 = KeGetCurrentPrcb();
            v70 = v69->SchedulerAssist;
            v71 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v62 = (v71 & v70[5]) == 0;
            v70[5] &= v71;
            if ( v62 )
              KiRemoveSystemWorkPriorityKick(v69);
          }
        }
      }
      __writecr8(OldIrql);
      v10 = 128;
      goto LABEL_58;
    }
    v18 = Object;
    v123 = (PULONG)((char *)Object + 312);
    if ( (*((_DWORD *)Object + 78) & 0x200) != 0 )
    {
      ExpLeaveWorkerFactoryAwayMode(Object);
      v17 = *((_QWORD *)v11 + 2);
    }
    ++*(_DWORD *)(v17 + 28);
    v19 = v18 + 71;
    v124 = v18 + 71;
    v20 = v18 + 72;
    v125 = v18 + 72;
    while ( 1 )
    {
      if ( *v19 < *v20 || *(_BYTE *)(*((_QWORD *)v11 + 2) + 33LL) )
      {
        v10 = 258;
LABEL_39:
        --*(_DWORD *)(*((_QWORD *)v11 + 2) + 28LL);
        if ( v10 == 258 )
        {
          --*v20;
          --v18[73];
          ExpRemoveCurrentThreadFromThreadHistory(v18);
          v29 = v123;
        }
        else
        {
          v29 = v123;
          if ( (*v123 & 7) != 4 )
          {
            v30 = KeGetCurrentThread();
            v31 = 0;
            v18 = Object;
            v32 = (char *)Object + 72;
            v33 = (struct _KTHREAD **)((char *)Object + 72);
            while ( *v33 != v30 )
            {
              ++v31;
              ++v33;
              if ( v31 >= 4 )
              {
                ObfReferenceObjectWithTag(v30, 0x746C6644u);
                v34 = 0LL;
                while ( *v32 )
                {
                  v34 = (unsigned int)(v34 + 1);
                  ++v32;
                  if ( (unsigned int)v34 >= 4 )
                  {
                    v35 = *v29 & 7;
                    v36 = (PVOID *)&v18[2 * v35];
                    ObfDereferenceObjectWithTag(v36[9], 0x746C6644u);
                    v36[9] = v30;
                    v37 = ((_BYTE)v35 + 1) & 3;
                    v29 = v123;
                    *v123 = *v123 & 0xFFFFFFF8 | v37;
                    goto LABEL_48;
                  }
                }
                *(_QWORD *)&v18[2 * v34 + 18] = v30;
                break;
              }
            }
          }
        }
LABEL_48:
        v38 = *((_QWORD *)v11 + 2);
        if ( *v125 >= *v124 || *(_DWORD *)(v38 + 28) )
        {
LABEL_50:
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
            goto LABEL_53;
          }
          _m_prefetchw(&LockHandle);
          Next = (__int64)LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
            {
LABEL_53:
              v40 = KeGetCurrentPrcb();
              v41 = v40->SchedulerAssist;
              if ( v41 )
              {
                if ( v40->NestingLevel <= 1u )
                {
                  v105 = v41[6] - 1;
                  v41[6] = v105;
                  if ( !v105 )
                    KiRemoveSystemWorkPriorityKick(v40);
                }
              }
              v42 = LockHandle.OldIrql;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v106 = KeGetCurrentIrql();
                  if ( v106 <= 0xFu && LockHandle.OldIrql <= 0xFu && v106 >= 2u )
                  {
                    v107 = KeGetCurrentPrcb();
                    v108 = v107->SchedulerAssist;
                    v109 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                    v62 = (v109 & v108[5]) == 0;
                    v108[5] &= v109;
                    if ( v62 )
                      KiRemoveSystemWorkPriorityKick(v107);
                  }
                }
              }
              __writecr8(v42);
              goto LABEL_56;
            }
            Next = KxWaitForLockChainValid(&LockHandle, v16);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
          goto LABEL_53;
        }
        if ( v18[77] )
        {
          LODWORD(v16) = *v29 | 0x200;
          *v29 = v16;
          if ( !*(_DWORD *)(*(_QWORD *)(v38 + 8) + 4LL) )
          {
            if ( (v16 & 0x400) == 0 )
            {
              *v29 = v16 | 0x400;
              ObfReferenceObjectWithTag(v18, 0x746C6644u);
              KeRegisterObjectNotification(*(_QWORD *)(v38 + 8), &ExpWorkerFactoryManagerQueue, v18 + 130);
            }
            goto LABEL_50;
          }
        }
        ExpWorkerFactoryCheckCreate((PSLIST_ENTRY)v18, &LockHandle, 0);
LABEL_56:
        if ( !v10 )
          *v132 = v114;
        goto LABEL_58;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        goto LABEL_27;
      }
      _m_prefetchw(&LockHandle);
      v21 = (__int64)LockHandle.LockQueue.Next;
      if ( LockHandle.LockQueue.Next )
        goto LABEL_105;
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) != &LockHandle )
        break;
LABEL_27:
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      if ( v23 )
      {
        if ( v22->NestingLevel <= 1u )
        {
          v72 = v23[6] - 1;
          v23[6] = v72;
          if ( !v72 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
      v24 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v73 = KeGetCurrentIrql();
          if ( v73 <= 0xFu && LockHandle.OldIrql <= 0xFu && v73 >= 2u )
          {
            v74 = KeGetCurrentPrcb();
            v75 = v74->SchedulerAssist;
            v76 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v62 = (v76 & v75[5]) == 0;
            v75[5] &= v76;
            if ( v62 )
              KiRemoveSystemWorkPriorityKick(v74);
          }
        }
      }
      __writecr8(v24);
      if ( (Flags[1] & 1) != 0 )
      {
        v118 = (PFILE_IO_COMPLETION_INFORMATION)Handle[0];
        v44 = Flags[0];
        v45 = Handle[1];
        memset(DmaAdapter, 0, sizeof(DmaAdapter));
        v46 = KeGetCurrentThread();
        --v46->KernelApcDisable;
        v127 = 0LL;
        v47 = v44 & 0xFFFF0000;
        v121 = 0LL;
        if ( ObReferenceObjectByHandle(v45, 1u, AlpcPortObjectType, v111, &v121, 0LL) >= 0 )
        {
          if ( (v47 & 0x40000) != 0 )
          {
            v48 = _InterlockedIncrement((volatile signed __int32 *)v121 + 101);
            v49 = (struct _DMA_ADAPTER *)v121;
            if ( !*((_QWORD *)v121 + 51) )
            {
LABEL_68:
              DmaAdapter[0] = v49;
              LODWORD(DmaAdapter[6]) = v47 | 4;
              memset(&DmaAdapter[3], 0, 24);
              if ( (int)AlpcpSendMessage(DmaAdapter, v118, 0LL, v111) < 0 )
              {
                HalPutDmaAdapter(DmaAdapter[0]);
              }
              else
              {
                *(PADAPTER_OBJECT *)&v127 = DmaAdapter[4];
                *((PADAPTER_OBJECT *)&v127 + 1) = DmaAdapter[0];
                if ( DmaAdapter[4] )
                {
                  if ( BYTE2(DmaAdapter[7]) )
                    AlpcpQueueIoCompletionPort(DmaAdapter[4], BYTE3(DmaAdapter[7]), 1LL);
                  else
                    KeReleaseSemaphoreEx(DmaAdapter[4][15].DmaOperations, 1, 1, (_DWORD)v51, 1);
                }
                else
                {
                  v52 = DmaAdapter[3];
                  if ( DmaAdapter[3] )
                  {
                    v53 = KeGetCurrentIrql();
                    v122 = v53;
                    v54 = 2LL;
                    __writecr8(2uLL);
                    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v53 <= 0xFu )
                    {
                      v51 = KeGetCurrentPrcb()->SchedulerAssist;
                      v50 = (unsigned int)(-1LL << ((unsigned __int8)v53 + 1)) & 4 | v51[5];
                      v51[5] = v50;
                      v54 = 2LL;
                    }
                    v117 = KeGetCurrentPrcb();
                    v130 = 0;
                    if ( _interlockedbittestandset((volatile signed __int32 *)&v52[72].DmaOperations, 7u) )
                    {
                      do
                      {
                        do
                          KeYieldProcessorEx(&v130, v54, v50, (__int64)v51);
                        while ( (LODWORD(v52[72].DmaOperations) & 0x80u) != 0 );
                      }
                      while ( _interlockedbittestandset((volatile signed __int32 *)&v52[72].DmaOperations, 7u) );
                      v54 = 2LL;
                    }
                    DmaOperations_high = HIDWORD(v52[72].DmaOperations);
                    v56 = DmaOperations_high + 1;
                    if ( DmaOperations_high + 1 > *(_DWORD *)&v52[74].Version || v56 < DmaOperations_high )
                    {
                      _InterlockedAnd((volatile signed __int32 *)&v52[72].DmaOperations, 0xFFFFFF7F);
                      v100 = v122;
                      if ( KiIrqlFlags )
                      {
                        if ( (KiIrqlFlags & 1) != 0 )
                        {
                          v101 = KeGetCurrentIrql();
                          if ( v101 <= 0xFu && (unsigned __int8)v122 <= 0xFu && v101 >= 2u )
                          {
                            v102 = KeGetCurrentPrcb();
                            v103 = v102->SchedulerAssist;
                            v104 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v122 + 1));
                            v62 = (v104 & v103[5]) == 0;
                            v103[5] &= v104;
                            if ( v62 )
                              KiRemoveSystemWorkPriorityKick(v102);
                          }
                        }
                      }
                      __writecr8(v100);
                      RtlRaiseStatus(-1073741753);
                    }
                    HIDWORD(v52[72].DmaOperations) = v56;
                    if ( !DmaOperations_high )
                    {
                      for ( i = *(struct _DMA_ADAPTER **)&v52[73].Version; i != &v52[73]; v54 = 2LL )
                      {
                        v58 = (__int64)i;
                        v59 = *(struct _DMA_ADAPTER **)&i->Version;
                        i = v59;
                        v60 = *(struct _DMA_ADAPTER ***)(v58 + 8);
                        if ( v59->DmaOperations != (_DMA_OPERATIONS *)v58 || *v60 != (struct _DMA_ADAPTER *)v58 )
LABEL_78:
                          __fastfail(3u);
                        *v60 = v59;
                        v59->DmaOperations = (_DMA_OPERATIONS *)v60;
                        v61 = *(_BYTE *)(v58 + 16);
                        if ( v61 == 1 )
                        {
                          if ( (unsigned __int8)KiTryUnwaitThread(
                                                  (__int64)v117,
                                                  v58,
                                                  *(unsigned __int16 *)(v58 + 18),
                                                  0LL) )
                          {
                            v62 = HIDWORD(v52[72].DmaOperations)-- == 1;
                            if ( v62 )
                              break;
                          }
                        }
                        else if ( v61 == 2 )
                        {
                          *(_BYTE *)(v58 + 17) = 5;
                          v115 = *(volatile signed __int32 **)(v58 + 24);
                          v88 = v115;
                          *(_QWORD *)v58 = 0LL;
                          v118 = (PFILE_IO_COMPLETION_INFORMATION)(v88 + 2);
                          v89 = KeGetCurrentIrql();
                          __writecr8(2uLL);
                          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v89 <= 0xFu )
                          {
                            v90 = KeGetCurrentPrcb()->SchedulerAssist;
                            v54 = (-1LL << (v89 + 1)) & 4;
                            v50 = (unsigned int)v54 | v90[5];
                            v90[5] = v50;
                          }
                          BugCheckParameter2 = (ULONG_PTR)KeGetCurrentPrcb();
                          v91 = *(_QWORD *)(BugCheckParameter2 + 8);
                          v135 = v91;
                          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                          {
                            IsThreadRunning = KeIsThreadRunning(v91, v54);
                            EtwTraceEnqueueWork(v93, v58, IsThreadRunning);
                          }
                          KiAcquireKobjectLockSafe(v115, v54, v50, v91);
                          p_KeyContext = &v118->KeyContext;
                          v95 = v115;
                          if ( (_QWORD *)*p_KeyContext == p_KeyContext
                            || *((_DWORD *)v115 + 10) >= *((_DWORD *)v115 + 11)
                            || *(volatile signed __int32 **)(v135 + 232) == v115 && *(_BYTE *)(v135 + 643) == 15 )
                          {
                            v96 = 0;
                          }
                          else
                          {
                            v96 = KiWakeQueueWaiter(BugCheckParameter2, (__int64)v115, v58);
                            v95 = v115;
                            p_KeyContext = &v118->KeyContext;
                          }
                          if ( !v96 )
                          {
                            v50 = *((unsigned int *)v95 + 1);
                            *((_DWORD *)v95 + 1) = v50 + 1;
                            v97 = (__int64 *)*((_QWORD *)v95 + 4);
                            if ( (volatile signed __int32 *)*v97 != v95 + 6 )
                              goto LABEL_78;
                            *(_QWORD *)v58 = v95 + 6;
                            *(_QWORD *)(v58 + 8) = v97;
                            *v97 = v58;
                            *((_QWORD *)v95 + 4) = v58;
                            if ( !(_DWORD)v50 && (_QWORD *)*p_KeyContext != p_KeyContext )
                            {
                              KiWakeOtherQueueWaiters(BugCheckParameter2, (__int64)v95, v50, (__int64)p_KeyContext);
                              v95 = v115;
                            }
                          }
                          _InterlockedAnd(v95, 0xFFFFFF7F);
                          v62 = HIDWORD(v52[72].DmaOperations)-- == 1;
                          if ( v62 )
                            break;
                        }
                        else
                        {
                          KiTryUnwaitThread((__int64)v117, v58, 256LL, 0LL);
                        }
                      }
                    }
                    _InterlockedAnd((volatile signed __int32 *)&v52[72].DmaOperations, 0xFFFFFF7F);
                    KiExitDispatcher((__int64)v117, 1LL, 1LL, 1LL, v122);
                  }
                  else if ( ((__int64)DmaAdapter[5] & 1) != 0 )
                  {
                    if ( ((unsigned __int64)DmaAdapter[5] & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
                    {
                      KeSetEvent((PRKEVENT)((unsigned __int64)DmaAdapter[5] & 0xFFFFFFFFFFFFFFFCuLL), 0, 1u);
                      if ( ((__int64)DmaAdapter[5] & 2) != 0 )
                        HalPutDmaAdapter((PADAPTER_OBJECT)((unsigned __int64)DmaAdapter[5] & 0xFFFFFFFFFFFFFFFCuLL));
                    }
                    DmaAdapter[5] = 0LL;
                  }
                }
              }
              goto LABEL_84;
            }
            BugCheckParameter2 = (ULONG_PTR)v121 + 352;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)v121 + 352, 0LL);
            DmaOperations = (struct _KEVENT *)v49[25].DmaOperations;
            if ( DmaOperations && v48 == DmaOperations[1].Header.LockNV )
              KeSetEvent(DmaOperations, 0, 0);
            v78 = BugCheckParameter2;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v78);
            v113 = 0;
            v79 = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(v78) == 1 )
              SessionId = MmGetSessionIdEx((__int64)v79->ApcState.Process);
            else
              SessionId = -1;
            --v79->SpecialApcDisable;
            v110 = ++v79->AbAllocationRegionCount;
            v81 = 0LL;
            v117 = 0LL;
            v82 = ((char)v79->AbEntrySummary | (char)v79->AbOrphanedEntrySummary) ^ 0x3F;
            v62 = !_BitScanReverse((unsigned int *)&v83, v82);
            v120 = v83;
            if ( !v62 )
            {
              while ( 1 )
              {
                v82 &= ~(1 << v83);
                v84 = (struct _KPRCB *)&v79->LockEntries[v83];
                if ( (BYTE2(v84->IdleThread) & 1) != 0
                  && (*(_DWORD *)&v84->NestingLevel & 1) == 0
                  && (*(_QWORD *)&v84->NestingLevel & 0x7FFFFFFFFFFFFFFCLL) == (v78 & 0x7FFFFFFFFFFFFFFCLL)
                  && LODWORD(v84->RspBase) == SessionId )
                {
                  BYTE2(v84->IdleThread) &= ~1u;
                  if ( *(_QWORD *)&v84->NestingLevel )
                    break;
                }
                v62 = !_BitScanReverse((unsigned int *)&v83, v82);
                v120 = v83;
                if ( v62 )
                  goto LABEL_156;
              }
              v81 = v84;
              v117 = v84;
            }
LABEL_156:
            if ( v81 )
            {
              v81->NestingLevel |= 2u;
              if ( *(__int64 *)&v81->NestingLevel < 0 )
              {
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v81);
                v81 = v117;
              }
              v113 = 0;
              v113 = v81->HalReserved[2] & 0x1FFFF;
              LODWORD(v81->HalReserved[2]) &= 0xFFFE0000;
              BYTE1(v81->IdleThread) &= ~1u;
              *(_QWORD *)&v81->NestingLevel = 0LL;
              v85 = (__int64)((unsigned __int128)(((char *)v81 - (char *)v79->LockEntries)
                                                * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
              v86 = 1 << (v85 + (v85 < 0));
              if ( v110 == 1 )
                v79->AbEntrySummary |= v86;
              else
                _InterlockedOr8((volatile signed __int8 *)&v79->AbOrphanedEntrySummary, v86);
            }
            else if ( (*((_DWORD *)&v79->0 + 1) & 0x10000) == 0 )
            {
              KeBugCheckEx(0x162u, (ULONG_PTR)v79, v78, SessionId, 0LL);
            }
            --v79->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts((ULONG_PTR)v79, v78, &v113);
            v62 = v79->SpecialApcDisable++ == -1;
            if ( v62 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v79->ApcState.ApcListHead[0].Flink != &v79->152 )
              KiCheckForKernelApcDelivery(v87);
          }
          v49 = (struct _DMA_ADAPTER *)v121;
          goto LABEL_68;
        }
LABEL_84:
        v63 = KeGetCurrentThread();
        v62 = v63->KernelApcDisable++ == -1;
        if ( v62
          && ($C774EFD68449142D8271B1EC1EB7FB26 *)v63->ApcState.ApcListHead[0].Flink != &v63->152
          && !v63->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery(v63);
        }
      }
      v10 = IoRemoveIoCompletion(
              *(struct _KQUEUE **)(*((_QWORD *)v11 + 2) + 8LL),
              (__int64)Address,
              (PLIST_ENTRY *)PoolWithTag,
              v6,
              &v114,
              v111,
              0LL,
              1u);
      if ( (Flags[1] & 1) != 0 )
      {
        AlpciDestroyDeferredMessageContext(&v127);
        Flags[1] &= ~1u;
      }
      v25 = (unsigned __int64 *)*((_QWORD *)v11 + 2);
      LockHandle.LockQueue.Lock = v25;
      LockHandle.LockQueue.Next = 0LL;
      v26 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v26 <= 0xFu )
      {
        v98 = KeGetCurrentPrcb()->SchedulerAssist;
        v98[5] |= (-1 << (v26 + 1)) & 4;
      }
      LockHandle.OldIrql = v26;
      v27 = KeGetCurrentPrcb();
      v28 = v27->SchedulerAssist;
      if ( v28 )
      {
        if ( v27->NestingLevel <= 1u )
        {
          v99 = v28[6];
          v28[6] = v99 + 1;
          if ( v99 == -1 )
            KiRemoveSystemWorkPriorityKick(v27);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v25);
      }
      else
      {
        v16 = _InterlockedExchange64((volatile __int64 *)v25, (__int64)&LockHandle);
        if ( v16 )
          KxWaitForLockOwnerShip((__int64)&LockHandle, (_QWORD *)v16);
      }
      v18 = Object;
      if ( v10 != 258 )
      {
        v20 = v125;
        goto LABEL_39;
      }
      v64 = ExpWorkerFactoryWantsToCreate(Object, 1LL);
      v20 = v125;
      v19 = v124;
      if ( !v64
        && *v125 > v18[70]
        && *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber == (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber )
      {
        goto LABEL_39;
      }
    }
    v21 = KxWaitForLockChainValid(&LockHandle, v16);
LABEL_105:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v21 + 8), 1uLL);
    goto LABEL_27;
  }
LABEL_58:
  if ( (_BYTE *)PoolWithTag != v137 )
    ExFreeHeapPool(PoolWithTag);
  if ( v133 )
    ObfDereferenceObjectWithTag(v133, 0x746C6644u);
  if ( (Flags[1] & 1) != 0 )
    NtAlpcSendWaitReceivePort(Handle[1], Flags[0], (PPORT_MESSAGE)Handle[0], 0LL, 0LL, 0LL, 0LL, 0LL);
  return v10;
}
