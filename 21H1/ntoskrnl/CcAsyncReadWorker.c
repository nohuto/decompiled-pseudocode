/*
 * XREFs of CcAsyncReadWorker @ 0x1403B2B50
 * Callers:
 *     CcAsyncReadWorkerThread @ 0x1404E6EF0 (CcAsyncReadWorkerThread.c)
 * Callees:
 *     CcFreeWorkQueueEntry @ 0x14023175C (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x1402317CC (CcDereferencePartition.c)
 *     CcFindNextWorkQueueEntry @ 0x140234708 (CcFindNextWorkQueueEntry.c)
 *     CcCompleteAsyncRead @ 0x140234DF0 (CcCompleteAsyncRead.c)
 *     ExQueueWorkItemToPartition @ 0x14023505C (ExQueueWorkItemToPartition.c)
 *     CcPostWorkQueueAsyncRead @ 0x140235324 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x140235528 (CcShouldSpinAsyncReadWorkerThread.c)
 *     KeWaitForMultipleObjects @ 0x140243AA0 (KeWaitForMultipleObjects.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     CcAsyncReadPrefetch @ 0x1402BE260 (CcAsyncReadPrefetch.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1402BE4DC (MmWaitMultipleForCacheManagerPrefetch.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  _SLIST_ENTRY *v15; // rcx
  __int64 v16; // r14
  PSLIST_ENTRY v17; // rsi
  _SLIST_ENTRY *Next; // rcx
  NTSTATUS v19; // eax
  _SLIST_ENTRY *v20; // rax
  unsigned __int64 v21; // [rsp+40h] [rbp-C0h]
  unsigned int v22; // [rsp+48h] [rbp-B8h]
  unsigned int v23; // [rsp+4Ch] [rbp-B4h]
  __int64 v24; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  PVOID Object[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v31[64]; // [rsp+E0h] [rbp-20h] BYREF
  PSLIST_ENTRY ListEntry[64]; // [rsp+2E0h] [rbp+1E0h] BYREF

  if ( !StartContext )
    return;
  v1 = StartContext[10];
  v2 = 0LL;
  v3 = (unsigned int)StartContext[9];
  v5 = (__int64 *)*((_QWORD *)StartContext + 7);
  BugCheckParameter2 = 0LL;
  v22 = v1;
  v23 = v3;
  v6 = 3;
  memset(v31, 0, sizeof(v31));
  memset(ListEntry, 0, sizeof(ListEntry));
  v7 = v5[110];
  v27 = 3 * v3;
  v8 = (unsigned int)v3;
  v26 = v3;
  v9 = (void *)(v7 + 24 * v3);
  v21 = (unsigned __int64)v9;
  v24 = v5[111] + 404 * v3;
  Object[0] = v9;
  Object[1] = v5 + 122;
  while ( 1 )
  {
    if ( (unsigned int)v2 >= 0x3F || *(_QWORD *)(v5[108] + 16 * v8) == v5[108] + 16 * v8 )
    {
      if ( (_DWORD)v2 )
      {
        v10 = MmWaitMultipleForCacheManagerPrefetch((__int64)v31, v2, v9);
        v6 = v10 < (unsigned int)v2;
      }
      else
      {
        v19 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
        v10 = v19;
        if ( v19 )
        {
          if ( v19 == 1 )
            v6 = 2;
        }
        else
        {
          v6 = 0;
        }
      }
      v9 = (void *)v21;
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
      v16 = v10;
      v17 = ListEntry[v16];
      if ( v17 )
      {
        Next = v17[3].Next;
        if ( Next )
        {
          ExFreePoolWithTag(Next, 0x73416343u);
          *((_BYTE *)&v17[7].Next + 8) = 6;
          v17[3].Next = 0LL;
          v31[v10] = 0LL;
          ListEntry[v10] = 0LL;
          if ( *((_DWORD *)&v17[1].Next[32].Next + 2) == 1 && *((_DWORD *)&v17[2].Next + 2) <= 0x20000u )
          {
            CcCompleteAsyncRead((__int64)v17);
            CcFreeWorkQueueEntry(v17);
          }
          else
          {
            CcPostWorkQueueAsyncRead(v17, 0LL);
          }
          v2 = (unsigned int)(v2 - 1);
          while ( v10 < (unsigned int)v2 )
          {
            v31[v16++] = v31[++v10];
            v31[v16 + 63] = ListEntry[v10];
          }
          v9 = (void *)v21;
          v31[v10] = 0LL;
          ListEntry[v10] = 0LL;
          _InterlockedDecrement((volatile signed __int32 *)(v24 + 4LL * v22));
          if ( !v21 )
          {
            v9 = (void *)(v5[110] + 8 * v27);
            v21 = (unsigned __int64)v9;
          }
        }
      }
    }
LABEL_13:
    v8 = v26;
    if ( v22 && !(_DWORD)v2 )
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
      CcShouldSpinAsyncReadWorkerThread((__int64)v5, &BugCheckParameter2, v23);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v5 + 112), 0LL);
      break;
    }
    NextWorkQueueEntry = (_SLIST_ENTRY *)CcFindNextWorkQueueEntry((__int64)v5, v12);
    ExReleasePushLockEx((ULONG_PTR)(v5 + 112), 0LL);
    if ( !CcAsyncReadPrefetch((__int64)NextWorkQueueEntry) )
      goto LABEL_39;
    v15 = NextWorkQueueEntry[3].Next;
    if ( v15->Next )
    {
      v31[v2] = v15->Next;
      ListEntry[v2] = NextWorkQueueEntry;
      v2 = (unsigned int)(v2 + 1);
      _InterlockedIncrement((volatile signed __int32 *)(v24 + 4LL * v22));
      v21 &= -(__int64)((unsigned int)v2 < 0x3F);
      goto LABEL_19;
    }
    ExFreePoolWithTag(v15, 0x73416343u);
    v20 = NextWorkQueueEntry[1].Next;
    NextWorkQueueEntry[3].Next = 0LL;
    *((_BYTE *)&NextWorkQueueEntry[7].Next + 8) = 6;
    if ( *((_DWORD *)&v20[32].Next + 2) != 1 || *((_DWORD *)&NextWorkQueueEntry[2].Next + 2) > 0x20000u )
    {
      CcPostWorkQueueAsyncRead(NextWorkQueueEntry, 0LL);
    }
    else
    {
LABEL_39:
      CcCompleteAsyncRead((__int64)NextWorkQueueEntry);
      CcFreeWorkQueueEntry(NextWorkQueueEntry);
    }
LABEL_19:
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v5 + 112), 0LL);
  }
  ExReleasePushLockEx((ULONG_PTR)(v5 + 112), 0LL);
  v13 = (_QWORD *)BugCheckParameter2;
  if ( !BugCheckParameter2 )
    goto LABEL_12;
  *(_DWORD *)(v24 + 4LL * *(unsigned int *)(BugCheckParameter2 + 40)) = 0;
  *v13 = 0LL;
  ExQueueWorkItemToPartition(v13, 0, 0xFFFFFFFF, v5[1]);
  BugCheckParameter2 = 0LL;
LABEL_45:
  if ( v6 != 2 )
  {
LABEL_12:
    v9 = (void *)v21;
    goto LABEL_13;
  }
  if ( !v22 )
  {
    ExFreePoolWithTag(StartContext, 0x71576343u);
    CcDereferencePartition((__int64)v5);
  }
}
