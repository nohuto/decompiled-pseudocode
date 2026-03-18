/*
 * XREFs of MiQueueWorkingSetRequest @ 0x1403A2ED4
 * Callers:
 *     MiFindContiguousPages @ 0x140225A90 (MiFindContiguousPages.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x1403A2EAC (MiCaptureAllWorkingSetAccessBits.c)
 *     MiEmptyAllWorkingSets @ 0x140535D28 (MiEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x1405374DC (MmTrimFilePagesFromWorkingSets.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
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
