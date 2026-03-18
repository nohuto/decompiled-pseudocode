/*
 * XREFs of ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0015A70
 * Callers:
 *     UmfdDispatchEscape @ 0x1C00157B0 (UmfdDispatchEscape.c)
 * Callees:
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C012614C (-Create@UmfdTls@@CAPEAV1@XZ.c)
 *     ?UmfdCreateRequestContext@@YAPEAXXZ @ 0x1C0129FF0 (-UmfdCreateRequestContext@@YAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02DF6E8 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 *     ?QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z @ 0x1C02DF720 (-QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z.c)
 */

void __fastcall UmfdEscSendCompleteWaitReceive(volatile void **a1)
{
  volatile void **v1; // r12
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rsi
  __int64 *ThreadWin32Thread; // rax
  struct UmfdTls *v5; // r15
  struct _KTHREAD *v6; // r14
  __int64 v7; // rsi
  __int64 *v8; // rax
  struct UmfdTls *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  struct _KTHREAD *v12; // r13
  __int64 v13; // rsi
  __int64 *v14; // rax
  struct UmfdTls *v15; // r13
  int v16; // ecx
  union _SLIST_HEADER **v17; // rbx
  PSLIST_ENTRY *v18; // r14
  PSLIST_ENTRY *RequestContext; // rcx
  PSLIST_ENTRY v20; // rax
  char v21; // cl
  union _SLIST_HEADER *v22; // rsi
  PSLIST_ENTRY v23; // rax
  PSLIST_ENTRY v24; // rbx
  unsigned int v25; // r12d
  int v26; // esi
  struct _KTHREAD *v27; // r14
  __int64 v28; // rsi
  __int64 *v29; // rax
  struct UmfdTls *v30; // rdx
  __int64 v31; // rsi
  int v32; // eax
  __int64 v33; // r13
  int v34; // ecx
  __int64 v35; // rbx
  char v36; // r14
  PSLIST_ENTRY v37; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v41; // rax
  int v42; // ebx
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // ebx
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // ebx
  __int64 v49; // rax
  __int64 v50; // [rsp+30h] [rbp-78h] BYREF
  __int64 v51; // [rsp+38h] [rbp-70h] BYREF
  struct UmfdTls *v52; // [rsp+40h] [rbp-68h]
  CWorkItemQueue **v53; // [rsp+48h] [rbp-60h]
  __int64 v54; // [rsp+50h] [rbp-58h]
  __int64 v55; // [rsp+58h] [rbp-50h]
  int v57; // [rsp+C0h] [rbp+18h]
  PSLIST_ENTRY *pv; // [rsp+C8h] [rbp+20h]

  v1 = a1;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  if ( v3 )
  {
    v5 = *(struct UmfdTls **)(v3 + 352);
    v52 = v5;
    if ( v5 || (v5 = UmfdTls::Create(), *(_QWORD *)(v3 + 352) = v5, (v52 = v5) != 0LL) )
    {
      *((_QWORD *)v5 + 6) = 0LL;
      *((_QWORD *)v5 + 5) = 0LL;
      if ( *((int *)v5 + 8) >= 0 )
      {
        v6 = KeGetCurrentThread();
        v7 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (v41 = PsGetCurrentProcess(),
              v42 = PsGetProcessSessionIdEx(v41),
              v43 = PsGetCurrentThreadProcess(),
              v42 == (unsigned int)PsGetProcessSessionIdEx(v43)) )
        {
          v8 = (__int64 *)PsGetThreadWin32Thread(v6);
          if ( v8 )
            v7 = *v8;
        }
        if ( !v7 )
          goto LABEL_102;
        v9 = *(struct UmfdTls **)(v7 + 352);
        if ( !v9 )
        {
          v9 = UmfdTls::Create();
          *(_QWORD *)(v7 + 352) = v9;
          if ( !v9 )
            goto LABEL_102;
        }
        v10 = *((_QWORD *)v9 + 3);
        if ( v10 && **(_QWORD **)v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
      }
      v11 = *((int *)v1 + 10);
      v12 = KeGetCurrentThread();
      v13 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v44 = PsGetCurrentProcess(),
            v45 = PsGetProcessSessionIdEx(v44),
            v46 = PsGetCurrentThreadProcess(),
            v45 == (unsigned int)PsGetProcessSessionIdEx(v46)) )
      {
        v14 = (__int64 *)PsGetThreadWin32Thread(v12);
        if ( v14 )
          v13 = *v14;
      }
      if ( !v13
        || (v15 = *(struct UmfdTls **)(v13 + 352)) == 0LL
        && (v15 = UmfdTls::Create(), (*(_QWORD *)(v13 + 352) = v15) == 0LL) )
      {
LABEL_102:
        v26 = -1073741801;
        goto LABEL_77;
      }
      if ( (unsigned int)v11 <= 3 )
      {
        v16 = *((_DWORD *)v15 + 2);
        if ( v16 == -1 )
        {
          *((_DWORD *)v15 + 2) = v11;
LABEL_23:
          _mm_lfence();
          v17 = (union _SLIST_HEADER **)g_pUmfdServerPort[v11];
          v53 = (CWorkItemQueue **)v17;
          if ( !v17 )
          {
            v26 = -1073740032;
            goto LABEL_77;
          }
          v18 = (PSLIST_ENTRY *)*((_QWORD *)v15 + 2);
          if ( v18 )
          {
            RequestContext = (PSLIST_ENTRY *)*((_QWORD *)v15 + 2);
            pv = RequestContext;
          }
          else
          {
            RequestContext = (PSLIST_ENTRY *)UmfdCreateRequestContext();
            pv = RequestContext;
            if ( !RequestContext )
              goto LABEL_102;
          }
          v50 = 0LL;
          v20 = 0LL;
          if ( v18 )
          {
            v20 = *v18;
            if ( !*v18 )
            {
              v26 = -1073741811;
              goto LABEL_74;
            }
          }
          if ( RequestContext )
          {
            if ( RequestContext != v18 && *RequestContext )
            {
              v26 = -1073741811;
              goto LABEL_74;
            }
            v21 = 15;
          }
          else
          {
            v21 = 7;
          }
          if ( v21 != 15 )
          {
            v26 = -1073741811;
            goto LABEL_74;
          }
          if ( v20 )
          {
            *((_DWORD *)&v20->Next + 2) = 3;
            KeSetEvent(**(PRKEVENT **)(*((_QWORD *)&v20[2].Next + 1) + 8LL), 1, 0);
            *v18 = 0LL;
          }
          v22 = *v17;
          v23 = ExpInterlockedPopEntrySList(*v17 + 1);
          v24 = v23;
          if ( !v23 )
          {
            if ( LOBYTE(v22->Alignment) )
            {
LABEL_39:
              if ( !v24 )
              {
LABEL_73:
                v26 = -1073741823;
                goto LABEL_74;
              }
              v25 = *((_DWORD *)&v24[1].Next + 3);
              if ( v25 <= 8 )
              {
                *pv = v24;
                memmove(&v50, v24[1].Next, v25);
                v26 = 0;
                if ( v25 == 8 )
                {
                  if ( !v18 )
                    *((_QWORD *)v15 + 2) = pv;
                  *((_QWORD *)v15 + 3) = v50;
LABEL_45:
                  if ( v26 < 0 )
                    goto LABEL_76;
                  v54 = 0LL;
                  v55 = 0LL;
                  v27 = KeGetCurrentThread();
                  v28 = 0LL;
                  if ( !(unsigned __int8)KeIsAttachedProcess()
                    || (v47 = PsGetCurrentProcess(),
                        v48 = PsGetProcessSessionIdEx(v47),
                        v49 = PsGetCurrentThreadProcess(),
                        v48 == (unsigned int)PsGetProcessSessionIdEx(v49)) )
                  {
                    v29 = (__int64 *)PsGetThreadWin32Thread(v27);
                    if ( v29 )
                      v28 = *v29;
                  }
                  if ( !v28
                    || (v30 = *(struct UmfdTls **)(v28 + 352)) == 0LL
                    && (v30 = UmfdTls::Create(), (*(_QWORD *)(v28 + 352) = v30) == 0LL) )
                  {
                    v1 = a1;
                    goto LABEL_102;
                  }
                  v31 = *((_QWORD *)v30 + 3);
                  if ( !v31 )
                  {
                    v26 = -1073740032;
                    v1 = a1;
                    goto LABEL_77;
                  }
                  v51 = 0LL;
                  v32 = (*(__int64 (__fastcall **)(__int64, struct UmfdTls *, __int64 *))(*(_QWORD *)v31 + 24LL))(
                          v31,
                          v30,
                          &v51);
                  if ( v32 < 0 )
                  {
                    v33 = v54;
                    v34 = 0;
                    v35 = v55;
                    v36 = 0;
                  }
                  else
                  {
                    v33 = v51;
                    v34 = *(_DWORD *)(v31 + 8);
                    v35 = *(_QWORD *)(v31 + 24);
                    v36 = *(_BYTE *)(v31 + 32);
                  }
                  v26 = v32;
                  v57 = v34;
                  if ( v32 < 0 )
                  {
LABEL_76:
                    v1 = a1;
                  }
                  else
                  {
                    v1 = a1;
                    ProbeForWrite(a1[1], 8uLL, 4u);
                    ProbeForWrite(a1[2], 4uLL, 4u);
                    ProbeForWrite(a1[4], 1uLL, 1u);
                    *(_QWORD *)a1[1] = v33;
                    *(_DWORD *)a1[2] = v57;
                    *(_BYTE *)a1[4] = v36;
                    if ( v36 )
                    {
                      ProbeForWrite(a1[3], 8uLL, 4u);
                      *(_QWORD *)a1[3] = v35;
                    }
                  }
                  if ( v26 >= 0 )
                  {
LABEL_58:
                    *((_DWORD *)v1 + 2) = v26;
                    *((_DWORD *)v5 + 8) = v26;
                    return;
                  }
LABEL_77:
                  *((_QWORD *)v5 + 6) = 0LL;
                  *((_QWORD *)v5 + 5) = 0LL;
                  goto LABEL_58;
                }
                goto LABEL_73;
              }
              if ( CWorkItemQueue::QueueWorkItem(*v53, (struct CWorkItemQueue::CWorkItem *const)v24) )
              {
                v26 = -1073741789;
              }
              else
              {
                CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel((CMultipleConsumerWorkQueue::CWaitableWorkItem *)v24);
                v26 = -1073740032;
              }
LABEL_74:
              if ( !v18 )
                EngFreeMem(pv);
              goto LABEL_45;
            }
            while ( 1 )
            {
              if ( KeWaitForSingleObject(*(PVOID *)v22->Region, UserRequest, 1, 0, 0LL) == 192 )
              {
                KeSetEvent(*(PRKEVENT *)v22->Region, 1, 0);
                v23 = ExpInterlockedPopEntrySList(v22 + 1);
                v24 = v23;
                if ( !v23 )
                  goto LABEL_39;
                goto LABEL_38;
              }
              v23 = ExpInterlockedPopEntrySList(v22 + 1);
              v24 = v23;
              if ( v23 )
                goto LABEL_38;
              if ( LOBYTE(v22->Alignment) )
                break;
              KeResetEvent(*(PRKEVENT *)v22->Region);
              v37 = ExpInterlockedPopEntrySList(v22 + 1);
              v24 = v37;
              if ( v37 )
              {
                *((_DWORD *)&v37->Next + 2) = 2;
                KeSetEvent(*(PRKEVENT *)v22->Region, 1, 0);
                goto LABEL_39;
              }
              if ( LOBYTE(v22->Alignment) )
              {
                KeSetEvent(*(PRKEVENT *)v22->Region, 1, 0);
                break;
              }
            }
            v23 = ExpInterlockedPopEntrySList(v22 + 1);
            v24 = v23;
            if ( !v23 )
              goto LABEL_39;
          }
LABEL_38:
          *((_DWORD *)&v23->Next + 2) = 2;
          goto LABEL_39;
        }
        if ( v16 == (_DWORD)v11 )
          goto LABEL_23;
      }
      v26 = -1073741811;
      goto LABEL_77;
    }
  }
  *((_DWORD *)v1 + 2) = -1073741801;
}
