/*
 * XREFs of CcWaitForCurrentLazyWriterActivityInternal @ 0x140380CCC
 * Callers:
 *     CcWaitForCurrentLazyWriterActivityHelper @ 0x140380CA0 (CcWaitForCurrentLazyWriterActivityHelper.c)
 *     CcExitPartition @ 0x1404EA5C4 (CcExitPartition.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcScheduleLazyWriteScan @ 0x1402418E0 (CcScheduleLazyWriteScan.c)
 *     CcAllocateWorkQueueEntry @ 0x14024AF80 (CcAllocateWorkQueueEntry.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403BCA9C (CcPerfLogWorkItemEnqueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall CcWaitForCurrentLazyWriterActivityInternal(__int64 a1)
{
  int result; // eax
  PSLIST_ENTRY v3; // rdi
  PSLIST_ENTRY *v4; // rcx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  __int16 Object; // [rsp+30h] [rbp-30h] BYREF
  char v12; // [rsp+32h] [rbp-2Eh]
  char v13; // [rsp+33h] [rbp-2Dh]
  int v14; // [rsp+34h] [rbp-2Ch]
  _QWORD v15[2]; // [rsp+38h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF
  PSLIST_ENTRY v17; // [rsp+78h] [rbp+18h] BYREF

  v17 = 0LL;
  v13 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  result = CcAllocateWorkQueueEntry(a1, &v17);
  if ( result >= 0 )
  {
    v3 = v17;
    *((_BYTE *)&v17[7].Next + 8) = 4;
    Object = 0;
    v14 = 0;
    v15[1] = v15;
    v15[0] = v15;
    v12 = 6;
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
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v9 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v10 = (v9 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v9;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    result = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 356));
  }
  return result;
}
