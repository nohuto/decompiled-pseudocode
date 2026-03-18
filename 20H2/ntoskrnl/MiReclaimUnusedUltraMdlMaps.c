/*
 * XREFs of MiReclaimUnusedUltraMdlMaps @ 0x140313058
 * Callers:
 *     MiWorkingSetManager @ 0x1402662A0 (MiWorkingSetManager.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDeleteUltraMapContext @ 0x1403338F0 (MiDeleteUltraMapContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 MiReclaimUnusedUltraMdlMaps()
{
  __int64 result; // rax
  int v1; // ebp
  unsigned int v2; // ebx
  unsigned int v3; // esi
  unsigned __int64 v4; // rdi
  PSLIST_ENTRY v5; // rax
  PSLIST_ENTRY v6; // r15
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  result = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v1 = 0;
  v2 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v3 = 0;
      v4 = (unsigned __int64)v2 << 9;
      do
      {
        while ( *(_WORD *)(v4 + qword_140C4EAB8) > 2u )
        {
          v5 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(qword_140C4EAB8 + ((8LL * v2 + v3) << 6)));
          v6 = v5;
          if ( !v5 )
            break;
          ++v1;
          MiDeleteUltraMapContext(&v5->Next + 1, 3LL);
          ExFreePoolWithTag(v6, 0);
        }
        ++v3;
        v4 += 64LL;
      }
      while ( v3 < 8 );
      result = (unsigned __int16)KeNumberNodes;
      ++v2;
    }
    while ( v2 < (unsigned __int16)KeNumberNodes );
    if ( v1 )
    {
      KeAcquireInStackQueuedSpinLock(&qword_140C4EA70, &LockHandle);
      dword_140C4EAB0 -= v1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      result = (unsigned int)KiIrqlFlags;
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v10 )
              result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
  }
  return result;
}
