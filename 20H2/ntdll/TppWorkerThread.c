/*
 * XREFs of TppWorkerThread @ 0x180052B20
 * Callers:
 *     <none>
 * Callees:
 *     TppGetCurrentThreadNumaNode @ 0x180012338 (TppGetCurrentThreadNumaNode.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x180013E60 (TppPoolpDereferenceGlobalPool.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     TppCallbackEpilog @ 0x180053740 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180053A5C (TppCallbackCheckThreadAfterCallback.c)
 *     TppPrepareDirectParams @ 0x180053C60 (TppPrepareDirectParams.c)
 *     TppWorkerFindTask @ 0x180054074 (TppWorkerFindTask.c)
 *     TppCheckForTransactions @ 0x180054390 (TppCheckForTransactions.c)
 *     TppAllocThreadData @ 0x1800543E0 (TppAllocThreadData.c)
 *     TppCritSetThread @ 0x180054474 (TppCritSetThread.c)
 *     RtlRegisterThreadWithCsrss @ 0x180054510 (RtlRegisterThreadWithCsrss.c)
 *     TppPoolAddWorker @ 0x1800545C0 (TppPoolAddWorker.c)
 *     RtlExitUserThread @ 0x180054640 (RtlExitUserThread.c)
 *     TppFreeDirectParamsCache @ 0x18005472C (TppFreeDirectParamsCache.c)
 *     TppFreeThreadData @ 0x180054778 (TppFreeThreadData.c)
 *     TppCritResetThread @ 0x1800547C4 (TppCritResetThread.c)
 *     TppPoolRemoveWorker @ 0x180054864 (TppPoolRemoveWorker.c)
 *     TppPoolUpdateTrimmedWorker @ 0x1800548C0 (TppPoolUpdateTrimmedWorker.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x180054A40 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TppPoolpFree @ 0x180054EDC (TppPoolpFree.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtWorkerFactoryWorkerReady @ 0x18009D0D0 (NtWorkerFactoryWorkerReady.c)
 *     NtSetInformationThread @ 0x18009D250 (NtSetInformationThread.c)
 *     NtSetInformationWorkerFactory @ 0x1800A0480 (NtSetInformationWorkerFactory.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x1800A0B00 (ZwWaitForWorkViaWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     RtlResetStackOverflow @ 0x1800DEA54 (RtlResetStackOverflow.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180112110 (TppAdjustRunningThreadGoalWithLock.c)
 *     TppETWWorkerNodeSwitch @ 0x180112F58 (TppETWWorkerNodeSwitch.c)
 *     TppWorkerpInnerExceptionFilter @ 0x180113008 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x18011308C (TppWorkerpOuterExceptionFilter.c)
 */

