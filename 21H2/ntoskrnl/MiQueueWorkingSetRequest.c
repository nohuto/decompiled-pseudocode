/*
 * XREFs of MiQueueWorkingSetRequest @ 0x1403867F4
 * Callers:
 *     MiQueueForceTrimRequest @ 0x140373F2C (MiQueueForceTrimRequest.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x1403DD3F8 (MiCaptureAllWorkingSetAccessBits.c)
 *     MiEmptyAllWorkingSets @ 0x14059673C (MiEmptyAllWorkingSets.c)
 *     MiTrimNoStealPagesFromWorkingSets @ 0x14059726C (MiTrimNoStealPagesFromWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x14059770C (MmTrimFilePagesFromWorkingSets.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiQueueWorkingSetRequest(__int64 a1, int a2)
{
  __int64 v3; // rbx
  int v4; // esi
  unsigned __int64 OldIrql; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (*(_DWORD *)(a1 + 4) & 0x20) != 0 )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 16600);
  if ( !v3 )
    return 0LL;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  if ( !*(_DWORD *)(v3 + 40) )
    KeResetEvent((PRKEVENT)v3);
  if ( (a2 & *(_DWORD *)(v3 + 40)) == a2 )
  {
    v4 = 0;
  }
  else
  {
    v4 = 1;
    *(_DWORD *)(v3 + 40) |= a2;
  }
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
  if ( v4 )
    KeSetEvent((PRKEVENT)(v3 + 96), 0, 0);
  if ( a2 != 1024 )
    KeWaitForSingleObject((PVOID)v3, WrVirtualMemory, 0, 0, 0LL);
  return 1LL;
}
