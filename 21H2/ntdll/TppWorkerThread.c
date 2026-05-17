/*
 * XREFs of TppWorkerThread @ 0x18004D110
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
 *     TppCallbackEpilog @ 0x18004DD30 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18004E04C (TppCallbackCheckThreadAfterCallback.c)
 *     TppPrepareDirectParams @ 0x18004E250 (TppPrepareDirectParams.c)
 *     TppWorkerFindTask @ 0x18004E664 (TppWorkerFindTask.c)
 *     TppCheckForTransactions @ 0x18004E980 (TppCheckForTransactions.c)
 *     TppAllocThreadData @ 0x18004E9D0 (TppAllocThreadData.c)
 *     TppCritSetThread @ 0x18004EA64 (TppCritSetThread.c)
 *     RtlRegisterThreadWithCsrss @ 0x18004EB00 (RtlRegisterThreadWithCsrss.c)
 *     TppPoolAddWorker @ 0x18004EBB0 (TppPoolAddWorker.c)
 *     RtlExitUserThread @ 0x18004EC30 (RtlExitUserThread.c)
 *     TppFreeDirectParamsCache @ 0x18004ED1C (TppFreeDirectParamsCache.c)
 *     TppFreeThreadData @ 0x18004ED68 (TppFreeThreadData.c)
 *     TppCritResetThread @ 0x18004EDB4 (TppCritResetThread.c)
 *     TppPoolRemoveWorker @ 0x18004EE54 (TppPoolRemoveWorker.c)
 *     TppPoolUpdateTrimmedWorker @ 0x18004EEB0 (TppPoolUpdateTrimmedWorker.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18004F030 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TppPoolpFree @ 0x18004F4CC (TppPoolpFree.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtWorkerFactoryWorkerReady @ 0x18009D660 (NtWorkerFactoryWorkerReady.c)
 *     NtSetInformationThread @ 0x18009D7E0 (NtSetInformationThread.c)
 *     NtSetInformationWorkerFactory @ 0x1800A0A50 (NtSetInformationWorkerFactory.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x1800A10D0 (ZwWaitForWorkViaWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1160 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A4780 (memset.c)
 *     RtlResetStackOverflow @ 0x1800DE804 (RtlResetStackOverflow.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180111FB0 (TppAdjustRunningThreadGoalWithLock.c)
 *     TppETWWorkerNodeSwitch @ 0x180112DF8 (TppETWWorkerNodeSwitch.c)
 *     TppWorkerpInnerExceptionFilter @ 0x180112EA8 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180112F2C (TppWorkerpOuterExceptionFilter.c)
 */

