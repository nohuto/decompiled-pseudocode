/*
 * XREFs of CcWaitForCurrentLazyWriterActivityInternal @ 0x140380FDC
 * Callers:
 *     CcWaitForCurrentLazyWriterActivityHelper @ 0x140380FB0 (CcWaitForCurrentLazyWriterActivityHelper.c)
 *     CcExitPartition @ 0x1404EC394 (CcExitPartition.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402D1E50 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcAllocateWorkQueueEntry @ 0x140301520 (CcAllocateWorkQueueEntry.c)
 *     CcScheduleLazyWriteScan @ 0x140301AAC (CcScheduleLazyWriteScan.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403BD71C (CcPerfLogWorkItemEnqueue.c)
 */

int __fastcall CcWaitForCurrentLazyWriterActivityInternal(__int64 a1)
{
  int result; // eax
  PSLIST_ENTRY v3; // rdi
  PSLIST_ENTRY *v4; // rcx
  __int16 Object; // [rsp+30h] [rbp-50h] BYREF
  char v6; // [rsp+32h] [rbp-4Eh]
  char v7; // [rsp+33h] [rbp-4Dh]
  int v8; // [rsp+34h] [rbp-4Ch]
  _QWORD v9[2]; // [rsp+38h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  PSLIST_ENTRY v12; // [rsp+98h] [rbp+18h] BYREF

  v12 = 0LL;
  v7 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v10, 0, sizeof(v10));
  result = CcAllocateWorkQueueEntry(a1, &v12);
  if ( result >= 0 )
  {
    v3 = v12;
    *((_BYTE *)&v12[7].Next + 8) = 4;
    Object = 0;
    v8 = 0;
    v9[1] = v9;
    v9[0] = v9;
    v6 = 6;
    v3[1].Next = (_SLIST_ENTRY *)&Object;
    if ( (xmmword_140CFC490 & 0x20000) != 0 )
      CcPerfLogWorkItemEnqueue(a1 + 272, v3, 0LL, 0LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    v4 = *(PSLIST_ENTRY **)(a1 + 280);
    if ( *v4 != (PSLIST_ENTRY)(a1 + 272) )
      __fastfail(3u);
    v3->Next = (_SLIST_ENTRY *)(a1 + 272);
    *((_QWORD *)&v3->Next + 1) = v4;
    *v4 = v3;
    *(_QWORD *)(a1 + 280) = v3;
    *(_BYTE *)(a1 + 633) = 1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 356));
    CcScheduleLazyWriteScan(a1, 1, 1);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    while ( 1 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 192), &v10);
      if ( !*(_DWORD *)(a1 + 344) )
        break;
      KeReleaseInStackQueuedSpinLock(&v10);
      KeDelayExecutionThread(0, 0, &Cc5MicroSeconds);
    }
    KeReleaseInStackQueuedSpinLock(&v10);
    result = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 356));
  }
  return result;
}
