/*
 * XREFs of PopReleasePowerRequestSpinLock @ 0x140563994
 * Callers:
 *     PoClearPowerRequestInternal @ 0x14036237C (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140362540 (PoSetPowerRequestInternal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopReleasePowerRequestSpinLock(struct _KLOCK_QUEUE_HANDLE *a1)
{
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf

  KeReleaseInStackQueuedSpinLockFromDpcLevel(a1);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = a1->OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
        v6 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v6 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
