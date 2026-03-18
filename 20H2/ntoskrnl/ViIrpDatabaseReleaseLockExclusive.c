/*
 * XREFs of ViIrpDatabaseReleaseLockExclusive @ 0x1405A0C24
 * Callers:
 *     IovpCompleteRequest2 @ 0x1409D3600 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x1409D425C (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x1409D88B0 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x1409D8B34 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x1409E3868 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1409E393C (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ViIrpDatabaseReleaseLockExclusive(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v5; // zf

  v1 = a1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&ViIrpDatabaseLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v1 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
        v5 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v5 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v1);
  return result;
}
