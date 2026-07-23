/*
 * XREFs of MiDrainSystemAccessLog @ 0x14027D0F0
 * Callers:
 *     MiCleanWorkingSet @ 0x1402426E4 (MiCleanWorkingSet.c)
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x14030862C (MiDeletePartialVad.c)
 *     MiDeleteSessionAddressSpace @ 0x14038973C (MiDeleteSessionAddressSpace.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x1403A0A98 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiEmptyAccessLogs @ 0x1403A3580 (MiEmptyAccessLogs.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiEmptyPageAccessLog @ 0x14027D1E0 (MiEmptyPageAccessLog.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDrainSystemAccessLog(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 result; // rax
  char v5; // cl
  PVOID *v6; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 *v8; // rdx
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  result = a1;
  v5 = *(_BYTE *)(a1 + 184) & 7;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  if ( v5 == 2 )
    v6 = (PVOID *)&unk_140C4F7E8;
  else
    v6 = (PVOID *)(result + 232);
  if ( *v6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    if ( (*(_BYTE *)(result + 184) & 7) == 2 )
      v8 = (unsigned __int64 *)&unk_140C4F800;
    else
      v8 = (unsigned __int64 *)(result + 256);
    LockHandle.LockQueue.Lock = v8;
    LockHandle.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock(&LockHandle, v8, a3, SchedulerAssist);
    if ( *v6 )
    {
      MiEmptyPageAccessLog(*v6);
      *v6 = 0LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v9 = KeGetCurrentIrql();
        if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = CurrentPrcb->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v13 = (v12 & v11[5]) == 0;
          v11[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