void __fastcall __noreturn TppWorkerThread(__int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  char v5; // di
  signed __int64 v6; // rax
  unsigned __int64 v7; // rdx
  signed __int64 v8; // rtt
  struct _PEB *v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  _LIST_ENTRY *Blink; // rcx
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  _OWORD *Heap; // rax
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // r14
  int v22; // eax
  unsigned __int64 v23; // rdx
  int v24; // eax
  int v25; // edx
  int v26; // edx
  int v27; // ecx
  int v28; // ecx
  __int64 v29; // rcx
  unsigned __int16 v30; // r15
  unsigned __int16 v31; // r12
  __int64 v32; // rcx
  int v33; // edx
  int v34; // edx
  signed __int64 v35; // rax
  signed __int64 v36; // rtt
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // r9
  struct _PEB *v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rdx
  char v42; // [rsp+31h] [rbp-2C7h] BYREF
  char v43; // [rsp+32h] [rbp-2C6h]
  char v44; // [rsp+33h] [rbp-2C5h]
  char v45; // [rsp+34h] [rbp-2C4h]
  char v46; // [rsp+35h] [rbp-2C3h]
  char v47; // [rsp+36h] [rbp-2C2h]
  char v48; // [rsp+37h] [rbp-2C1h]
  bool v49; // [rsp+38h] [rbp-2C0h]
  int v50; // [rsp+3Ch] [rbp-2BCh]
  int v51; // [rsp+40h] [rbp-2B8h]
  unsigned int v52; // [rsp+44h] [rbp-2B4h]
  int v53; // [rsp+48h] [rbp-2B0h] BYREF
  __int64 v54; // [rsp+50h] [rbp-2A8h]
  struct _PEB *v55; // [rsp+58h] [rbp-2A0h]
  signed __int64 v56; // [rsp+60h] [rbp-298h]
  _OWORD *v57; // [rsp+68h] [rbp-290h]
  signed __int64 v58; // [rsp+70h] [rbp-288h]
  _QWORD *v59; // [rsp+78h] [rbp-280h] BYREF
  int v60; // [rsp+80h] [rbp-278h] BYREF
  int v61; // [rsp+88h] [rbp-270h] BYREF
  __int64 v62; // [rsp+90h] [rbp-268h] BYREF
  void (__fastcall ***v63)(char *); // [rsp+98h] [rbp-260h] BYREF
  int v64; // [rsp+A4h] [rbp-254h]
  __int64 v65; // [rsp+B8h] [rbp-240h]
  __int64 v66; // [rsp+C0h] [rbp-238h]
  __int64 v67; // [rsp+C8h] [rbp-230h]
  struct _TEB *v68; // [rsp+E0h] [rbp-218h]
  struct _TEB *v69; // [rsp+E8h] [rbp-210h]
  struct _TEB *v70; // [rsp+F0h] [rbp-208h]
  struct _TEB *v71; // [rsp+F8h] [rbp-200h]
  struct _TEB *v72; // [rsp+108h] [rbp-1F0h]
  struct _TEB *v73; // [rsp+110h] [rbp-1E8h]
  struct _TEB *v74; // [rsp+118h] [rbp-1E0h]
  struct _TEB *v75; // [rsp+120h] [rbp-1D8h]
  __int64 v76; // [rsp+138h] [rbp-1C0h]
  _OWORD v77[23]; // [rsp+140h] [rbp-1B8h] BYREF
  _QWORD v78[2]; // [rsp+2B0h] [rbp-48h] BYREF

  v56 = a1;
  v62 = 0LL;
  v54 = a1;
  v43 = 0;
  v44 = 0;
  v47 = 0;
  v45 = 0;
  v42 = 0;
  v48 = 0;
  v46 = 0;
  v59 = 0LL;
  v50 = 0;
  RtlRegisterThreadWithCsrss();
  v55 = NtCurrentPeb();
  TppCritSetThread(&v62);
  TppAllocThreadData(&v59);
  if ( v59 )
    *v59 = v77;
  memset(v77, 0, 0x168uLL);
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 368), v2, v3, v4);
  if ( *(_BYTE *)(a1 + 377) )
  {
    v51 = -1073741558;
  }
  else
  {
    v66 = *(_QWORD *)(a1 + 56);
    v51 = NtWorkerFactoryWorkerReady();
    if ( v51 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v5 = v47;
LABEL_17:
      RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 368));
      if ( v5 )
        goto LABEL_105;
      TppPoolAddWorker(a1, v77);
      v45 = 1;
      v9 = v55;
      RtlAcquireSRWLockExclusive((unsigned __int64)&v55->TppWorkerpListLock, v10, v11, v12);
      Blink = v55->TppWorkerpList.Blink;
      if ( Blink->Flink != &v55->TppWorkerpList )
        __fastfail(3u);
      *(_QWORD *)&v77[0] = &v55->TppWorkerpList;
      *((_QWORD *)&v77[0] + 1) = Blink;
      Blink->Flink = (_LIST_ENTRY *)v77;
      v9->TppWorkerpList.Blink = (_LIST_ENTRY *)v77;
      v44 = 1;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v9->TppWorkerpListLock);
      memset((char *)&v77[3] + 8, 0, 0xF8uLL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
      v43 = 1;
      TppGetCurrentThreadNumaNode(a1, (_DWORD *)&v77[21] + 2, 0LL);
      while ( 1 )
      {
LABEL_21:
        v50 = 0;
        memset(&v77[19], 0, 32);
        v14 = *(_QWORD **)&v77[21];
        v52 = 16;
        if ( *(_QWORD *)&v77[21] )
        {
          if ( *(_DWORD *)(*(_QWORD *)&v77[21] + 8LL) != 1 )
            goto LABEL_74;
          v15 = *(_QWORD *)&v77[21];
          memset(**(void ***)&v77[21], 0, 56LL * *(unsigned int *)(*(_QWORD *)&v77[21] + 12LL));
          v52 = *(_DWORD *)(v15 + 12);
          Heap = (_OWORD *)*v14;
        }
        else
        {
          v64 = TppHeapTag + 3145728;
          Heap = (_OWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 3145728) | 8u, 912LL);
          if ( !Heap )
          {
LABEL_74:
            v52 = 1;
            Heap = &v77[19];
            goto LABEL_24;
          }
          *((_QWORD *)Heap + 112) = Heap;
          *((_DWORD *)Heap + 226) = 1;
          *((_DWORD *)Heap + 227) = 16;
          *(_QWORD *)&v77[21] = Heap + 56;
          v52 = 16;
        }
LABEL_24:
        v57 = Heap;
        v53 = 0;
        v67 = *(_QWORD *)(a1 + 56);
        v17 = ZwWaitForWorkViaWorkerFactory(v67, Heap, v52, &v53, (char *)&v77[16] + 8);
        v51 = v17;
        if ( v17 )
          v53 = 0;
        if ( (BYTE12(v77[17]) & 1) != 0 )
        {
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *((__int64 *)&v77[16] + 1));
          HIDWORD(v77[17]) &= ~1u;
          v17 = v51;
        }
        if ( v17 )
        {
          v27 = v17 - 128;
          if ( !v27 )
            goto LABEL_105;
          v28 = v27 - 64;
          if ( v28 )
          {
            if ( v28 == 66 )
            {
              v46 = 1;
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
          if ( !a1 || (v18 = *(_DWORD *)(a1 + 440)) == 0 )
            v18 = MEMORY[0x7FFE03C0];
          if ( *(_DWORD *)(a1 + 424) != v18 )
          {
            RtlAcquireSRWLockExclusive(a1 + 72, v7, v37, v38);
            TppAdjustRunningThreadGoalWithLock(a1);
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
          }
          if ( (unsigned __int8)TppPrepareDirectParams((unsigned int)v77, (_DWORD)v57, v53, v52, a1, (__int64)&v42) )
            goto LABEL_105;
          if ( !v42 )
          {
            v19 = *(_QWORD *)&v77[19];
            if ( *(_QWORD *)&v77[19] )
            {
              v65 = *(_QWORD *)&v77[19];
              *(_QWORD *)&v77[9] = *(_QWORD *)(*(_QWORD *)&v77[19] + 56LL);
              *((_QWORD *)&v77[9] + 1) = *(_QWORD *)&v77[19];
              v60 = *(unsigned __int8 *)(*(_QWORD *)&v77[19] + 68LL);
              v20 = *(unsigned int *)(*(_QWORD *)&v77[19] + 64LL);
              v21 = DWORD2(v77[21]);
              v22 = *(_DWORD *)(a1 + 428);
              if ( (_DWORD)v20 == DWORD2(v77[21]) )
              {
                if ( v22 == -1 && !LOBYTE(v77[22]) )
                {
                  LOBYTE(v77[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v20));
                }
              }
              else
              {
                if ( v22 == -1 )
                {
                  if ( LOBYTE(v77[22]) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * DWORD2(v77[21])));
                  else
                    LOBYTE(v77[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v20));
                }
                DWORD2(v77[21]) = v20;
                v29 = *(_QWORD *)(a1 + 48);
                v30 = *(_WORD *)(16 * v20 + v29 + 8);
                v31 = *(_WORD *)(v29 + 16 * v21 + 8);
                if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                  v32 = (__int64)NtCurrentPeb()->SharedData + 556;
                else
                  v32 = 2147353478LL;
                if ( *(_BYTE *)v32 )
                  TppETWWorkerNodeSwitch(a1, v21, v20, v31, v30);
                if ( v31 != v30 )
                {
                  v78[1] = v30;
                  v78[0] = 0LL;
                  NtSetInformationThread(-2LL, 30LL, v78, 16LL);
                  NtSetInformationThread(-2LL, 13LL, &v60, 4LL);
                }
              }
              v68 = NtCurrentTeb();
              v77[18] = v68->ActivityId;
              if ( *((_QWORD *)&v77[11] + 1) && (*(_BYTE *)(*((_QWORD *)&v77[11] + 1) + 436LL) & 1) == 0 )
              {
                v33 = LODWORD(v77[10]) | 8;
                LODWORD(v77[10]) |= 8u;
                v69 = NtCurrentTeb();
                if ( v69->IsImpersonating )
                  LODWORD(v77[10]) = v33 | 4;
                if ( (unsigned __int8)TppCheckForTransactions() )
                  LODWORD(v77[10]) = v34 | 0x10;
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                  LODWORD(v77[10]) |= 0x20u;
                v70 = NtCurrentTeb();
                if ( v70->PreferredLanguages )
                  LODWORD(v77[10]) |= 0x40u;
                v71 = NtCurrentTeb();
                if ( v71->SavedPriorityState )
                  LODWORD(v77[10]) |= 0x80u;
              }
              (*(void (__fastcall **)(char *, __int64, _QWORD, _OWORD *))(v19 + 56))(
                (char *)&v77[3] + 8,
                v65,
                *((_QWORD *)&v77[19] + 1),
                &v77[20]);
              goto LABEL_40;
            }
            while ( 1 )
            {
              if ( !(unsigned int)TppWorkerFindTask(a1, v77, &v63) )
                goto LABEL_105;
              if ( (BYTE12(v77[17]) & 1) != 0 )
              {
                TppCallbackSendAndDestroyAlpcMessage((char *)&v77[3] + 8, v7);
                HIDWORD(v77[17]) &= ~1u;
              }
              *(_QWORD *)&v77[2] = v63;
              *(_QWORD *)&v77[9] = **v63;
              *((_QWORD *)&v77[9] + 1) = v63;
              *((_QWORD *)&v77[11] + 1) = *(_QWORD *)&v77[3];
              v72 = NtCurrentTeb();
              v77[18] = v72->ActivityId;
              if ( *(_QWORD *)&v77[3] && (*(_BYTE *)(*(_QWORD *)&v77[3] + 436LL) & 1) == 0 )
              {
                v25 = LODWORD(v77[10]) | 8;
                LODWORD(v77[10]) |= 8u;
                v73 = NtCurrentTeb();
                if ( v73->IsImpersonating )
                  LODWORD(v77[10]) = v25 | 4;
                if ( (unsigned __int8)TppCheckForTransactions() )
                  LODWORD(v77[10]) = v26 | 0x10;
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                  LODWORD(v77[10]) |= 0x20u;
                v74 = NtCurrentTeb();
                if ( v74->PreferredLanguages )
                  LODWORD(v77[10]) |= 0x40u;
                v75 = NtCurrentTeb();
                if ( v75->SavedPriorityState )
                  LODWORD(v77[10]) |= 0x80u;
              }
              (**v63)((char *)&v77[3] + 8);
LABEL_40:
              if ( (BYTE4(v77[8]) & 4) != 0 )
                v48 = 1;
              v49 = LODWORD(v77[8]) == 4;
              TppCallbackEpilog((char *)&v77[3] + 8);
              *(_QWORD *)&v77[2] = 0LL;
              if ( v48 )
                break;
              v24 = *(_DWORD *)(a1 + 440);
              if ( !v24 )
                v24 = MEMORY[0x7FFE03C0];
              if ( *(_DWORD *)(a1 + 424) != v24 )
              {
                RtlAcquireSRWLockExclusive(a1 + 72, v23, v37, v38);
                TppAdjustRunningThreadGoalWithLock(a1);
                RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
              }
              _m_prefetchw((const void *)(a1 + 8));
              v6 = *(_QWORD *)(a1 + 8);
              v58 = v6;
              do
              {
                v7 = (unsigned __int16)v6;
                if ( *(_BYTE *)(a1 + 376) )
                  goto LABEL_105;
                if ( HIDWORD(v6) && ((v6 & 0x8000u) == 0LL || v49) )
                {
                  LOBYTE(v37) = 0;
                  HIDWORD(v58) = HIDWORD(v6) - 1;
                }
                else
                {
                  LOBYTE(v37) = 1;
                  LODWORD(v58) = v6 ^ (unsigned __int16)(v6 ^ (v6 + 1));
                }
                v8 = v6;
                v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v58, v6);
                v58 = v6;
              }
              while ( v8 != v6 );
              v42 = v37;
              if ( (_BYTE)v37 )
                goto LABEL_21;
            }
            _m_prefetchw((const void *)(a1 + 8));
            v35 = *(_QWORD *)(a1 + 8);
            v56 = v35;
            do
            {
              LODWORD(v56) = v35 ^ (unsigned __int16)(v35 ^ (v35 + 1));
              v36 = v35;
              v35 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v56, v35);
              v56 = v35;
            }
            while ( v36 != v35 );
            v61 = 3;
            v76 = *(_QWORD *)(a1 + 56);
            NtSetInformationWorkerFactory(v76, 9LL, &v61);
LABEL_105:
            if ( (BYTE12(v77[17]) & 1) != 0 )
            {
              TppCallbackSendAndDestroyAlpcMessage((char *)&v77[3] + 8, v7);
              HIDWORD(v77[17]) &= ~1u;
            }
            if ( v43 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
            if ( v44 )
            {
              v39 = v55;
              RtlAcquireSRWLockExclusive((unsigned __int64)&v55->TppWorkerpListLock, v7, v37, v38);
              v40 = *((_QWORD *)&v77[0] + 1);
              v41 = *(_QWORD *)&v77[0];
              if ( *(_OWORD **)(*(_QWORD *)&v77[0] + 8LL) != v77 || **((_OWORD ***)&v77[0] + 1) != v77 )
                __fastfail(3u);
              **((_QWORD **)&v77[0] + 1) = *(_QWORD *)&v77[0];
              *(_QWORD *)(v41 + 8) = v40;
              RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v39->TppWorkerpListLock);
            }
            if ( v45 )
            {
              TppPoolRemoveWorker(v77, v7);
              if ( v46 )
                TppPoolUpdateTrimmedWorker(a1);
            }
            if ( a1 == TppPoolpGlobalPool )
            {
              TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
            }
            else if ( a1 == TppPoolpSerializedPool )
            {
              TppPoolpDereferenceGlobalPool((const void **)&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
            }
            else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
            {
              TppPoolpFree(a1);
            }
            TppCritResetThread(v62, v7);
            TppFreeThreadData(v59);
            TppFreeDirectParamsCache(v77);
            v51 = 0;
            RtlExitUserThread(0LL);
          }
        }
      }
    }
  }
  v5 = 1;
  v47 = 1;
  goto LABEL_17;
}
