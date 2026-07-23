/*
 * XREFs of CcAsyncCopyRead @ 0x140248D20
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcScheduleReadAheadEx @ 0x140248720 (CcScheduleReadAheadEx.c)
 *     CcPostWorkQueueAsyncRead @ 0x140248F44 (CcPostWorkQueueAsyncRead.c)
 *     IoReferenceIoAttributionFromThread @ 0x1402491C8 (IoReferenceIoAttributionFromThread.c)
 *     CcAllocateWorkQueueEntry @ 0x14024AF80 (CcAllocateWorkQueueEntry.c)
 *     PsGetPagePriorityThread @ 0x14028EE10 (PsGetPagePriorityThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x14029ADE0 (CcGetPartition.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

char __fastcall CcAsyncCopyRead(
        _QWORD *Object,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _KTHREAD *a7,
        __int64 a8)
{
  _DWORD *v8; // rsi
  __int64 v11; // rax
  __int64 v13; // rbx
  __int64 Partition; // r15
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *PoolWithTag; // rax
  void *v17; // rsi
  NTSTATUS v18; // ebp
  volatile signed __int64 *DeepFreezeStartTime; // rcx
  __int64 v20; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 OldIrql; // rbp
  __int64 v23; // rdx
  __int64 v24; // rbx
  int PagePriorityThread; // eax
  __int64 v26; // rdx
  __int64 v27; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v31; // eax
  bool v32; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  __int64 v34; // [rsp+80h] [rbp+8h] BYREF

  v8 = (_DWORD *)Object[6];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v11 = Object[5];
  v34 = 0LL;
  v13 = *(_QWORD *)(v11 + 8);
  Partition = CcGetPartition(v13);
  if ( (signed __int64)(*a2 + a3) > *(_QWORD *)(v13 + 8) )
    KeBugCheckEx(0x34u, 0x393uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  CurrentThread = a7;
  if ( CcEnableReadAheadInAsyncRead && (*v8 & 0x20000) != 0 )
    CcScheduleReadAheadEx(Object, a2, a3, a7);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x73416343u);
  v17 = PoolWithTag;
  if ( !PoolWithTag )
    RtlRaiseStatus(-1073741670);
  *PoolWithTag = 0LL;
  v18 = CcAllocateWorkQueueEntry(Partition, &v34);
  if ( v18 < 0 )
  {
    ExFreePoolWithTag(v17, 0x73416343u);
    RtlRaiseStatus(v18);
  }
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  DeepFreezeStartTime = (volatile signed __int64 *)CurrentThread->Process[2].DeepFreezeStartTime;
  if ( DeepFreezeStartTime )
  {
    if ( ((a3 + 4095) & 0xFFFFF000) != 0 )
      _InterlockedExchangeAdd64(DeepFreezeStartTime, (a3 + 4095) & 0xFFFFF000);
    _InterlockedExchangeAdd64(DeepFreezeStartTime + 2, 1uLL);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  ++*(_DWORD *)(v13 + 4);
  ++*(_DWORD *)(v13 + 536);
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
        v31 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v32 = (v31 & SchedulerAssist[5]) == 0;
        v20 = (unsigned int)v31 & SchedulerAssist[5];
        SchedulerAssist[5] = v20;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 520));
  v23 = v34;
  *(_BYTE *)(v34 + 120) = 5;
  *(_QWORD *)(v23 + 16) = v13;
  v24 = a8;
  *(_QWORD *)(v23 + 32) = Object;
  *(_QWORD *)(v23 + 24) = *a2;
  *(_DWORD *)(v23 + 40) = a3;
  *(_QWORD *)(v23 + 48) = v17;
  *(_QWORD *)(v23 + 64) = *(_QWORD *)(v24 + 16);
  *(_QWORD *)(v23 + 72) = a6;
  *(_QWORD *)(v23 + 80) = v24;
  PagePriorityThread = PsGetPagePriorityThread(CurrentThread, v23, v20, SchedulerAssist);
  *(_DWORD *)(v26 + 56) = PagePriorityThread;
  v27 = v34;
  *(_QWORD *)(v34 + 88) = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(v27 + 96) = CurrentThread;
  *(_BYTE *)(v27 + 112) = *(_BYTE *)(v24 + 24);
  *(_DWORD *)(v27 + 116) = *(_DWORD *)(v24 + 28);
  *(_QWORD *)(v27 + 104) = 0LL;
  IoReferenceIoAttributionFromThread(CurrentThread);
  if ( *(_DWORD *)(v24 + 28) > (unsigned int)CcMaxNestingLevel )
    KeBugCheckEx(0x34u, 0x42AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcPostWorkQueueAsyncRead((PSLIST_ENTRY)v27);
  return 1;
}
