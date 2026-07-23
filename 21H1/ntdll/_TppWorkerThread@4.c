/*
 * XREFs of _TppWorkerThread@4 @ 0x4B2B58A0
 * Callers:
 *     <none>
 * Callees:
 *     _TppPoolpFree@4 @ 0x4B2AB6C5 (_TppPoolpFree@4.c)
 *     _TppCallbackSendAndDestroyAlpcMessage@4 @ 0x4B2ABDD8 (_TppCallbackSendAndDestroyAlpcMessage@4.c)
 *     _TppPoolpDereferenceGlobalPool@8 @ 0x4B2B26D2 (_TppPoolpDereferenceGlobalPool@8.c)
 *     _TppGetCurrentThreadNumaNode@12 @ 0x4B2B49C9 (_TppGetCurrentThreadNumaNode@12.c)
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _TppWaitCompletion@16 @ 0x4B2B5530 (_TppWaitCompletion@16.c)
 *     _TppTimerpExecuteCallback@8 @ 0x4B2B56A0 (_TppTimerpExecuteCallback@8.c)
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 *     _TppCallbackEpilog@4 @ 0x4B2B6183 (_TppCallbackEpilog@4.c)
 *     _TppCallbackCheckThreadAfterCallback@4 @ 0x4B2B638B (_TppCallbackCheckThreadAfterCallback@4.c)
 *     _TppPrepareDirectParams@24 @ 0x4B2B64B0 (_TppPrepareDirectParams@24.c)
 *     _TppCheckForTransactions@0 @ 0x4B2B68E9 (_TppCheckForTransactions@0.c)
 *     _TppWorkerFindTask@12 @ 0x4B2B6930 (_TppWorkerFindTask@12.c)
 *     _TppWorkpExecuteCallback@8 @ 0x4B2B6B30 (_TppWorkpExecuteCallback@8.c)
 *     _TppCallbackCheckThreadBeforeCallback@4 @ 0x4B2B6D20 (_TppCallbackCheckThreadBeforeCallback@4.c)
 *     _TppWorkerSwitchNode@16 @ 0x4B2B6D51 (_TppWorkerSwitchNode@16.c)
 *     _TppAlpcpExecuteCallback@16 @ 0x4B2B6DC0 (_TppAlpcpExecuteCallback@16.c)
 *     _TppTimerQueueExpiration@16 @ 0x4B2B7250 (_TppTimerQueueExpiration@16.c)
 *     _TppPoolAddWorker@8 @ 0x4B2B7F58 (_TppPoolAddWorker@8.c)
 *     _TppAllocThreadData@4 @ 0x4B2B7FC9 (_TppAllocThreadData@4.c)
 *     _TppCritSetThread@4 @ 0x4B2B807E (_TppCritSetThread@4.c)
 *     _RtlRegisterThreadWithCsrss@0 @ 0x4B2B80E0 (_RtlRegisterThreadWithCsrss@0.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 *     _TppPoolRemoveWorker@4 @ 0x4B2EC1A3 (_TppPoolRemoveWorker@4.c)
 *     _TppFreeThreadData@4 @ 0x4B2ECE0F (_TppFreeThreadData@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _RtlWakeConditionVariable@4 @ 0x4B2F1B80 (_RtlWakeConditionVariable@4.c)
 *     _NtWorkerFactoryWorkerReady@4 @ 0x4B2F2970 (_NtWorkerFactoryWorkerReady@4.c)
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwDuplicateObject@28 @ 0x4B2F2D40 (_ZwDuplicateObject@28.c)
 *     _ZwSetInformationObject@16 @ 0x4B2F2F40 (_ZwSetInformationObject@16.c)
 *     _ZwSetInformationWorkerFactory@16 @ 0x4B2F4370 (_ZwSetInformationWorkerFactory@16.c)
 *     _NtWaitForWorkViaWorkerFactory@20 @ 0x4B2F46B0 (_NtWaitForWorkViaWorkerFactory@20.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlResetStackOverflow@0 @ 0x4B33BCA7 (_RtlResetStackOverflow@0.c)
 *     _TppAdjustRunningThreadGoalWithLock@4 @ 0x4B384257 (_TppAdjustRunningThreadGoalWithLock@4.c)
 *     _TppWorkerpInnerExceptionFilter@12 @ 0x4B385109 (_TppWorkerpInnerExceptionFilter@12.c)
 *     _TppWorkerpOuterExceptionFilter@8 @ 0x4B38516A (_TppWorkerpOuterExceptionFilter@8.c)
 */

