/*
 * XREFs of CcWaitForCurrentLazyWriterActivityOnNode @ 0x140389670
 * Callers:
 *     CcWaitForCurrentLazyWriterActivityOnPartition @ 0x1403895EC (CcWaitForCurrentLazyWriterActivityOnPartition.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140276758 (CcScheduleLazyWriteScan.c)
 *     CcAllocateWorkQueueEntry @ 0x1402768E4 (CcAllocateWorkQueueEntry.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B0DF0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403AE50C (CcPerfLogWorkItemEnqueue.c)
 *     Feature_Servicing_FastfatLockFailureDueToLazyWriteIssue__private_IsEnabled @ 0x14041718C (Feature_Servicing_FastfatLockFailureDueToLazyWriteIssue__private_IsEnabled.c)
 */

int __fastcall CcWaitForCurrentLazyWriterActivityOnNode(__int64 a1, __int64 a2, __int64 a3)
{
  int result; // eax
  PSLIST_ENTRY v7; // rbx
  __int64 v8; // r8
  PSLIST_ENTRY *v9; // rcx
  __int64 v10; // rbx
  PSLIST_ENTRY *v11; // rcx
  __int16 Object; // [rsp+30h] [rbp-50h] BYREF
  char v13; // [rsp+32h] [rbp-4Eh]
  char v14; // [rsp+33h] [rbp-4Dh]
  int v15; // [rsp+34h] [rbp-4Ch]
  _QWORD v16[2]; // [rsp+38h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v17; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  PSLIST_ENTRY v19; // [rsp+B8h] [rbp+38h] BYREF

  v19 = 0LL;
  v14 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v17, 0, sizeof(v17));
  result = CcAllocateWorkQueueEntry(a1, a2, a3, &v19);
  if ( result < 0 )
    return result;
  v7 = v19;
  LOBYTE(v19[8].Next) = 4;
  Object = 0;
  v15 = 0;
  v16[1] = v16;
  v16[0] = v16;
  v13 = 6;
  v7[1].Next = (_SLIST_ENTRY *)&Object;
  if ( (xmmword_140D06910 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(a1 + 784, v7, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 704), &LockHandle);
  if ( a2 )
  {
    v11 = *(PSLIST_ENTRY **)(a2 + 792);
    if ( *v11 == (PSLIST_ENTRY)(a2 + 784) )
    {
      v7->Next = (_SLIST_ENTRY *)(a2 + 784);
      *((_QWORD *)&v7->Next + 1) = v11;
      *v11 = v7;
      *(_QWORD *)(a2 + 792) = v7;
      v10 = a2;
      *(_BYTE *)(a2 + 986) = 1;
      goto LABEL_10;
    }
LABEL_8:
    __fastfail(3u);
  }
  v9 = *(PSLIST_ENTRY **)(a1 + 792);
  if ( *v9 != (PSLIST_ENTRY)(a1 + 784) )
    goto LABEL_8;
  v7->Next = (_SLIST_ENTRY *)(a1 + 784);
  *((_QWORD *)&v7->Next + 1) = v9;
  *v9 = v7;
  *(_QWORD *)(a1 + 792) = v7;
  v10 = a1;
  *(_BYTE *)(a1 + 986) = 1;
LABEL_10:
  _InterlockedIncrement((volatile signed __int32 *)(v10 + 808));
  LOBYTE(v8) = 1;
  CcScheduleLazyWriteScan((_BYTE *)a1, a2, v8, 1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (unsigned int)Feature_Servicing_FastfatLockFailureDueToLazyWriteIssue__private_IsEnabled() )
  {
    while ( 1 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &v17);
      if ( !*(_DWORD *)(a3 + 176) )
        break;
      KeReleaseInStackQueuedSpinLock(&v17);
      KeDelayExecutionThread(0, 0, &Cc5MicroSeconds);
    }
    KeReleaseInStackQueuedSpinLock(&v17);
  }
  result = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  _InterlockedDecrement((volatile signed __int32 *)(v10 + 808));
  return result;
}
