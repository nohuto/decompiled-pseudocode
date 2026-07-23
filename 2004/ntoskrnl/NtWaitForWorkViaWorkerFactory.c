/*
 * XREFs of NtWaitForWorkViaWorkerFactory @ 0x14020FDA0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IoRemoveIoCompletion @ 0x14020F000 (IoRemoveIoCompletion.c)
 *     KeRegisterObjectNotification @ 0x14026745C (KeRegisterObjectNotification.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140280080 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402826A0 (ExpWorkerFactoryCheckCreate.c)
 *     KiWakeOtherQueueWaiters @ 0x140282AC0 (KiWakeOtherQueueWaiters.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140288BF0 (KiTryUnwaitThread.c)
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402D59F0 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeReleaseSemaphoreEx @ 0x1402EBC30 (KeReleaseSemaphoreEx.c)
 *     AlpcpQueueIoCompletionPort @ 0x1402EF8D4 (AlpcpQueueIoCompletionPort.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x14034C3EC (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     ExpWorkerFactoryWantsToCreate @ 0x14034E260 (ExpWorkerFactoryWantsToCreate.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     KeIsThreadRunning @ 0x14050DBE4 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A22F0 (EtwTraceEnqueueWork.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     AlpciDestroyDeferredMessageContext @ 0x1405F8590 (AlpciDestroyDeferredMessageContext.c)
 *     NtAlpcSendWaitReceivePort @ 0x140682950 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpSendMessage @ 0x1406851E0 (AlpcpSendMessage.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     ExSystemExceptionFilter @ 0x1407C22E0 (ExSystemExceptionFilter.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
  __int64 v16; // rcx
  _DWORD *v17; // r15
  _DWORD *v18; // rbx
  _DWORD *v19; // rcx
  __int64 v20; // rax
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  unsigned __int64 v23; // rbx
  unsigned __int64 *v24; // rbx
  unsigned __int8 v25; // r10
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  _DWORD *v28; // rdi
  struct _KTHREAD *v29; // r12
  unsigned int v30; // ecx
  _QWORD *v31; // rbx
  struct _KTHREAD **v32; // rax
  __int64 v33; // rax
  unsigned int v34; // edi
  PVOID *v35; // rbx
  int v36; // ecx
  __int64 v37; // rbx
  __int64 Next; // rax
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  unsigned __int64 v41; // rbx
  ULONG v43; // esi
  HANDLE v44; // rbx
  struct _KTHREAD *v45; // rax
  unsigned int v46; // esi
  signed __int32 v47; // ebx
  struct _DMA_ADAPTER *v48; // r15
  int v49; // r9d
  PADAPTER_OBJECT v50; // rbx
  __int64 v51; // rcx
  __int64 v52; // rdx
  int DmaOperations_high; // eax
  int v54; // ecx
  struct _DMA_ADAPTER *i; // r15
  struct _DMA_ADAPTER *v56; // rsi
  struct _DMA_ADAPTER *v57; // rax
  _DMA_OPERATIONS *DmaOperations; // rcx
  char Version; // al
  bool v60; // zf
  struct _KTHREAD *v61; // rcx
  int v62; // edx
  char v63; // al
  _DWORD *SchedulerAssist; // r9
  int v65; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r9
  _DWORD *v69; // r8
  int v70; // eax
  int v71; // eax
  unsigned __int8 v72; // al
  struct _KPRCB *v73; // r10
  _DWORD *v74; // r9
  int v75; // eax
  struct _KEVENT *v76; // rcx
  ULONG_PTR v77; // r15
  struct _KTHREAD *v78; // rbx
  unsigned int SessionId; // r8d
  __int64 v80; // rdx
  unsigned int v81; // r9d
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rdx
  unsigned __int8 v85; // al
  _DWORD *v86; // r9
  _DMA_OPERATIONS *v87; // rax
  unsigned __int8 v88; // cl
  _DWORD *v89; // r9
  __int64 v90; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v92; // r9
  _QWORD *p_KeyContext; // r9
  _DMA_OPERATIONS *v94; // rcx
  char v95; // al
  int v96; // r8d
  struct _DMA_ADAPTER **AllocateAdapterChannel; // rdx
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
  _DMA_OPERATIONS *v115; // [rsp+68h] [rbp-1C0h]
  PVOID Object; // [rsp+70h] [rbp-1B8h] BYREF
  struct _KPRCB *v117; // [rsp+78h] [rbp-1B0h]
  PFILE_IO_COMPLETION_INFORMATION p_PutDmaAdapter; // [rsp+80h] [rbp-1A8h]
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
  p_PutDmaAdapter = MiniPackets;
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
        v65 = v15[6];
        v15[6] = v65 + 1;
        if ( v65 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v12);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)v12, (__int64)&LockHandle) )
    {
      KxWaitForLockOwnerShip(&LockHandle);
    }
    v16 = *((_QWORD *)v11 + 2);
    if ( *(_BYTE *)(v16 + 33) )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v67 = KeGetCurrentIrql();
          if ( v67 <= 0xFu && LockHandle.OldIrql <= 0xFu && v67 >= 2u )
          {
            v68 = KeGetCurrentPrcb();
            v69 = v68->SchedulerAssist;
            v70 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v60 = (v70 & v69[5]) == 0;
            v69[5] &= v70;
            if ( v60 )
              KiRemoveSystemWorkPriorityKick(v68);
          }
        }
      }
      __writecr8(OldIrql);
      v10 = 128;
      goto LABEL_58;
    }
    v17 = Object;
    v123 = (PULONG)((char *)Object + 312);
    if ( (*((_DWORD *)Object + 78) & 0x200) != 0 )
    {
      ExpLeaveWorkerFactoryAwayMode(Object);
      v16 = *((_QWORD *)v11 + 2);
    }
    ++*(_DWORD *)(v16 + 28);
    v18 = v17 + 71;
    v124 = v17 + 71;
    v19 = v17 + 72;
    v125 = v17 + 72;
    while ( 1 )
    {
      if ( *v18 < *v19 || *(_BYTE *)(*((_QWORD *)v11 + 2) + 33LL) )
      {
        v10 = 258;
LABEL_39:
        --*(_DWORD *)(*((_QWORD *)v11 + 2) + 28LL);
        if ( v10 == 258 )
        {
          --*v19;
          --v17[73];
          ExpRemoveCurrentThreadFromThreadHistory(v17);
          v28 = v123;
        }
        else
        {
          v28 = v123;
          if ( (*v123 & 7) != 4 )
          {
            v29 = KeGetCurrentThread();
            v30 = 0;
            v17 = Object;
            v31 = (char *)Object + 72;
            v32 = (struct _KTHREAD **)((char *)Object + 72);
            while ( *v32 != v29 )
            {
              ++v30;
              ++v32;
              if ( v30 >= 4 )
              {
                ObfReferenceObjectWithTag(v29, 0x746C6644u);
                v33 = 0LL;
                while ( *v31 )
                {
                  v33 = (unsigned int)(v33 + 1);
                  ++v31;
                  if ( (unsigned int)v33 >= 4 )
                  {
                    v34 = *v28 & 7;
                    v35 = (PVOID *)&v17[2 * v34];
                    ObfDereferenceObjectWithTag(v35[9], 0x746C6644u);
                    v35[9] = v29;
                    v36 = ((_BYTE)v34 + 1) & 3;
                    v28 = v123;
                    *v123 = *v123 & 0xFFFFFFF8 | v36;
                    goto LABEL_48;
                  }
                }
                *(_QWORD *)&v17[2 * v33 + 18] = v29;
                break;
              }
            }
          }
        }
LABEL_48:
        v37 = *((_QWORD *)v11 + 2);
        if ( *v125 >= *v124 || *(_DWORD *)(v37 + 28) )
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
              v39 = KeGetCurrentPrcb();
              v40 = v39->SchedulerAssist;
              if ( v40 )
              {
                if ( v39->NestingLevel <= 1u )
                {
                  v105 = v40[6] - 1;
                  v40[6] = v105;
                  if ( !v105 )
                    KiRemoveSystemWorkPriorityKick(v39);
                }
              }
              v41 = LockHandle.OldIrql;
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
                    v60 = (v109 & v108[5]) == 0;
                    v108[5] &= v109;
                    if ( v60 )
                      KiRemoveSystemWorkPriorityKick(v107);
                  }
                }
              }
              __writecr8(v41);
              goto LABEL_56;
            }
            Next = KxWaitForLockChainValid(&LockHandle);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
          goto LABEL_53;
        }
        if ( v17[77] )
        {
          v62 = *v28 | 0x200;
          *v28 = v62;
          if ( !*(_DWORD *)(*(_QWORD *)(v37 + 8) + 4LL) )
          {
            if ( (v62 & 0x400) == 0 )
            {
              *v28 = v62 | 0x400;
              ObfReferenceObjectWithTag(v17, 0x746C6644u);
              KeRegisterObjectNotification(*(_QWORD *)(v37 + 8), &ExpWorkerFactoryManagerQueue, v17 + 130);
            }
            goto LABEL_50;
          }
        }
        ExpWorkerFactoryCheckCreate((PSLIST_ENTRY)v17, &LockHandle);
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
      v20 = (__int64)LockHandle.LockQueue.Next;
      if ( LockHandle.LockQueue.Next )
        goto LABEL_105;
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) != &LockHandle )
        break;
LABEL_27:
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      if ( v22 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v71 = v22[6] - 1;
          v22[6] = v71;
          if ( !v71 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      v23 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v72 = KeGetCurrentIrql();
          if ( v72 <= 0xFu && LockHandle.OldIrql <= 0xFu && v72 >= 2u )
          {
            v73 = KeGetCurrentPrcb();
            v74 = v73->SchedulerAssist;
            v75 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v60 = (v75 & v74[5]) == 0;
            v74[5] &= v75;
            if ( v60 )
              KiRemoveSystemWorkPriorityKick(v73);
          }
        }
      }
      __writecr8(v23);
      if ( (Flags[1] & 1) != 0 )
      {
        p_PutDmaAdapter = (PFILE_IO_COMPLETION_INFORMATION)Handle[0];
        v43 = Flags[0];
        v44 = Handle[1];
        memset(DmaAdapter, 0, sizeof(DmaAdapter));
        v45 = KeGetCurrentThread();
        --v45->KernelApcDisable;
        v127 = 0LL;
        v46 = v43 & 0xFFFF0000;
        v121 = 0LL;
        if ( ObReferenceObjectByHandle(v44, 1u, AlpcPortObjectType, v111, &v121, 0LL) >= 0 )
        {
          if ( (v46 & 0x40000) != 0 )
          {
            v47 = _InterlockedIncrement((volatile signed __int32 *)v121 + 101);
            v48 = (struct _DMA_ADAPTER *)v121;
            if ( !*((_QWORD *)v121 + 51) )
            {
LABEL_68:
              DmaAdapter[0] = v48;
              LODWORD(DmaAdapter[6]) = v46 | 4;
              memset(&DmaAdapter[3], 0, 24);
              if ( (int)AlpcpSendMessage(DmaAdapter, p_PutDmaAdapter, 0LL, v111) < 0 )
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
                    KeReleaseSemaphoreEx(DmaAdapter[4][15].DmaOperations, 1, 1, v49, 1);
                }
                else
                {
                  v50 = DmaAdapter[3];
                  if ( DmaAdapter[3] )
                  {
                    v51 = KeGetCurrentIrql();
                    v122 = v51;
                    v52 = 2LL;
                    __writecr8(2uLL);
                    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v51 <= 0xFu )
                    {
                      v86 = KeGetCurrentPrcb()->SchedulerAssist;
                      v86[5] |= (-1LL << ((unsigned __int8)v51 + 1)) & 4;
                      v52 = 2LL;
                    }
                    v117 = KeGetCurrentPrcb();
                    v130 = 0;
                    if ( _interlockedbittestandset((volatile signed __int32 *)&v50[72].DmaOperations, 7u) )
                    {
                      do
                      {
                        do
                          KeYieldProcessorEx(&v130, v52);
                        while ( (LODWORD(v50[72].DmaOperations) & 0x80u) != 0 );
                      }
                      while ( _interlockedbittestandset((volatile signed __int32 *)&v50[72].DmaOperations, 7u) );
                      v52 = 2LL;
                    }
                    DmaOperations_high = HIDWORD(v50[72].DmaOperations);
                    v54 = DmaOperations_high + 1;
                    if ( DmaOperations_high + 1 > *(_DWORD *)&v50[74].Version || v54 < DmaOperations_high )
                    {
                      _InterlockedAnd((volatile signed __int32 *)&v50[72].DmaOperations, 0xFFFFFF7F);
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
                            v60 = (v104 & v103[5]) == 0;
                            v103[5] &= v104;
                            if ( v60 )
                              KiRemoveSystemWorkPriorityKick(v102);
                          }
                        }
                      }
                      __writecr8(v100);
                      RtlRaiseStatus(-1073741753);
                    }
                    HIDWORD(v50[72].DmaOperations) = v54;
                    if ( !DmaOperations_high )
                    {
                      for ( i = *(struct _DMA_ADAPTER **)&v50[73].Version; i != &v50[73]; v52 = 2LL )
                      {
                        v56 = i;
                        v57 = *(struct _DMA_ADAPTER **)&i->Version;
                        i = v57;
                        DmaOperations = v56->DmaOperations;
                        if ( (struct _DMA_ADAPTER *)v57->DmaOperations != v56
                          || *(struct _DMA_ADAPTER **)&DmaOperations->Size != v56 )
                        {
LABEL_78:
                          __fastfail(3u);
                        }
                        *(_QWORD *)&DmaOperations->Size = v57;
                        v57->DmaOperations = DmaOperations;
                        Version = v56[1].Version;
                        if ( Version == 1 )
                        {
                          if ( (unsigned __int8)KiTryUnwaitThread(v117, v56, v56[1].Size, 0LL) )
                          {
                            v60 = HIDWORD(v50[72].DmaOperations)-- == 1;
                            if ( v60 )
                              break;
                          }
                        }
                        else if ( Version == 2 )
                        {
                          HIBYTE(v56[1].Version) = 5;
                          v115 = v56[1].DmaOperations;
                          v87 = v115;
                          *(_QWORD *)&v56->Version = 0LL;
                          p_PutDmaAdapter = (PFILE_IO_COMPLETION_INFORMATION)&v87->PutDmaAdapter;
                          v88 = KeGetCurrentIrql();
                          __writecr8(2uLL);
                          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v88 <= 0xFu )
                          {
                            v89 = KeGetCurrentPrcb()->SchedulerAssist;
                            v52 = (-1LL << (v88 + 1)) & 4;
                            v89[5] |= v52;
                          }
                          BugCheckParameter2 = (ULONG_PTR)KeGetCurrentPrcb();
                          v90 = *(_QWORD *)(BugCheckParameter2 + 8);
                          v135 = v90;
                          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                          {
                            IsThreadRunning = KeIsThreadRunning(v90, v52);
                            EtwTraceEnqueueWork(v92, v56, IsThreadRunning);
                          }
                          KiAcquireKobjectLockSafe(v115);
                          p_KeyContext = &p_PutDmaAdapter->KeyContext;
                          v94 = v115;
                          if ( (_QWORD *)*p_KeyContext == p_KeyContext
                            || LODWORD(v115->FlushAdapterBuffers) >= HIDWORD(v115->FlushAdapterBuffers)
                            || *(_DMA_OPERATIONS **)(v135 + 232) == v115 && *(_BYTE *)(v135 + 643) == 15 )
                          {
                            v95 = 0;
                          }
                          else
                          {
                            v95 = KiWakeQueueWaiter(BugCheckParameter2, v115, v56);
                            v94 = v115;
                            p_KeyContext = &p_PutDmaAdapter->KeyContext;
                          }
                          if ( !v95 )
                          {
                            v96 = *(&v94->Size + 1);
                            *(&v94->Size + 1) = v96 + 1;
                            AllocateAdapterChannel = (struct _DMA_ADAPTER **)v94->AllocateAdapterChannel;
                            if ( *AllocateAdapterChannel != (struct _DMA_ADAPTER *)&v94->FreeCommonBuffer )
                              goto LABEL_78;
                            *(_QWORD *)&v56->Version = &v94->FreeCommonBuffer;
                            v56->DmaOperations = (_DMA_OPERATIONS *)AllocateAdapterChannel;
                            *AllocateAdapterChannel = v56;
                            v94->AllocateAdapterChannel = (int (__fastcall *)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *))v56;
                            if ( !v96 && (_QWORD *)*p_KeyContext != p_KeyContext )
                            {
                              KiWakeOtherQueueWaiters(BugCheckParameter2, v94);
                              v94 = v115;
                            }
                          }
                          _InterlockedAnd((volatile signed __int32 *)v94, 0xFFFFFF7F);
                          v60 = HIDWORD(v50[72].DmaOperations)-- == 1;
                          if ( v60 )
                            break;
                        }
                        else
                        {
                          KiTryUnwaitThread(v117, v56, 256LL, 0LL);
                        }
                      }
                    }
                    _InterlockedAnd((volatile signed __int32 *)&v50[72].DmaOperations, 0xFFFFFF7F);
                    KiExitDispatcher((_DWORD)v117, 1, 1, 1, v122);
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
            v76 = (struct _KEVENT *)v48[25].DmaOperations;
            if ( v76 && v47 == v76[1].Header.LockNV )
              KeSetEvent(v76, 0, 0);
            v77 = BugCheckParameter2;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v77);
            v113 = 0;
            v78 = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(v77) == 1 )
              SessionId = MmGetSessionIdEx((__int64)v78->ApcState.Process);
            else
              SessionId = -1;
            --v78->SpecialApcDisable;
            v110 = ++v78->AbAllocationRegionCount;
            v80 = 0LL;
            v117 = 0LL;
            v81 = ((char)v78->AbEntrySummary | (char)v78->AbOrphanedEntrySummary) ^ 0x3F;
            v60 = !_BitScanReverse((unsigned int *)&v82, v81);
            v120 = v82;
            if ( !v60 )
            {
              while ( 1 )
              {
                v81 &= ~(1 << v82);
                v83 = (__int64)&v78->LockEntries[v82];
                if ( (*(_BYTE *)(v83 + 26) & 1) != 0
                  && (*(_DWORD *)(v83 + 32) & 1) == 0
                  && (*(_QWORD *)(v83 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v77 & 0x7FFFFFFFFFFFFFFCLL)
                  && *(_DWORD *)(v83 + 40) == SessionId )
                {
                  *(_BYTE *)(v83 + 26) &= ~1u;
                  if ( *(_QWORD *)(v83 + 32) )
                    break;
                }
                v60 = !_BitScanReverse((unsigned int *)&v82, v81);
                v120 = v82;
                if ( v60 )
                  goto LABEL_156;
              }
              v80 = v83;
              v117 = (struct _KPRCB *)v83;
            }
LABEL_156:
            if ( v80 )
            {
              *(_BYTE *)(v80 + 32) |= 2u;
              if ( *(__int64 *)(v80 + 32) < 0 )
              {
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v80);
                v80 = (__int64)v117;
              }
              v113 = 0;
              v113 = *(_DWORD *)(v80 + 88) & 0x1FFFF;
              *(_DWORD *)(v80 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v80 + 25) &= ~1u;
              *(_QWORD *)(v80 + 32) = 0LL;
              v84 = (__int64)((unsigned __int128)((v80 - (unsigned __int64)v78->LockEntries)
                                                * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
              v85 = 1 << (v84 + (v84 < 0));
              if ( v110 == 1 )
                v78->AbEntrySummary |= v85;
              else
                _InterlockedOr8((volatile signed __int8 *)&v78->AbOrphanedEntrySummary, v85);
            }
            else if ( (*((_DWORD *)&v78->0 + 1) & 0x10000) == 0 )
            {
              KeBugCheckEx(0x162u, (ULONG_PTR)v78, v77, SessionId, 0LL);
            }
            --v78->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts((ULONG_PTR)v78, v77, &v113);
            v60 = v78->SpecialApcDisable++ == -1;
            if ( v60 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v78->ApcState.ApcListHead[0].Flink != &v78->152 )
              KiCheckForKernelApcDelivery();
          }
          v48 = (struct _DMA_ADAPTER *)v121;
          goto LABEL_68;
        }
LABEL_84:
        v61 = KeGetCurrentThread();
        v60 = v61->KernelApcDisable++ == -1;
        if ( v60
          && ($C774EFD68449142D8271B1EC1EB7FB26 *)v61->ApcState.ApcListHead[0].Flink != &v61->152
          && !v61->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
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
      v24 = (unsigned __int64 *)*((_QWORD *)v11 + 2);
      LockHandle.LockQueue.Lock = v24;
      LockHandle.LockQueue.Next = 0LL;
      v25 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 <= 0xFu )
      {
        v98 = KeGetCurrentPrcb()->SchedulerAssist;
        v98[5] |= (-1 << (v25 + 1)) & 4;
      }
      LockHandle.OldIrql = v25;
      v26 = KeGetCurrentPrcb();
      v27 = v26->SchedulerAssist;
      if ( v27 )
      {
        if ( v26->NestingLevel <= 1u )
        {
          v99 = v27[6];
          v27[6] = v99 + 1;
          if ( v99 == -1 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v24);
      }
      else if ( _InterlockedExchange64((volatile __int64 *)v24, (__int64)&LockHandle) )
      {
        KxWaitForLockOwnerShip(&LockHandle);
      }
      v17 = Object;
      if ( v10 != 258 )
      {
        v19 = v125;
        goto LABEL_39;
      }
      v63 = ExpWorkerFactoryWantsToCreate(Object, 1LL);
      v19 = v125;
      v18 = v124;
      if ( !v63
        && *v125 > v17[70]
        && *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber == (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber )
      {
        goto LABEL_39;
      }
    }
    v20 = KxWaitForLockChainValid(&LockHandle);
LABEL_105:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v20 + 8), 1uLL);
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