void __stdcall __noreturn TppWorkerThread(int a1)
{
  _RTL_SRWLOCK *v1; // esi
  _RTL_SRWLOCK **Value; // ecx
  _FILE_IO_COMPLETION_INFORMATION **v3; // ebx
  _FILE_IO_COMPLETION_INFORMATION *v4; // esi
  _FILE_IO_COMPLETION_INFORMATION *Heap; // eax
  NTSTATUS v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // edx
  int v10; // edx
  int (__stdcall *v11)(int, int); // esi
  int v12; // eax
  unsigned int v13; // esi
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  signed __int64 v16; // rax
  unsigned __int16 v17; // ax
  signed __int64 v18; // rax
  int (__stdcall *v19)(PTP_CALLBACK_INSTANCE, int, int, int); // ebx
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  _RTL_SRWLOCK *v22; // eax
  _RTL_SRWLOCK **v23; // ecx
  _RTL_SRWLOCK *v24; // edx
  int *v25; // ecx
  PVOID *p_KeyContext; // ecx
  unsigned int v27; // ebx
  unsigned int v28; // ecx
  signed __int64 v29; // rax
  _DWORD *v30; // ecx
  _DWORD *v31; // edx
  unsigned int v32; // ecx
  bool v33; // bl
  SIZE_T v34; // [esp-8h] [ebp-1ACh]
  size_t v35; // [esp-4h] [ebp-1A8h]
  size_t v36; // [esp-4h] [ebp-1A8h]
  size_t v37; // [esp-4h] [ebp-1A8h]
  unsigned int v38; // [esp+2Ch] [ebp-178h]
  int v39; // [esp+34h] [ebp-170h] BYREF
  HANDLE TargetHandle; // [esp+38h] [ebp-16Ch] BYREF
  unsigned __int64 v41; // [esp+3Ch] [ebp-168h]
  volatile signed __int64 *v42; // [esp+44h] [ebp-160h]
  int WorkerFactoryInformation; // [esp+48h] [ebp-15Ch] BYREF
  unsigned __int64 v44; // [esp+60h] [ebp-144h]
  unsigned __int64 v45; // [esp+68h] [ebp-13Ch]
  void *v46; // [esp+70h] [ebp-134h] BYREF
  volatile signed __int64 *v47; // [esp+74h] [ebp-130h]
  PVOID v48; // [esp+78h] [ebp-12Ch] BYREF
  ULONG PacketsReturned; // [esp+7Ch] [ebp-128h] BYREF
  __int16 ObjectInformation; // [esp+80h] [ebp-124h] BYREF
  _RTL_SRWLOCK *v51; // [esp+84h] [ebp-120h]
  PFILE_IO_COMPLETION_INFORMATION MiniPackets; // [esp+88h] [ebp-11Ch]
  HANDLE ThreadInformation; // [esp+8Ch] [ebp-118h] BYREF
  ULONG Count; // [esp+90h] [ebp-114h]
  NTSTATUS v55; // [esp+94h] [ebp-110h]
  PVOID BaseAddress; // [esp+98h] [ebp-10Ch] BYREF
  int v57; // [esp+9Ch] [ebp-108h]
  bool v58; // [esp+A3h] [ebp-101h]
  int v59; // [esp+A4h] [ebp-100h]
  char v60; // [esp+ABh] [ebp-F9h]
  char v61; // [esp+ACh] [ebp-F8h]
  char v62; // [esp+ADh] [ebp-F7h]
  char v63; // [esp+AEh] [ebp-F6h]
  char v64; // [esp+AFh] [ebp-F5h]
  char v65; // [esp+B0h] [ebp-F4h]
  char v66; // [esp+B1h] [ebp-F3h]
  char v67; // [esp+B2h] [ebp-F2h]
  char v68; // [esp+B3h] [ebp-F1h] BYREF
  _RTL_SRWLOCK *v69; // [esp+B4h] [ebp-F0h] BYREF
  _RTL_SRWLOCK **v70; // [esp+B8h] [ebp-ECh]
  PVOID v71; // [esp+C4h] [ebp-E0h]
  int v72; // [esp+CCh] [ebp-D8h]
  _BYTE v73[36]; // [esp+D0h] [ebp-D4h] BYREF
  int v74; // [esp+F4h] [ebp-B0h]
  char v75; // [esp+F8h] [ebp-ACh]
  int v76; // [esp+100h] [ebp-A4h]
  PVOID v77; // [esp+104h] [ebp-A0h]
  int v78; // [esp+108h] [ebp-9Ch]
  int v79; // [esp+118h] [ebp-8Ch]
  _WORKER_FACTORY_DEFERRED_WORK DeferredWork; // [esp+148h] [ebp-5Ch] BYREF
  _GUID ActivityId; // [esp+158h] [ebp-4Ch]
  int v82; // [esp+168h] [ebp-3Ch] BYREF
  PVOID ApcContext; // [esp+16Ch] [ebp-38h]
  int v84[2]; // [esp+170h] [ebp-34h] BYREF
  _FILE_IO_COMPLETION_INFORMATION *v85; // [esp+178h] [ebp-2Ch]
  int v86[3]; // [esp+17Ch] [ebp-28h] BYREF
  CPPEH_RECORD ms_exc; // [esp+18Ch] [ebp-18h]

  v46 = 0;
  v59 = a1;
  v63 = 0;
  v62 = 0;
  v66 = 0;
  v67 = 0;
  v61 = 0;
  v68 = 0;
  v65 = 0;
  v60 = 0;
  v48 = 0;
  v57 = 0;
  RtlRegisterThreadWithCsrss();
  v51 = (_RTL_SRWLOCK *)NtCurrentPeb();
  ms_exc.registration.TryLevel = 0;
  TppCritSetThread(&v46);
  TppAllocThreadData(&v48);
  if ( v48 )
    *(_DWORD *)v48 = &v69;
  LODWORD(v35) = 212;
  memset(&v69, 0, v35);
  ms_exc.registration.TryLevel = 2;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 224));
  ms_exc.registration.TryLevel = 3;
  if ( *(_BYTE *)(a1 + 229) )
  {
    v55 = -1073741558;
  }
  else
  {
    v55 = NtWorkerFactoryWorkerReady(*(HANDLE *)(a1 + 36));
    if ( v55 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v67 = 1;
LABEL_6:
      ms_exc.registration.TryLevel = 2;
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 224));
      if ( v66 )
        goto LABEL_75;
      TppPoolAddWorker(a1, &v69);
      v61 = 1;
      v1 = v51;
      RtlAcquireSRWLockExclusive(v51 + 148);
      ms_exc.registration.TryLevel = 4;
      Value = (_RTL_SRWLOCK **)v1[150].Value;
      if ( *Value != &v1[149] )
        goto LABEL_106;
      v69 = v1 + 149;
      v70 = Value;
      *Value = (_RTL_SRWLOCK *)&v69;
      v1[150].Value = (unsigned int)&v69;
      v62 = 1;
      ms_exc.registration.TryLevel = 2;
      RtlReleaseSRWLockExclusive(v51 + 148);
      LODWORD(v36) = 152;
      memset(v73, 0, v36);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 248));
      v63 = 1;
      TppGetCurrentThreadNumaNode((_RTL_SRWLOCK *)a1, v86, 0);
      while ( 1 )
      {
        v57 = 0;
        v82 = 0;
        ApcContext = 0;
        v84[0] = 0;
        v84[1] = 0;
        v3 = (_FILE_IO_COMPLETION_INFORMATION **)v85;
        Count = 16;
        if ( v85 )
        {
          if ( v85->ApcContext != (PVOID)1 )
            goto LABEL_107;
          v4 = v85;
          LODWORD(v37) = 28 * v85->IoStatusBlock.Status;
          memset(v85->KeyContext, 0, v37);
          Count = v4->IoStatusBlock.Status;
          Heap = *v3;
        }
        else
        {
          LODWORD(v37) = 460;
          Heap = (_FILE_IO_COMPLETION_INFORMATION *)RtlAllocateHeap(
                                                      NtCurrentPeb()->ProcessHeap,
                                                      (TppHeapTag + 3145728) | 8,
                                                      v37);
          if ( !Heap )
          {
LABEL_107:
            Count = 1;
            Heap = (_FILE_IO_COMPLETION_INFORMATION *)&v82;
            goto LABEL_12;
          }
          Heap[28].KeyContext = Heap;
          Heap[28].ApcContext = (PVOID)1;
          Heap[28].IoStatusBlock.Status = 16;
          v85 = Heap + 28;
          Count = 16;
        }
LABEL_12:
        MiniPackets = Heap;
        PacketsReturned = 0;
        ms_exc.registration.TryLevel = 5;
        v6 = NtWaitForWorkViaWorkerFactory(*(HANDLE *)(a1 + 36), Heap, Count, &PacketsReturned, &DeferredWork);
        v55 = v6;
        ms_exc.registration.TryLevel = 2;
        if ( v6 )
          PacketsReturned = 0;
        if ( (DeferredWork.Flags & 1) != 0 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, DeferredWork.AlpcSendMessage);
          DeferredWork.Flags &= ~1u;
          v6 = v55;
        }
        if ( v6 )
        {
          v20 = v6 - 128;
          if ( !v20 )
            goto LABEL_75;
          v21 = v20 - 64;
          if ( v21 )
          {
            if ( v21 == 66 )
            {
              v60 = 1;
              goto LABEL_75;
            }
          }
          else
          {
            ms_exc.registration.TryLevel = 6;
            TppCallbackCheckThreadAfterCallback(0);
            ms_exc.registration.TryLevel = 2;
          }
        }
        else
        {
          if ( !a1 || (v7 = *(_DWORD *)(a1 + 272)) == 0 )
            v7 = MEMORY[0x7FFE03C0];
          if ( *(_DWORD *)(a1 + 256) != v7 )
          {
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 44));
            TppAdjustRunningThreadGoalWithLock(a1);
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 44));
          }
          if ( (unsigned __int8)TppPrepareDirectParams(PacketsReturned, Count, a1, &v68) )
            goto LABEL_75;
          if ( !v68 )
          {
            v8 = v82;
            if ( !v82 )
              goto LABEL_24;
            v76 = *(_DWORD *)(v82 + 32);
            v77 = (PVOID)v82;
            TppWorkerSwitchNode(*(_DWORD *)(v82 + 36), *(_BYTE *)(v82 + 40));
            TppCallbackCheckThreadBeforeCallback(v73);
            ms_exc.registration.TryLevel = 7;
            v19 = *(int (__stdcall **)(PTP_CALLBACK_INSTANCE, int, int, int))(v8 + 32);
            if ( v19 == TppAlpcpExecuteCallback )
            {
              TppAlpcpExecuteCallback((PTP_CALLBACK_INSTANCE)v73, v8, (int)ApcContext, (int)v84);
              goto LABEL_41;
            }
            if ( (char *)v19 == (char *)TppTimerQueueExpiration )
            {
              TppTimerQueueExpiration((int)v73, v8, (int)ApcContext, (int)v84);
LABEL_41:
              ms_exc.registration.TryLevel = 2;
              goto LABEL_42;
            }
            if ( (char *)v19 == (char *)TppWaitCompletion )
            {
              TppWaitCompletion((PTP_CALLBACK_INSTANCE)v73, v8, (_RTL_SRWLOCK *)ApcContext, (int)v84);
              goto LABEL_41;
            }
            ((void (__thiscall *)(int (__stdcall *)(PTP_CALLBACK_INSTANCE, int, int, int), _BYTE *, int, PVOID, int *))v19)(
              v19,
              v73,
              v8,
              ApcContext,
              v84);
            ms_exc.registration.TryLevel = 2;
LABEL_42:
            if ( (v75 & 4) != 0 )
              v65 = 1;
            v58 = v74 == 4;
            ms_exc.registration.TryLevel = 9;
            TppCallbackEpilog(v73);
            ms_exc.registration.TryLevel = 2;
            v71 = 0;
            if ( v65 )
            {
              v47 = (volatile signed __int64 *)(a1 + 8);
              v27 = *(_DWORD *)(a1 + 8);
              v28 = *(_DWORD *)(a1 + 12);
              v44 = __PAIR64__(v28, v27);
              do
              {
                BaseAddress = (PVOID)v27;
                v38 = v28;
                v29 = _InterlockedCompareExchange64(
                        v47,
                        __SPAIR64__(v28, v27 ^ (unsigned __int16)(v27 ^ (v27 + 1))),
                        __SPAIR64__(v28, v27));
                v27 = v29;
                v44 = v29;
                v28 = HIDWORD(v29);
              }
              while ( v29 != __PAIR64__(v38, (unsigned int)BaseAddress) );
              WorkerFactoryInformation = 3;
              ZwSetInformationWorkerFactory(
                *(HANDLE *)(a1 + 36),
                WorkerFactoryCallbackType,
                &WorkerFactoryInformation,
                4u);
LABEL_75:
              ms_exc.registration.TryLevel = 1;
              HIDWORD(v34) = 1261133755;
              if ( (DeferredWork.Flags & 1) != 0 )
              {
                TppCallbackSendAndDestroyAlpcMessage((int)v73);
                DeferredWork.Flags &= ~1u;
              }
              if ( v63 )
                _InterlockedDecrement((volatile signed __int32 *)(a1 + 248));
              if ( v62 )
              {
                RtlAcquireSRWLockExclusive(v51 + 148);
                ms_exc.registration.TryLevel = 10;
                v22 = v69;
                v23 = v70;
                if ( (_RTL_SRWLOCK **)v69[1].Value == &v69 && *v70 == (_RTL_SRWLOCK *)&v69 )
                {
                  *v70 = v69;
                  v22[1].Value = (unsigned int)v23;
                  ms_exc.registration.TryLevel = 1;
                  RtlReleaseSRWLockExclusive(v51 + 148);
                  goto LABEL_86;
                }
LABEL_106:
                __fastfail(3u);
              }
LABEL_86:
              if ( v61 )
              {
                TppPoolRemoveWorker(&v69);
                if ( v60 )
                {
                  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 44));
                  if ( (*(_DWORD *)(a1 + 268) & 0xFFE) != 0
                    && (LODWORD(v34) = 12,
                        (BaseAddress = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, v34)) != 0) )
                  {
                    if ( ZwDuplicateObject(
                           (HANDLE)0xFFFFFFFF,
                           (HANDLE)0xFFFFFFFE,
                           (HANDLE)0xFFFFFFFF,
                           &TargetHandle,
                           0,
                           0,
                           2u) < 0 )
                    {
                      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, BaseAddress);
                      goto LABEL_89;
                    }
                    v30 = BaseAddress;
                    *((_DWORD *)BaseAddress + 2) = TargetHandle;
                    v31 = *(_DWORD **)(a1 + 284);
                    if ( *v31 != a1 + 280 )
                      __fastfail(3u);
                    *v30 = a1 + 280;
                    v30[1] = v31;
                    *v31 = v30;
                    *(_DWORD *)(a1 + 284) = v30;
                    v32 = *(_DWORD *)(a1 + 268) ^ (*(_DWORD *)(a1 + 268) ^ ((*(_DWORD *)(a1 + 268) & 0xFFFFF000) + 4096)) & 0x7FF000;
                    *(_DWORD *)(a1 + 268) = v32;
                    v33 = ((v32 ^ (v32 >> 11)) & 0xFFE) == 0;
                    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 44));
                    if ( v33 )
                      RtlWakeConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 276));
                  }
                  else
                  {
LABEL_89:
                    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 44));
                  }
                }
              }
              if ( v67 )
              {
                if ( a1 == TppPoolpGlobalPool )
                {
                  v24 = &TppPoolpGlobalPoolLock;
                  v25 = &TppPoolpGlobalPool;
                  goto LABEL_93;
                }
                if ( a1 == TppPoolpSerializedPool )
                {
                  v24 = (_RTL_SRWLOCK *)&TppPoolpSerializedPoolLock;
                  v25 = &TppPoolpSerializedPool;
LABEL_93:
                  TppPoolpDereferenceGlobalPool((signed __int32 **)v25, v24);
                }
                else if ( !_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) )
                {
                  TppPoolpFree(a1);
                }
              }
              ms_exc.registration.TryLevel = 0;
              ThreadInformation = v46;
              if ( v46 )
              {
                ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadImpersonationToken, &ThreadInformation, 4u);
                v39 = 0;
                ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadBreakOnTermination, &v39, 4u);
                ObjectInformation = 0;
                ZwSetInformationObject(ThreadInformation, ObjectHandleFlagInformation, &ObjectInformation, 2u);
                NtClose(ThreadInformation);
                ThreadInformation = 0;
                ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadImpersonationToken, &ThreadInformation, 4u);
              }
              TppFreeThreadData(v48);
              p_KeyContext = &v85->KeyContext;
              if ( v85 && !_InterlockedDecrement((volatile signed __int32 *)&v85->ApcContext) )
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *p_KeyContext);
              v55 = 0;
              RtlExitUserThread(0);
            }
            v12 = *(_DWORD *)(a1 + 272);
            if ( !v12 )
              v12 = MEMORY[0x7FFE03C0];
            if ( *(_DWORD *)(a1 + 256) != v12 )
            {
              RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 44));
              TppAdjustRunningThreadGoalWithLock(a1);
              RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 44));
            }
            v42 = (volatile signed __int64 *)(a1 + 8);
            v13 = *(_DWORD *)(a1 + 8);
            v14 = *(_DWORD *)(a1 + 12);
            v45 = __PAIR64__(v14, v13);
            do
            {
              v15 = v13;
              HIDWORD(v16) = v14;
              v41 = __PAIR64__(v13, v14);
              v47 = (volatile signed __int64 *)(unsigned __int16)v13;
              if ( *(_BYTE *)(a1 + 228) )
                goto LABEL_75;
              if ( v14 && ((v13 & 0x8000u) == 0 || v58) )
              {
                v64 = 0;
                --v14;
                HIDWORD(v45) = HIDWORD(v16) - 1;
              }
              else
              {
                v64 = 1;
                v17 = v13 ^ ((_WORD)v47 + 1);
                v13 ^= v17;
                LODWORD(v45) = v15 ^ v17;
              }
              LODWORD(v16) = v15;
              v18 = _InterlockedCompareExchange64(v42, __SPAIR64__(v14, v13), v16);
              v13 = v18;
              v45 = v18;
              v14 = HIDWORD(v18);
            }
            while ( __PAIR64__(v18, HIDWORD(v18)) != v41 );
            v68 = v64;
            if ( !v64 )
            {
LABEL_24:
              if ( !TppWorkerFindTask(&BaseAddress) )
                goto LABEL_75;
              if ( (DeferredWork.Flags & 1) != 0 )
              {
                TppCallbackSendAndDestroyAlpcMessage((int)v73);
                DeferredWork.Flags &= ~1u;
              }
              v71 = BaseAddress;
              v76 = **(_DWORD **)BaseAddress;
              v77 = BaseAddress;
              v79 = v72;
              ActivityId = NtCurrentTeb()->ActivityId;
              if ( v72 && (*(_BYTE *)(v72 + 268) & 1) == 0 )
              {
                v9 = v78 | 8;
                v78 |= 8u;
                if ( NtCurrentTeb()->IsImpersonating )
                  v78 = v9 | 4;
                if ( (unsigned __int8)TppCheckForTransactions() )
                  v78 = v10 | 0x10;
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                  v78 |= 0x20u;
                if ( NtCurrentTeb()->PreferredLanguages )
                  v78 |= 0x40u;
                if ( NtCurrentTeb()->SavedPriorityState )
                  v78 |= 0x80u;
              }
              ms_exc.registration.TryLevel = 8;
              v11 = **(int (__stdcall ***)(int, int))BaseAddress;
              if ( (char *)v11 == (char *)TppWorkpExecuteCallback )
              {
                TppWorkpExecuteCallback((PTP_CALLBACK_INSTANCE)v73, (int)BaseAddress);
              }
              else if ( v11 == TppTimerpExecuteCallback )
              {
                TppTimerpExecuteCallback((int)v73, (int)BaseAddress);
              }
              else
              {
                ((void (__thiscall *)(int (__stdcall *)(int, int), _BYTE *, PVOID))v11)(v11, v73, BaseAddress);
              }
              goto LABEL_41;
            }
          }
        }
      }
    }
  }
  v67 = 1;
  v66 = 1;
  goto LABEL_6;
}
