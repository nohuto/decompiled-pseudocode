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
  struct _PEB *v1; // esi
  _LIST_ENTRY *Blink; // ecx
  _DWORD *v3; // ebx
  int v4; // esi
  _DWORD *Heap; // eax
  int v6; // eax
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
  int (__stdcall *v19)(int, int, int, int); // ebx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  void *v24; // edx
  int *v25; // ecx
  _DWORD *v26; // ecx
  unsigned int v27; // ebx
  unsigned int v28; // ecx
  signed __int64 v29; // rax
  int (__stdcall ***v30)(int, int); // ecx
  int (__stdcall ****v31)(int, int); // edx
  unsigned int v32; // ecx
  bool v33; // bl
  unsigned int v34; // [esp+2Ch] [ebp-178h]
  int v35; // [esp+34h] [ebp-170h] BYREF
  int (__stdcall **v36)(int, int); // [esp+38h] [ebp-16Ch] BYREF
  unsigned __int64 v37; // [esp+3Ch] [ebp-168h]
  volatile signed __int64 *v38; // [esp+44h] [ebp-160h]
  int v39; // [esp+48h] [ebp-15Ch] BYREF
  unsigned __int64 v40; // [esp+60h] [ebp-144h]
  unsigned __int64 v41; // [esp+68h] [ebp-13Ch]
  void *v42; // [esp+70h] [ebp-134h] BYREF
  volatile signed __int64 *v43; // [esp+74h] [ebp-130h]
  _DWORD *v44; // [esp+78h] [ebp-12Ch] BYREF
  int v45; // [esp+7Ch] [ebp-128h] BYREF
  __int16 v46; // [esp+80h] [ebp-124h] BYREF
  struct _PEB *v47; // [esp+84h] [ebp-120h]
  _DWORD *v48; // [esp+88h] [ebp-11Ch]
  HANDLE Handle; // [esp+8Ch] [ebp-118h] BYREF
  int v50; // [esp+90h] [ebp-114h]
  int v51; // [esp+94h] [ebp-110h]
  int (__stdcall ***v52)(int, int); // [esp+98h] [ebp-10Ch] BYREF
  int v53; // [esp+9Ch] [ebp-108h]
  bool v54; // [esp+A3h] [ebp-101h]
  int v55; // [esp+A4h] [ebp-100h]
  char v56; // [esp+ABh] [ebp-F9h]
  char v57; // [esp+ACh] [ebp-F8h]
  char v58; // [esp+ADh] [ebp-F7h]
  char v59; // [esp+AEh] [ebp-F6h]
  char v60; // [esp+AFh] [ebp-F5h]
  char v61; // [esp+B0h] [ebp-F4h]
  char v62; // [esp+B1h] [ebp-F3h]
  char v63; // [esp+B2h] [ebp-F2h]
  char v64; // [esp+B3h] [ebp-F1h] BYREF
  _DWORD v65[53]; // [esp+B4h] [ebp-F0h] BYREF
  CPPEH_RECORD ms_exc; // [esp+18Ch] [ebp-18h]

  v42 = 0;
  v55 = a1;
  v59 = 0;
  v58 = 0;
  v62 = 0;
  v63 = 0;
  v57 = 0;
  v64 = 0;
  v61 = 0;
  v56 = 0;
  v44 = 0;
  v53 = 0;
  RtlRegisterThreadWithCsrss();
  v47 = NtCurrentPeb();
  ms_exc.registration.TryLevel = 0;
  TppCritSetThread(&v42);
  TppAllocThreadData(&v44);
  if ( v44 )
    *v44 = v65;
  memset(v65, 0, sizeof(v65));
  ms_exc.registration.TryLevel = 2;
  RtlAcquireSRWLockShared((volatile signed __int32 *)(a1 + 224));
  ms_exc.registration.TryLevel = 3;
  if ( *(_BYTE *)(a1 + 229) )
  {
    v51 = -1073741558;
  }
  else
  {
    v51 = NtWorkerFactoryWorkerReady(*(_DWORD *)(a1 + 36));
    if ( v51 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v63 = 1;
LABEL_6:
      ms_exc.registration.TryLevel = 2;
      RtlReleaseSRWLockShared((volatile signed __int32 *)(a1 + 224));
      if ( v62 )
        goto LABEL_75;
      TppPoolAddWorker(a1, v65);
      v57 = 1;
      v1 = v47;
      RtlAcquireSRWLockExclusive(&v47->TppWorkerpListLock);
      ms_exc.registration.TryLevel = 4;
      Blink = v1->TppWorkerpList.Blink;
      if ( Blink->Flink != &v1->TppWorkerpList )
        goto LABEL_106;
      v65[0] = &v1->TppWorkerpList;
      v65[1] = Blink;
      Blink->Flink = (_LIST_ENTRY *)v65;
      v1->TppWorkerpList.Blink = (_LIST_ENTRY *)v65;
      v58 = 1;
      ms_exc.registration.TryLevel = 2;
      RtlReleaseSRWLockExclusive(&v47->TppWorkerpListLock);
      memset(&v65[7], 0, 0x98u);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 248));
      v59 = 1;
      TppGetCurrentThreadNumaNode((_DWORD *)a1, &v65[50], 0);
      while ( 1 )
      {
        v53 = 0;
        memset(&v65[45], 0, 16);
        v3 = (_DWORD *)v65[49];
        v50 = 16;
        if ( v65[49] )
        {
          if ( *(_DWORD *)(v65[49] + 4) != 1 )
            goto LABEL_107;
          v4 = v65[49];
          memset(*(void **)v65[49], 0, 28 * *(_DWORD *)(v65[49] + 8));
          v50 = *(_DWORD *)(v4 + 8);
          Heap = (_DWORD *)*v3;
        }
        else
        {
          Heap = (_DWORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 3145728) | 8, 460);
          if ( !Heap )
          {
LABEL_107:
            v50 = 1;
            Heap = &v65[45];
            goto LABEL_12;
          }
          Heap[112] = Heap;
          Heap[113] = 1;
          Heap[114] = 16;
          v65[49] = Heap + 112;
          v50 = 16;
        }
