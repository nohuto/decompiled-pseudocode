/*
 * XREFs of CcMapDataForOverwrite @ 0x14022D728
 * Callers:
 *     CcPreparePinWrite @ 0x1405F3640 (CcPreparePinWrite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     CcMapDataCommon @ 0x1405F3814 (CcMapDataCommon.c)
 */

__int64 __fastcall CcMapDataForOverwrite(__int64 a1, _DWORD *a2, unsigned int a3, _QWORD *a4, __int64 *a5)
{
  int v6; // r13d
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // r15d
  __int64 *v11; // rdi
  __int64 v12; // rdi
  unsigned int v13; // ebx
  int v14; // eax
  __int64 result; // rax
  __int64 Partition; // rax
  unsigned __int8 OldIrql; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  unsigned int v23; // [rsp+30h] [rbp-78h]
  __int64 v24; // [rsp+38h] [rbp-70h] BYREF
  __int64 v25; // [rsp+40h] [rbp-68h]
  struct _KTHREAD *v26; // [rsp+48h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  int v28; // [rsp+B0h] [rbp+8h]
  char v29; // [rsp+C0h] [rbp+18h] BYREF
  _QWORD *v30; // [rsp+C8h] [rbp+20h]

  v30 = a4;
  v28 = a1;
  v6 = (int)a2;
  v24 = 0LL;
  v23 = (a3 + 4095LL + (unsigned __int64)(*a2 & 0xFFF)) >> 12;
  CurrentThread = KeGetCurrentThread();
  v26 = CurrentThread;
  v29 = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_QWORD *)(v8 + 8);
  if ( (*(_DWORD *)(v9 + 152) & 0x20000) == 0 )
  {
    Partition = CcGetPartition(*(_QWORD *)(v8 + 8), (_BYTE)a2, a3);
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
          v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v22 = (v21 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v21;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  v10 = BYTE4(CurrentThread[1].Queue) + 4 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  v11 = a5;
  CcMapDataCommon(v28, v6, a3, 1, (__int64)&v24, (__int64)a5);
  v12 = *v11;
  v25 = v12;
  v13 = v23;
  while ( v13 )
  {
    v29 = 1;
    BYTE4(CurrentThread[1].Queue) = 1;
    if ( --v13 > LODWORD(CurrentThread[1].WaitListEntry.Flink) )
    {
      v14 = v13;
      if ( v13 > 0xF )
        v14 = 15;
      LODWORD(CurrentThread[1].WaitListEntry.Flink) = v14;
    }
    MmCheckCachedPageStates(v12, 1LL, 5LL, &v29);
    if ( !v29 )
      MmCheckCachedPageStates(v12, 1LL, 4LL, 0LL);
    v12 += 4096LL;
    v25 = v12;
  }
  BYTE4(CurrentThread[1].Queue) = v10 & 3;
  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v10 >> 2;
  __addgsdword(0x8150u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  result = v24;
  *v30 = v24;
  return result;
}
