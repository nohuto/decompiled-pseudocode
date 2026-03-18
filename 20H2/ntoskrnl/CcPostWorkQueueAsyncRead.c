/*
 * XREFs of CcPostWorkQueueAsyncRead @ 0x140248F44
 * Callers:
 *     CcAsyncCopyRead @ 0x140248D20 (CcAsyncCopyRead.c)
 *     CcAsyncReadWorker @ 0x1403B6310 (CcAsyncReadWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x140249148 (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcCompleteAsyncRead @ 0x140249324 (CcCompleteAsyncRead.c)
 *     CcFreeWorkQueueEntry @ 0x14029EB6C (CcFreeWorkQueueEntry.c)
 *     ExQueueWorkItemToPartition @ 0x1402D4564 (ExQueueWorkItemToPartition.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403BCA9C (CcPerfLogWorkItemEnqueue.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

char __fastcall CcPostWorkQueueAsyncRead(PSLIST_ENTRY ListEntry, __int64 a2)
{
  char v2; // r12
  _SLIST_ENTRY *Next; // rdi
  __int64 Next_high; // r15
  char v7; // bp
  _QWORD *v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // r10
  ULONG_PTR v11; // rbp
  _DWORD *PoolWithTag; // rax
  ULONG_PTR v13; // rsi
  __int64 v14; // rdx
  _QWORD *v15; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp+8h] BYREF

  BugCheckParameter2 = 0LL;
  v2 = 0;
  Next = ListEntry[8].Next;
  Next_high = HIDWORD(ListEntry[7].Next);
  if ( (xmmword_140CFC490 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(a2, ListEntry, 0LL, 0LL);
  if ( *((_BYTE *)&ListEntry[7].Next + 8) != 5 )
  {
    if ( *(_QWORD *)(16 * Next_high + *((_QWORD *)&Next[54].Next + 1)) == 16 * Next_high
                                                                        + *((_QWORD *)&Next[54].Next + 1)
      && (LOBYTE(v9) = CcMaxNumberCompleteAsyncReadExWorkItems,
          *(_DWORD *)(*((_QWORD *)&Next[53].Next + 1) + 4 * Next_high) < (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems) )
    {
      v11 = (ULONG_PTR)&Next[56];
    }
    else
    {
      v11 = (ULONG_PTR)&Next[56];
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&Next[56], 0LL);
      v14 = 16 * Next_high + *((_QWORD *)&Next[54].Next + 1);
      if ( *(_QWORD *)v14 != v14
        || *(_DWORD *)(*((_QWORD *)&Next[53].Next + 1) + 4 * Next_high) >= (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
      {
        v15 = *(_QWORD **)(v14 + 8);
        if ( *v15 != v14 )
LABEL_27:
          __fastfail(3u);
        ListEntry->Next = (_SLIST_ENTRY *)v14;
        v2 = 1;
        *((_QWORD *)&ListEntry->Next + 1) = v15;
        *v15 = ListEntry;
        *(_QWORD *)(v14 + 8) = ListEntry;
      }
      LOBYTE(v9) = ExReleasePushLockEx((ULONG_PTR)&Next[56], 0LL);
    }
    if ( v2 )
      return v9;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x71576343u);
    v13 = (ULONG_PTR)PoolWithTag;
    if ( !PoolWithTag )
    {
      **((_DWORD **)&ListEntry[4].Next + 1) = -1073741670;
      CcCompleteAsyncRead(ListEntry);
      LOBYTE(v9) = CcFreeWorkQueueEntry(ListEntry);
      return v9;
    }
    PoolWithTag[8] = 4;
    *((_QWORD *)PoolWithTag + 7) = Next;
    *((_QWORD *)PoolWithTag + 6) = ListEntry;
    PoolWithTag[9] = Next_high;
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 2) = CcCompleteAsyncReadWorker;
    *((_QWORD *)PoolWithTag + 3) = PoolWithTag;
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    *(_DWORD *)(v13 + 40) = (*(_DWORD *)(*((_QWORD *)&Next[53].Next + 1) + 4 * Next_high))++;
    if ( _InterlockedIncrement64((volatile signed __int64 *)&Next[60].Next + 1) <= 1 )
      __fastfail(0xEu);
    ExReleasePushLockEx(v11, 0LL);
    *(_QWORD *)v13 = 0LL;
    LOBYTE(v9) = ExQueueWorkItemToPartition(v13);
    v10 = (_QWORD *)BugCheckParameter2;
    goto LABEL_9;
  }
  v7 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Next[56], 0LL);
  v8 = *(_QWORD **)(a2 + 8);
  if ( *v8 != a2 )
    goto LABEL_27;
  *((_QWORD *)&ListEntry->Next + 1) = v8;
  ListEntry->Next = (_SLIST_ENTRY *)a2;
  *v8 = ListEntry;
  *(_QWORD *)(a2 + 8) = ListEntry;
  if ( *(_QWORD *)(*((_QWORD *)&Next[54].Next + 1) + 16 * Next_high) == *((_QWORD *)&Next[54].Next + 1) + 16 * Next_high
    || *((_DWORD *)&Next[53].Next->Next + Next_high) <= 1u )
  {
    KeSetEvent((PRKEVENT)Next[55].Next + Next_high, 0, 0);
  }
  else
  {
    v7 = 1;
  }
  LOBYTE(v9) = ExReleasePushLockEx((ULONG_PTR)&Next[56], 0LL);
  if ( !v7 )
  {
    LOBYTE(v9) = CcShouldSpinAsyncReadWorkerThread(Next, &BugCheckParameter2, (unsigned int)Next_high);
    v10 = (_QWORD *)BugCheckParameter2;
    if ( (_BYTE)v9 )
    {
      if ( !BugCheckParameter2 )
        return v9;
      v9 = *((_QWORD *)&Next[55].Next + 1);
      *(_DWORD *)(v9 + 4 * (101 * Next_high + *(unsigned int *)(BugCheckParameter2 + 40))) = 0;
    }
LABEL_9:
    if ( v10 )
    {
      *v10 = 0LL;
      LOBYTE(v9) = ExQueueWorkItemToPartition((ULONG_PTR)v10);
    }
  }
  return v9;
}