void __fastcall __noreturn TppWorkerThread(__int64 a1)
{
  char v2; // di
  signed __int64 v3; // rax
  __int64 v4; // rdx
  char v5; // r8
  signed __int64 v6; // rtt
  _RTL_SRWLOCK *v7; // rbx
  struct _PEB **Blink; // rcx
  PPORT_MESSAGE AlpcSendMessage; // rbx
  PPORT_MESSAGE v10; // rdi
  char *Heap; // rax
  NTSTATUS v12; // ecx
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 AlpcSendMessagePort_low; // r14
  int v17; // eax
  int v18; // eax
  ULONG v19; // edx
  int v20; // edx
  NTSTATUS v21; // ecx
  NTSTATUS v22; // ecx
  __int64 v23; // rcx
  unsigned __int16 v24; // r15
  unsigned __int16 v25; // r12
  __int64 v26; // rcx
  ULONG v27; // edx
  int v28; // edx
  signed __int64 v29; // rax
  signed __int64 v30; // rtt
  _RTL_SRWLOCK *v31; // rbx
  PVOID AlpcSendMessagePort; // rax
  PPORT_MESSAGE v33; // rdx
  char v34; // [rsp+31h] [rbp-2C7h] BYREF
  char v35; // [rsp+32h] [rbp-2C6h]
  char v36; // [rsp+33h] [rbp-2C5h]
  char v37; // [rsp+34h] [rbp-2C4h]
  char v38; // [rsp+35h] [rbp-2C3h]
  char v39; // [rsp+36h] [rbp-2C2h]
  char v40; // [rsp+37h] [rbp-2C1h]
  bool v41; // [rsp+38h] [rbp-2C0h]
  int v42; // [rsp+3Ch] [rbp-2BCh]
  NTSTATUS v43; // [rsp+40h] [rbp-2B8h]
  ULONG Count; // [rsp+44h] [rbp-2B4h]
  ULONG PacketsReturned; // [rsp+48h] [rbp-2B0h] BYREF
  __int64 v46; // [rsp+50h] [rbp-2A8h]
  struct _PEB *v47; // [rsp+58h] [rbp-2A0h]
  signed __int64 v48; // [rsp+60h] [rbp-298h]
  PFILE_IO_COMPLETION_INFORMATION MiniPackets; // [rsp+68h] [rbp-290h]
  signed __int64 v50; // [rsp+70h] [rbp-288h]
  PVOID BaseAddress; // [rsp+78h] [rbp-280h] BYREF
  int v52; // [rsp+80h] [rbp-278h] BYREF
  int WorkerFactoryInformation; // [rsp+88h] [rbp-270h] BYREF
  __int64 v54; // [rsp+90h] [rbp-268h] BYREF
  void (__fastcall ***v55)(PVOID *); // [rsp+98h] [rbp-260h] BYREF
  ULONG v56; // [rsp+A4h] [rbp-254h]
  __int64 v57; // [rsp+B8h] [rbp-240h]
  HANDLE v58; // [rsp+C0h] [rbp-238h]
  HANDLE v59; // [rsp+C8h] [rbp-230h]
  struct _TEB *v60; // [rsp+E0h] [rbp-218h]
  struct _TEB *v61; // [rsp+E8h] [rbp-210h]
  struct _TEB *v62; // [rsp+F0h] [rbp-208h]
  struct _TEB *v63; // [rsp+F8h] [rbp-200h]
  struct _TEB *v64; // [rsp+108h] [rbp-1F0h]
  struct _TEB *v65; // [rsp+110h] [rbp-1E8h]
  struct _TEB *v66; // [rsp+118h] [rbp-1E0h]
  struct _TEB *v67; // [rsp+120h] [rbp-1D8h]
  HANDLE v68; // [rsp+138h] [rbp-1C0h]
  _WORKER_FACTORY_DEFERRED_WORK DeferredWork[15]; // [rsp+140h] [rbp-1B8h] BYREF
  _QWORD ThreadInformation[2]; // [rsp+2B0h] [rbp-48h] BYREF

  v48 = a1;
  v54 = 0LL;
  v46 = a1;
  v35 = 0;
  v36 = 0;
  v39 = 0;
  v37 = 0;
  v34 = 0;
  v40 = 0;
  v38 = 0;
  BaseAddress = 0LL;
  v42 = 0;
  RtlRegisterThreadWithCsrss();
  v47 = NtCurrentPeb();
  TppCritSetThread(&v54);
  TppAllocThreadData(&BaseAddress);
  if ( BaseAddress )
    *(_QWORD *)BaseAddress = DeferredWork;
  memset(DeferredWork, 0, sizeof(DeferredWork));
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
  if ( *(_BYTE *)(a1 + 377) )
  {
    v43 = -1073741558;
  }
  else
  {
    v58 = *(HANDLE *)(a1 + 56);
    v43 = NtWorkerFactoryWorkerReady(v58);
    if ( v43 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v2 = v39;
LABEL_17:
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
      if ( v2 )
        goto LABEL_105;
      TppPoolAddWorker(a1, DeferredWork);
      v37 = 1;
      v7 = (_RTL_SRWLOCK *)v47;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v47->TppWorkerpListLock);
      Blink = (struct _PEB **)v47->TppWorkerpList.Blink;
      if ( *Blink != (struct _PEB *)&v47->TppWorkerpList )
        __fastfail(3u);
      DeferredWork[0].AlpcSendMessage = (PPORT_MESSAGE)&v47->TppWorkerpList;
      DeferredWork[0].AlpcSendMessagePort = Blink;
      *Blink = (struct _PEB *)DeferredWork;
      v7[115].Value = (unsigned __int64)DeferredWork;
      v36 = 1;
      RtlReleaseSRWLockExclusive(v7 + 113);
      memset(&DeferredWork[2].AlpcSendMessagePort, 0, 0xF8uLL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
      v35 = 1;
      TppGetCurrentThreadNumaNode(a1, &DeferredWork[14].AlpcSendMessagePort, 0LL);
      while ( 1 )
      {
LABEL_21:
        v42 = 0;
        *(_OWORD *)&DeferredWork[12].AlpcSendMessageFlags = 0LL;
        *(_OWORD *)&DeferredWork[13].AlpcSendMessagePort = 0LL;
        AlpcSendMessage = DeferredWork[14].AlpcSendMessage;
        Count = 16;
        if ( DeferredWork[14].AlpcSendMessage )
        {
          if ( LODWORD(DeferredWork[14].AlpcSendMessage->DoNotUseThisField) != 1 )
            goto LABEL_74;
          v10 = DeferredWork[14].AlpcSendMessage;
          memset(
            *(void **)DeferredWork[14].AlpcSendMessage,
            0,
            56LL * HIDWORD(DeferredWork[14].AlpcSendMessage->DoNotUseThisField));
          Count = HIDWORD(v10->DoNotUseThisField);
          Heap = *(char **)&AlpcSendMessage->u1.s1.DataLength;
        }
        else
        {
          v56 = TppHeapTag + 3145728;
          Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 3145728) | 8, 0x390uLL);
          if ( !Heap )
          {
LABEL_74:
            Count = 1;
            Heap = (char *)&DeferredWork[12].AlpcSendMessageFlags;
            goto LABEL_24;
          }
          *((_QWORD *)Heap + 112) = Heap;
          *((_DWORD *)Heap + 226) = 1;
          *((_DWORD *)Heap + 227) = 16;
          DeferredWork[14].AlpcSendMessage = (PPORT_MESSAGE)(Heap + 896);
          Count = 16;
        }
LABEL_24:
        MiniPackets = (PFILE_IO_COMPLETION_INFORMATION)Heap;
        PacketsReturned = 0;
        v59 = *(HANDLE *)(a1 + 56);
        v12 = ZwWaitForWorkViaWorkerFactory(
                v59,
                (PFILE_IO_COMPLETION_INFORMATION)Heap,
                Count,
                &PacketsReturned,
                &DeferredWork[11]);
        v43 = v12;
        if ( v12 )
          PacketsReturned = 0;
        if ( (DeferredWork[11].Flags & 1) != 0 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, DeferredWork[11].AlpcSendMessage);
          DeferredWork[11].Flags &= ~1u;
          v12 = v43;
        }
        if ( v12 )
        {
          v21 = v12 - 128;
          if ( !v21 )
            goto LABEL_105;
          v22 = v21 - 64;
          if ( v22 )
          {
            if ( v22 == 66 )
            {
              v38 = 1;
              goto LABEL_105;
            }
          }
          else
          {
            TppCallbackCheckThreadAfterCallback(0LL);
          }
        }
        else
        {
          if ( !a1 || (v13 = *(_DWORD *)(a1 + 440)) == 0 )
            v13 = MEMORY[0x7FFE03C0];
          if ( *(_DWORD *)(a1 + 424) != v13 )
          {
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
            TppAdjustRunningThreadGoalWithLock(a1);
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
          }
          if ( (unsigned __int8)TppPrepareDirectParams(
                                  (unsigned int)DeferredWork,
                                  (_DWORD)MiniPackets,
                                  PacketsReturned,
                                  Count,
                                  a1,
                                  (__int64)&v34) )
            goto LABEL_105;
          if ( !v34 )
          {
            v14 = *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags;
            if ( *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags )
            {
              v57 = *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags;
              DeferredWork[6].AlpcSendMessage = *(PPORT_MESSAGE *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags
                                                                 + 56LL);
              DeferredWork[6].AlpcSendMessagePort = *(PVOID *)&DeferredWork[12].AlpcSendMessageFlags;
              v52 = *(unsigned __int8 *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags + 68LL);
              v15 = *(unsigned int *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags + 64LL);
              AlpcSendMessagePort_low = LODWORD(DeferredWork[14].AlpcSendMessagePort);
              v17 = *(_DWORD *)(a1 + 428);
              if ( (_DWORD)v15 == LODWORD(DeferredWork[14].AlpcSendMessagePort) )
              {
                if ( v17 == -1 && !LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                {
                  LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v15));
                }
              }
              else
              {
                if ( v17 == -1 )
                {
                  if ( LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40)
                                                                    + 4LL
                                                                    * LODWORD(DeferredWork[14].AlpcSendMessagePort)));
                  else
                    LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v15));
                }
                LODWORD(DeferredWork[14].AlpcSendMessagePort) = v15;
                v23 = *(_QWORD *)(a1 + 48);
                v24 = *(_WORD *)(16 * v15 + v23 + 8);
                v25 = *(_WORD *)(v23 + 16 * AlpcSendMessagePort_low + 8);
                if ( RtlGetCurrentServiceSessionId() )
                  v26 = (__int64)NtCurrentPeb()->SharedData + 556;
                else
                  v26 = 2147353478LL;
                if ( *(_BYTE *)v26 )
                  TppETWWorkerNodeSwitch(a1, AlpcSendMessagePort_low, v15, v25, v24);
                if ( v25 != v24 )
                {
                  ThreadInformation[1] = v24;
                  ThreadInformation[0] = 0LL;
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, ThreadInformation, 0x10u);
                  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, &v52, 4u);
                }
              }
              v60 = NtCurrentTeb();
              *(_GUID *)&DeferredWork[12].AlpcSendMessage = v60->ActivityId;
              if ( *(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags
                && (*(_BYTE *)(*(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags + 436LL) & 1) == 0 )
              {
                v27 = DeferredWork[6].AlpcSendMessageFlags | 8;
                DeferredWork[6].AlpcSendMessageFlags |= 8u;
                v61 = NtCurrentTeb();
                if ( v61->IsImpersonating )
                  DeferredWork[6].AlpcSendMessageFlags = v27 | 4;
                if ( (unsigned __int8)TppCheckForTransactions() )
                  DeferredWork[6].AlpcSendMessageFlags = v28 | 0x10;
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x20u;
                v62 = NtCurrentTeb();
                if ( v62->PreferredLanguages )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x40u;
                v63 = NtCurrentTeb();
                if ( v63->SavedPriorityState )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x80u;
              }
              (*(void (__fastcall **)(PVOID *, __int64, PPORT_MESSAGE, PVOID *))(v14 + 56))(
                &DeferredWork[2].AlpcSendMessagePort,
                v57,
                DeferredWork[13].AlpcSendMessage,
                &DeferredWork[13].AlpcSendMessagePort);
              goto LABEL_40;
            }
            while ( 1 )
            {
              if ( !(unsigned int)TppWorkerFindTask(a1, DeferredWork, &v55) )
                goto LABEL_105;
              if ( (DeferredWork[11].Flags & 1) != 0 )
              {
                TppCallbackSendAndDestroyAlpcMessage(&DeferredWork[2].AlpcSendMessagePort, v4);
                DeferredWork[11].Flags &= ~1u;
              }
              DeferredWork[1].AlpcSendMessagePort = v55;
              DeferredWork[6].AlpcSendMessage = (PPORT_MESSAGE)**v55;
              DeferredWork[6].AlpcSendMessagePort = v55;
              *(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags = DeferredWork[2].AlpcSendMessage;
              v64 = NtCurrentTeb();
              *(_GUID *)&DeferredWork[12].AlpcSendMessage = v64->ActivityId;
              if ( DeferredWork[2].AlpcSendMessage
                && (*(_BYTE *)(&DeferredWork[2].AlpcSendMessage[10].CallbackId + 1) & 1) == 0 )
              {
                v19 = DeferredWork[6].AlpcSendMessageFlags | 8;
                DeferredWork[6].AlpcSendMessageFlags |= 8u;
                v65 = NtCurrentTeb();
                if ( v65->IsImpersonating )
                  DeferredWork[6].AlpcSendMessageFlags = v19 | 4;
                if ( (unsigned __int8)TppCheckForTransactions() )
                  DeferredWork[6].AlpcSendMessageFlags = v20 | 0x10;
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x20u;
                v66 = NtCurrentTeb();
                if ( v66->PreferredLanguages )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x40u;
                v67 = NtCurrentTeb();
                if ( v67->SavedPriorityState )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x80u;
              }
              (**v55)(&DeferredWork[2].AlpcSendMessagePort);
LABEL_40:
              if ( (BYTE4(DeferredWork[5].AlpcSendMessagePort) & 4) != 0 )
                v40 = 1;
              v41 = LODWORD(DeferredWork[5].AlpcSendMessagePort) == 4;
              TppCallbackEpilog(&DeferredWork[2].AlpcSendMessagePort);
              DeferredWork[1].AlpcSendMessagePort = 0LL;
              if ( v40 )
                break;
              v18 = *(_DWORD *)(a1 + 440);
              if ( !v18 )
                v18 = MEMORY[0x7FFE03C0];
              if ( *(_DWORD *)(a1 + 424) != v18 )
              {
                RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
                TppAdjustRunningThreadGoalWithLock(a1);
                RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
              }
              _m_prefetchw((const void *)(a1 + 8));
              v3 = *(_QWORD *)(a1 + 8);
              v50 = v3;
              do
              {
                v4 = (unsigned __int16)v3;
                if ( *(_BYTE *)(a1 + 376) )
                  goto LABEL_105;
                if ( HIDWORD(v3) && ((v3 & 0x8000u) == 0LL || v41) )
                {
                  v5 = 0;
                  HIDWORD(v50) = HIDWORD(v3) - 1;
                }
                else
                {
                  v5 = 1;
                  LODWORD(v50) = v3 ^ (unsigned __int16)(v3 ^ (v3 + 1));
                }
                v6 = v3;
                v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v50, v3);
                v50 = v3;
              }
              while ( v6 != v3 );
              v34 = v5;
              if ( v5 )
                goto LABEL_21;
            }
            _m_prefetchw((const void *)(a1 + 8));
            v29 = *(_QWORD *)(a1 + 8);
            v48 = v29;
            do
            {
              LODWORD(v48) = v29 ^ (unsigned __int16)(v29 ^ (v29 + 1));
              v30 = v29;
              v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v48, v29);
              v48 = v29;
            }
            while ( v30 != v29 );
            WorkerFactoryInformation = 3;
            v68 = *(HANDLE *)(a1 + 56);
            NtSetInformationWorkerFactory(v68, WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
LABEL_105:
            if ( (DeferredWork[11].Flags & 1) != 0 )
            {
              TppCallbackSendAndDestroyAlpcMessage(&DeferredWork[2].AlpcSendMessagePort, v4);
              DeferredWork[11].Flags &= ~1u;
            }
            if ( v35 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
            if ( v36 )
            {
              v31 = (_RTL_SRWLOCK *)v47;
              RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v47->TppWorkerpListLock);
              AlpcSendMessagePort = DeferredWork[0].AlpcSendMessagePort;
              v33 = DeferredWork[0].AlpcSendMessage;
              if ( DeferredWork[0].AlpcSendMessage->ClientId.UniqueProcess != DeferredWork
                || *(_WORKER_FACTORY_DEFERRED_WORK **)DeferredWork[0].AlpcSendMessagePort != DeferredWork )
              {
                __fastfail(3u);
              }
              *(_QWORD *)DeferredWork[0].AlpcSendMessagePort = DeferredWork[0].AlpcSendMessage;
              v33->ClientId.UniqueProcess = AlpcSendMessagePort;
              RtlReleaseSRWLockExclusive(v31 + 113);
            }
            if ( v37 )
            {
              TppPoolRemoveWorker(DeferredWork, v4);
              if ( v38 )
                TppPoolUpdateTrimmedWorker(a1);
            }
            if ( (PVOID)a1 == TppPoolpGlobalPool )
            {
              TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
            }
            else if ( a1 == TppPoolpSerializedPool )
            {
              TppPoolpDereferenceGlobalPool((const void **)&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
            }
            else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
            {
              TppPoolpFree((PVOID)a1);
            }
            TppCritResetThread(v54, v4);
            TppFreeThreadData(BaseAddress);
            TppFreeDirectParamsCache(DeferredWork);
            v43 = 0;
            RtlExitUserThread(0);
          }
        }
      }
    }
  }
  v2 = 1;
  v39 = 1;
  goto LABEL_17;
}
