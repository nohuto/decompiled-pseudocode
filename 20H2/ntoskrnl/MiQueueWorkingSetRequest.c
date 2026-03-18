/*
 * XREFs of MiQueueWorkingSetRequest @ 0x1403A5294
 * Callers:
 *     MiFindContiguousPages @ 0x14034B980 (MiFindContiguousPages.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x1403A526C (MiCaptureAllWorkingSetAccessBits.c)
 *     MiEmptyAllWorkingSets @ 0x1405396F8 (MiEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x14053AEAC (MmTrimFilePagesFromWorkingSets.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS __fastcall MiQueueWorkingSetRequest(__int64 a1, int a2)
{
  NTSTATUS result; // eax
  __int64 v4; // rbx
  int v5; // eax
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  result = *(_DWORD *)(a1 + 4);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (result & 0x20) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 6848);
    if ( v4 )
    {
      KeAcquireInStackQueuedSpinLock(&qword_140C4ECC0, &LockHandle);
      v5 = *(_DWORD *)(v4 + 40);
      if ( !v5 )
      {
        KeResetEvent((PRKEVENT)v4);
        v5 = *(_DWORD *)(v4 + 40);
      }
      *(_DWORD *)(v4 + 40) = a2 | v5;
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
            v10 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v11 = (v10 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v10;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      KeSetEvent((PRKEVENT)(v4 + 96), 0, 0);
      return KeWaitForSingleObject((PVOID)v4, WrVirtualMemory, 0, 0, 0LL);
    }
  }
  return result;
}
