/*
 * XREFs of MiSetSlabAllocatorPolicy @ 0x1403B4458
 * Callers:
 *     MiMakePartitionActive @ 0x1402E20B8 (MiMakePartitionActive.c)
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSetSlabAllocatorPolicy(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  result = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( dword_140CFB1D4 != 1 && (MiFlags & 0x8000) != 0 && (*(_QWORD *)(a1 + 6928) >= 0xED800uLL || dword_140CFB1D4 == 2) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C4E400, &LockHandle);
    *(_DWORD *)(a1 + 4) |= 8u;
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
          v6 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v6 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  return result;
}
