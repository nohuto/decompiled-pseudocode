/*
 * XREFs of MiDrainSystemAccessLog @ 0x14024BBE0
 * Callers:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x140251734 (MiDeletePartialVad.c)
 *     MiCleanWorkingSet @ 0x140352534 (MiCleanWorkingSet.c)
 *     MiDeleteSessionAddressSpace @ 0x140386CEC (MiDeleteSessionAddressSpace.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14039DBB8 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiEmptyAccessLogs @ 0x1403A06A0 (MiEmptyAccessLogs.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiEmptyPageAccessLog @ 0x14024BCD0 (MiEmptyPageAccessLog.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDrainSystemAccessLog(__int64 a1)
{
  __int64 result; // rax
  char v2; // cl
  PVOID *v3; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 *v5; // rdx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  result = a1;
  v2 = *(_BYTE *)(a1 + 184) & 7;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  if ( v2 == 2 )
    v3 = (PVOID *)&unk_140C4F5A8;
  else
    v3 = (PVOID *)(result + 232);
  if ( *v3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    if ( (*(_BYTE *)(result + 184) & 7) == 2 )
      v5 = (unsigned __int64 *)&unk_140C4F5C0;
    else
      v5 = (unsigned __int64 *)(result + 256);
    LockHandle.LockQueue.Lock = v5;
    LockHandle.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock(&LockHandle);
    if ( *v3 )
    {
      MiEmptyPageAccessLog(*v3);
      *v3 = 0LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v7 = KeGetCurrentIrql();
        if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v11 = (v10 & v9[5]) == 0;
          v9[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
