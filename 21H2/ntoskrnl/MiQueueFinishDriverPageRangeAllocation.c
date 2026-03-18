/*
 * XREFs of MiQueueFinishDriverPageRangeAllocation @ 0x1403CFC88
 * Callers:
 *     MmFreeBootDriverInitializationCode @ 0x14084C1C8 (MmFreeBootDriverInitializationCode.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiQueueFinishDriverPageRangeAllocation(PEX_SPIN_LOCK SpinLock)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf

  v2 = ExAcquireSpinLockExclusive(SpinLock);
  if ( *((_DWORD *)SpinLock + 1) )
    KiSetTimerEx((unsigned __int64)(SpinLock + 14), -600000000LL, 0, 0, (__int64)(SpinLock + 30));
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v6 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v6 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
