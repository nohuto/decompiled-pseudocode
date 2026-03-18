/*
 * XREFs of MiAllowWorkingSetExpansion @ 0x140338D8C
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1406EEAB4 (MmInitializeProcessAddressSpace.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407829DC (MiInitializeSystemWorkingSetList.c)
 *     MmInitializeHandBuiltProcess @ 0x1407CAD44 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReturnWsToExpansionList @ 0x140338E08 (MiReturnWsToExpansionList.c)
 *     MiInsertSessionWorkingSet @ 0x1403A6310 (MiInsertSessionWorkingSet.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAllowWorkingSetExpansion(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C4ECC0, &LockHandle);
  if ( (*(_BYTE *)(a1 + 184) & 7) == 1 )
    MiInsertSessionWorkingSet(a1 - 256);
  MiReturnWsToExpansionList(a1, 0LL);
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
  return result;
}
