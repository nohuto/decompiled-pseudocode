/*
 * XREFs of CcMapDataForOverwrite @ 0x1402AF3C8
 * Callers:
 *     CcPreparePinWrite @ 0x1406940F0 (CcPreparePinWrite.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcUnpinFileDataEx @ 0x1402F4630 (CcUnpinFileDataEx.c)
 *     CcGetPartition @ 0x140313800 (CcGetPartition.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     CcMapDataCommon @ 0x1406942C4 (CcMapDataCommon.c)
 */

__int64 __fastcall CcMapDataForOverwrite(__int64 a1, _DWORD *a2, unsigned int a3, _QWORD *a4, __int64 *a5)
{
  int v6; // r13d
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // r15d
  __int64 v11; // rdi
  unsigned int v12; // ebx
  int v13; // eax
  __int64 result; // rax
  __int64 Partition; // rax
  unsigned __int8 OldIrql; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  unsigned int v22; // [rsp+30h] [rbp-78h]
  __int64 v23; // [rsp+38h] [rbp-70h] BYREF
  __int64 v24; // [rsp+40h] [rbp-68h]
  struct _KTHREAD *v25; // [rsp+48h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  int v27; // [rsp+B0h] [rbp+8h]

  v27 = a1;
  v6 = (int)a2;
  v23 = 0LL;
  v22 = (a3 + 4095LL + (unsigned __int64)(*a2 & 0xFFF)) >> 12;
  CurrentThread = KeGetCurrentThread();
  v25 = CurrentThread;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_QWORD *)(v8 + 8);
  if ( (*(_DWORD *)(v9 + 152) & 0x20000) == 0 )
  {
    Partition = CcGetPartition(*(_QWORD *)(v8 + 8));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    *(_DWORD *)(v9 + 152) |= 0x20000u;
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
          v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v21 = (v20 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  v10 = BYTE4(CurrentThread[1].Queue) + 4 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  CcMapDataCommon(v27, v6, a3, 1, (__int64)&v23, (__int64)a5);
  v11 = *a5;
  v24 = *a5;
  v12 = v22;
  while ( v12 )
  {
    BYTE4(CurrentThread[1].Queue) = 1;
    if ( --v12 > LODWORD(CurrentThread[1].WaitListEntry.Flink) )
    {
      v13 = v12;
      if ( v12 > 0xF )
        v13 = 15;
      LODWORD(CurrentThread[1].WaitListEntry.Flink) = v13;
    }
    MmCheckCachedPageStates(v11, 1LL, 5LL);
    v11 += 4096LL;
    v24 = v11;
  }
  BYTE4(CurrentThread[1].Queue) = v10 & 3;
  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v10 >> 2;
  __addgsdword(0x8150u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  result = v23;
  *a4 = v23;
  return result;
}