LABEL_12:
        v48 = Heap;
        v45 = 0;
        ms_exc.registration.TryLevel = 5;
        v6 = NtWaitForWorkViaWorkerFactory(*(_DWORD *)(a1 + 36), Heap, v50, &v45, &v65[37]);
        v51 = v6;
        ms_exc.registration.TryLevel = 2;
        if ( v6 )
          v45 = 0;
        if ( (v65[40] & 1) != 0 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v65[37]);
          v65[40] &= ~1u;
          v6 = v51;
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
              v56 = 1;
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
            RtlAcquireSRWLockExclusive(a1 + 44);
            TppAdjustRunningThreadGoalWithLock(a1);
            RtlReleaseSRWLockExclusive(a1 + 44);
          }
          if ( (unsigned __int8)TppPrepareDirectParams(v45, v50, a1, &v64) )
            goto LABEL_75;
          if ( !v64 )
          {
            v8 = v65[45];
            if ( !v65[45] )
              goto LABEL_24;
            v65[19] = *(_DWORD *)(v65[45] + 32);
            v65[20] = v65[45];
            TppWorkerSwitchNode(*(_DWORD *)(v65[45] + 36), *(_BYTE *)(v65[45] + 40));
            TppCallbackCheckThreadBeforeCallback(&v65[7]);
            ms_exc.registration.TryLevel = 7;
            v19 = *(int (__stdcall **)(int, int, int, int))(v8 + 32);
            if ( v19 == TppAlpcpExecuteCallback )
            {
              TppAlpcpExecuteCallback(&v65[7], v8, v65[46], &v65[47]);
              goto LABEL_41;
            }
            if ( v19 == TppTimerQueueExpiration )
            {
              TppTimerQueueExpiration((int)&v65[7], v8, v65[46], (int)&v65[47]);
LABEL_41:
              ms_exc.registration.TryLevel = 2;
              goto LABEL_42;
            }
            if ( v19 == TppWaitCompletion )
            {
              TppWaitCompletion((int)&v65[7], v8, v65[46], (int)&v65[47]);
              goto LABEL_41;
            }
            ((void (__thiscall *)(int (__stdcall *)(int, int, int, int), _DWORD *, int, _DWORD, _DWORD *))v19)(
              v19,
              &v65[7],
              v8,
              v65[46],
              &v65[47]);
            ms_exc.registration.TryLevel = 2;
LABEL_42:
            if ( (v65[17] & 4) != 0 )
              v61 = 1;
            v54 = v65[16] == 4;
            ms_exc.registration.TryLevel = 9;
            TppCallbackEpilog(&v65[7]);
            ms_exc.registration.TryLevel = 2;
            v65[4] = 0;
            if ( v61 )
            {
              v43 = (volatile signed __int64 *)(a1 + 8);
              v27 = *(_DWORD *)(a1 + 8);
              v28 = *(_DWORD *)(a1 + 12);
              v40 = __PAIR64__(v28, v27);
              do
              {
                v52 = (int (__stdcall ***)(int, int))v27;
                v34 = v28;
                v29 = _InterlockedCompareExchange64(
                        v43,
                        __SPAIR64__(v28, v27 ^ (unsigned __int16)(v27 ^ (v27 + 1))),
                        __SPAIR64__(v28, v27));
                v27 = v29;
                v40 = v29;
                v28 = HIDWORD(v29);
              }
              while ( v29 != __PAIR64__(v34, (unsigned int)v52) );
              v39 = 3;
              ZwSetInformationWorkerFactory(*(_DWORD *)(a1 + 36), 9, &v39, 4);
LABEL_75:
              ms_exc.registration.TryLevel = 1;
              if ( (v65[40] & 1) != 0 )
              {
                TppCallbackSendAndDestroyAlpcMessage(&v65[7]);
                v65[40] &= ~1u;
              }
              if ( v59 )
                _InterlockedDecrement((volatile signed __int32 *)(a1 + 248));
              if ( v58 )
              {
                RtlAcquireSRWLockExclusive(&v47->TppWorkerpListLock);
                ms_exc.registration.TryLevel = 10;
                v22 = v65[0];
                v23 = v65[1];
                if ( *(_DWORD **)(v65[0] + 4) == v65 && *(_DWORD **)v65[1] == v65 )
                {
                  *(_DWORD *)v65[1] = v65[0];
                  *(_DWORD *)(v22 + 4) = v23;
                  ms_exc.registration.TryLevel = 1;
                  RtlReleaseSRWLockExclusive(&v47->TppWorkerpListLock);
                  goto LABEL_86;
                }
LABEL_106:
                __fastfail(3u);
              }
LABEL_86:
              if ( v57 )
              {
                TppPoolRemoveWorker(v65, 1261133755);
                if ( v56 )
                {
                  RtlAcquireSRWLockExclusive(a1 + 44);
                  if ( (*(_DWORD *)(a1 + 268) & 0xFFE) != 0
                    && (v52 = (int (__stdcall ***)(int, int))RtlAllocateHeap(
                                                               NtCurrentPeb()->ProcessHeap,
                                                               (TppHeapTag + 786432) | 8,
                                                               12)) != 0 )
                  {
                    if ( (int)ZwDuplicateObject(-1, -2, -1, &v36, 0, 0, 2) < 0 )
                    {
                      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v52);
                      goto LABEL_89;
                    }
                    v30 = v52;
                    v52[2] = v36;
                    v31 = *(int (__stdcall *****)(int, int))(a1 + 284);
                    if ( *v31 != (int (__stdcall ***)(int, int))(a1 + 280) )
                      __fastfail(3u);
                    *v30 = (int (__stdcall **)(int, int))(a1 + 280);
                    v30[1] = (int (__stdcall **)(int, int))v31;
                    *v31 = v30;
                    *(_DWORD *)(a1 + 284) = v30;
                    v32 = *(_DWORD *)(a1 + 268) ^ (*(_DWORD *)(a1 + 268) ^ ((*(_DWORD *)(a1 + 268) & 0xFFFFF000) + 4096)) & 0x7FF000;
                    *(_DWORD *)(a1 + 268) = v32;
                    v33 = ((v32 ^ (v32 >> 11)) & 0xFFE) == 0;
                    RtlReleaseSRWLockExclusive(a1 + 44);
                    if ( v33 )
                      RtlWakeConditionVariable(a1 + 276);
                  }
                  else
                  {
LABEL_89:
                    RtlReleaseSRWLockExclusive(a1 + 44);
                  }
                }
              }
              if ( v63 )
              {
                if ( a1 == TppPoolpGlobalPool )
                {
                  v24 = &TppPoolpGlobalPoolLock;
                  v25 = &TppPoolpGlobalPool;
                  goto LABEL_93;
                }
                if ( a1 == TppPoolpSerializedPool )
                {
                  v24 = &TppPoolpSerializedPoolLock;
                  v25 = &TppPoolpSerializedPool;
LABEL_93:
                  TppPoolpDereferenceGlobalPool((signed __int32 **)v25, (int)v24);
                }
                else if ( !_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) )
                {
                  TppPoolpFree(a1);
                }
              }
              ms_exc.registration.TryLevel = 0;
              Handle = v42;
              if ( v42 )
              {
                ZwSetInformationThread(-2, 5, &Handle, 4);
                v35 = 0;
                ZwSetInformationThread(-2, 18, &v35, 4);
                v46 = 0;
                ZwSetInformationObject(Handle, 4, &v46, 2);
                NtClose(Handle);
                Handle = 0;
                ZwSetInformationThread(-2, 5, &Handle, 4);
              }
              TppFreeThreadData(v44, 1261133767);
              v26 = (_DWORD *)v65[49];
              if ( v65[49] && !_InterlockedDecrement((volatile signed __int32 *)(v65[49] + 4)) )
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *v26);
              v51 = 0;
              RtlExitUserThread(0);
            }
            v12 = *(_DWORD *)(a1 + 272);
            if ( !v12 )
              v12 = MEMORY[0x7FFE03C0];
            if ( *(_DWORD *)(a1 + 256) != v12 )
            {
              RtlAcquireSRWLockExclusive(a1 + 44);
              TppAdjustRunningThreadGoalWithLock(a1);
              RtlReleaseSRWLockExclusive(a1 + 44);
            }
            v38 = (volatile signed __int64 *)(a1 + 8);
            v13 = *(_DWORD *)(a1 + 8);
            v14 = *(_DWORD *)(a1 + 12);
            v41 = __PAIR64__(v14, v13);
            do
            {
              v15 = v13;
              HIDWORD(v16) = v14;
              v37 = __PAIR64__(v13, v14);
              v43 = (volatile signed __int64 *)(unsigned __int16)v13;
              if ( *(_BYTE *)(a1 + 228) )
                goto LABEL_75;
              if ( v14 && ((v13 & 0x8000u) == 0 || v54) )
              {
                v60 = 0;
                --v14;
                HIDWORD(v41) = HIDWORD(v16) - 1;
              }
              else
              {
                v60 = 1;
                v17 = v13 ^ ((_WORD)v43 + 1);
                v13 ^= v17;
                LODWORD(v41) = v15 ^ v17;
              }
              LODWORD(v16) = v15;
              v18 = _InterlockedCompareExchange64(v38, __SPAIR64__(v14, v13), v16);
              v13 = v18;
              v41 = v18;
              v14 = HIDWORD(v18);
            }
            while ( __PAIR64__(v18, HIDWORD(v18)) != v37 );
            v64 = v60;
            if ( !v60 )
            {
LABEL_24:
              if ( !TppWorkerFindTask(&v52) )
                goto LABEL_75;
              if ( (v65[40] & 1) != 0 )
              {
                TppCallbackSendAndDestroyAlpcMessage(&v65[7]);
                v65[40] &= ~1u;
              }
              v65[4] = v52;
              v65[19] = **v52;
              v65[20] = v52;
              v65[25] = v65[6];
              *(_GUID *)&v65[41] = NtCurrentTeb()->ActivityId;
              if ( v65[6] && (*(_BYTE *)(v65[6] + 268) & 1) == 0 )
              {
                v9 = v65[21] | 8;
                v65[21] |= 8u;
                if ( NtCurrentTeb()->IsImpersonating )
                  v65[21] = v9 | 4;
                if ( (unsigned __int8)TppCheckForTransactions() )
                  v65[21] = v10 | 0x10;
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                  v65[21] |= 0x20u;
                if ( NtCurrentTeb()->PreferredLanguages )
                  v65[21] |= 0x40u;
                if ( NtCurrentTeb()->SavedPriorityState )
                  v65[21] |= 0x80u;
              }
              ms_exc.registration.TryLevel = 8;
              v11 = **v52;
              if ( v11 == TppWorkpExecuteCallback )
              {
                TppWorkpExecuteCallback(&v65[7], v52);
              }
              else if ( v11 == TppTimerpExecuteCallback )
              {
                TppTimerpExecuteCallback((int)&v65[7], (int)v52);
              }
              else
              {
                ((void (__thiscall *)(int (__stdcall *)(int, int), _DWORD *, int (__stdcall ***)(int, int)))v11)(
                  v11,
                  &v65[7],
                  v52);
              }
              goto LABEL_41;
            }
          }
        }
      }
    }
  }
  v63 = 1;
  v62 = 1;
  goto LABEL_6;
}
