/*
 * XREFs of PpmHighPerfRequestExpiration @ 0x1403A41F0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoClearPowerRequestInternal @ 0x14033D2AC (PoClearPowerRequestInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PpmHighPerfRequestExpiration()
{
  unsigned __int64 v0; // rdi
  unsigned int i; // ebx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v5; // zf

  v0 = KeAcquireSpinLockRaiseToDpc(&PpmHighPerfRequestLock);
  if ( MEMORY[0xFFFFF78000000008] >= (unsigned __int64)PpmHighPerfDeferredEndTime )
  {
    for ( i = 0; i < PpmHighPerfDeferredEndCount; ++i )
      PoClearPowerRequestInternal(PpmHighPerfPowerRequest, 4u);
    PpmHighPerfDeferredEndCount = 0;
  }
  KxReleaseSpinLock(&PpmHighPerfRequestLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v0 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
        v5 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v5 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v0);
  return result;
}
