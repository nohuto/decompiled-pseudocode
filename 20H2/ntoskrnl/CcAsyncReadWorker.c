/*
 * XREFs of CcAsyncReadWorker @ 0x1403B6310
 * Callers:
 *     CcAsyncReadWorkerThread @ 0x1404EAA30 (CcAsyncReadWorkerThread.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     CcPostWorkQueueAsyncRead @ 0x140248F44 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x140249148 (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcCompleteAsyncRead @ 0x140249324 (CcCompleteAsyncRead.c)
 *     CcFindNextWorkQueueEntry @ 0x140249F98 (CcFindNextWorkQueueEntry.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x14024B4B4 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     CcAsyncReadPrefetch @ 0x14024B6A8 (CcAsyncReadPrefetch.c)
 *     CcFreeWorkQueueEntry @ 0x14029EB6C (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x14029EBDC (CcDereferencePartition.c)
 *     ExQueueWorkItemToPartition @ 0x1402D4564 (ExQueueWorkItemToPartition.c)
 *     KeWaitForMultipleObjects @ 0x1402DCE40 (KeWaitForMultipleObjects.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall CcAsyncReadWorker(_DWORD *StartContext)
{
  unsigned int v1; // eax
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 *v5; // r13
  int v6; // r15d
  __int64 v7; // rax
  __int64 v8; // r14
  void *v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // r14
  _QWORD *v12; // rdx
  _QWORD *v13; // rcx
  _SLIST_ENTRY *NextWorkQueueEntry; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _SLIST_ENTRY *v18; // rcx
  __int64 v19; // r14
  PSLIST_ENTRY v20; // rsi
  _SLIST_ENTRY *Next; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  NTSTATUS v25; // eax
  _SLIST_ENTRY *v26; // rax
  unsigned __int64 v27; // [rsp+40h] [rbp-C0h]
  unsigned int v28; // [rsp+48h] [rbp-B8h]
  unsigned int v29; // [rsp+4Ch] [rbp-B4h]
  __int64 v30; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h]
  PVOID Object[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v37[64]; // [rsp+E0h] [rbp-20h] BYREF
  PSLIST_ENTRY ListEntry[64]; // [rsp+2E0h] [rbp+1E0h] BYREF

  if ( !StartContext )
    return;
  v1 = StartContext[10];
  v2 = 0LL;
  v3 = (unsigned int)StartContext[9];
  v5 = (__int64 *)*((_QWORD *)StartContext + 7);
  BugCheckParameter2 = 0LL;
  v28 = v1;
  v29 = v3;
  v6 = 3;
  memset(v37, 0, sizeof(v37));
  memset(ListEntry, 0, sizeof(ListEntry));
  v7 = v5[110];
  v33 = 3 * v3;
  v8 = (unsigned int)v3;
  v32 = v3;
  v9 = (void *)(v7 + 24 * v3);
  v27 = (unsigned __int64)v9;
  v30 = v5[111] + 404 * v3;
  Object[0] = v9;
  Object[1] = v5 + 122;
  while ( 1 )
  {
    if ( (unsigned int)v2 >= 0x3F || *(_QWORD *)(v5[108] + 16 * v8) == v5[108] + 16 * v8 )
    {
      if ( (_DWORD)v2 )
      {
        v10 = MmWaitMultipleForCacheManagerPrefetch((__int64)v37, v2, v9);
        v6 = v10 < (unsigned int)v2;
      }
      else
      {
        v25 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
        v10 = v25;
        if ( v25 )
        {
          if ( v25 == 1 )
            v6 = 2;
        }
        else
        {
          v6 = 0;
        }
      }
      v9 = (void *)v27;
    }
    else
    {
      v10 = v2 + 1;
      v6 = 0;
    }
    if ( !v6 )
      break;
    if ( v6 != 1 )
      goto LABEL_45;
    if ( v10 < (unsigned int)v2 )
    {
      _mm_lfence();
      v19 = v10;
      v20 = ListEntry[v19];
      if ( v20 )
      {
        Next = v20[3].Next;
        if ( Next )
        {
          ExFreePoolWithTag(Next, 0x73416343u);
          *((_BYTE *)&v20[7].Next + 8) = 6;
          v20[3].Next = 0LL;
          v37[v10] = 0LL;
          ListEntry[v10] = 0LL;
          if ( *((_DWORD *)&v20[1].Next[32].Next + 2) == 1 && *((_DWORD *)&v20[2].Next + 2) <= 0x20000u )
          {
            CcCompleteAsyncRead((__int64)v20, v22, v23, v24);
            CcFreeWorkQueueEntry(v20);
          }
          else
          {
            CcPostWorkQueueAsyncRead(v20, 0LL);
          }
          v2 = (unsigned int)(v2 - 1);
          while ( v10 < (unsigned int)v2 )
          {
            v37[v19++] = v37[++v10];
            v37[v19 + 63] = ListEntry[v10];
          }
          v9 = (void *)v27;
          v37[v10] = 0LL;
          ListEntry[v10] = 0LL;
          _InterlockedDecrement((volatile signed __int32 *)(v30 + 4LL * v28));
          if ( !v27 )
          {
            v9 = (void *)(v5[110] + 8 * v33);
            v27 = (unsigned __int64)v9;
          }
        }
      }
    }
LABEL_13:
    v8 = v32;
    if ( v28 && !(_DWORD)v2 )
      return;
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v5 + 112), 0LL);
  v11 = 16 * v8;
  while ( 1 )
  {
    v12 = (_QWORD *)(v11 + v5[108]);
    if ( (_QWORD *)*v12 == v12 )
      break;
    if ( (unsigned int)v2 >= 0x3F )
    {
      ExReleasePushLockEx((ULONG_PTR)(v5 + 112), 0LL);
      CcShouldSpinAsyncReadWorkerThread((__int64)v5, &BugCheckParameter2, v29);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v5 + 112), 0LL);
      break;
    }
    NextWorkQueueEntry = (_SLIST_ENTRY *)CcFindNextWorkQueueEntry((__int64)v5, v12);
    ExReleasePushLockEx((ULONG_PTR)(v5 + 112), 0LL);
    if ( !CcAsyncReadPrefetch((__int64)NextWorkQueueEntry) )
      goto LABEL_39;
    v18 = NextWorkQueueEntry[3].Next;
    if ( v18->Next )
    {
      v37[v2] = v18->Next;
      ListEntry[v2] = NextWorkQueueEntry;
      v2 = (unsigned int)(v2 + 1);
      _InterlockedIncrement((volatile signed __int32 *)(v30 + 4LL * v28));
      v27 &= -(__int64)((unsigned int)v2 < 0x3F);
      goto LABEL_19;
    }
    ExFreePoolWithTag(v18, 0x73416343u);
    v26 = NextWorkQueueEntry[1].Next;
    NextWorkQueueEntry[3].Next = 0LL;
    *((_BYTE *)&NextWorkQueueEntry[7].Next + 8) = 6;
    if ( *((_DWORD *)&v26[32].Next + 2) != 1 || *((_DWORD *)&NextWorkQueueEntry[2].Next + 2) > 0x20000u )
    {
      CcPostWorkQueueAsyncRead(NextWorkQueueEntry, 0LL);
    }
    else
    {
LABEL_39:
      CcCompleteAsyncRead((__int64)NextWorkQueueEntry, v15, v16, v17);
      CcFreeWorkQueueEntry(NextWorkQueueEntry);
    }
LABEL_19:
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v5 + 112), 0LL);
  }
  ExReleasePushLockEx((ULONG_PTR)(v5 + 112), 0LL);
  v13 = (_QWORD *)BugCheckParameter2;
  if ( !BugCheckParameter2 )
    goto LABEL_12;
  *(_DWORD *)(v30 + 4LL * *(unsigned int *)(BugCheckParameter2 + 40)) = 0;
  *v13 = 0LL;
  ExQueueWorkItemToPartition(v13, 0, 0xFFFFFFFF, v5[1]);
  BugCheckParameter2 = 0LL;
LABEL_45:
  if ( v6 != 2 )
  {
LABEL_12:
    v9 = (void *)v27;
    goto LABEL_13;
  }
  if ( !v28 )
  {
    ExFreePoolWithTag(StartContext, 0x71576343u);
    CcDereferencePartition((__int64)v5);
  }
}
