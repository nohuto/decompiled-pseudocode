/*
 * XREFs of VmpProcessContextLockExclusive @ 0x1405A2F2C
 * Callers:
 *     VmpFlushTb @ 0x1405A1BE4 (VmpFlushTb.c)
 *     VmpFlushTbVaRange @ 0x1405A1D80 (VmpFlushTbVaRange.c)
 *     VmpInsertMemoryRange @ 0x1405A1F50 (VmpInsertMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x1405A2910 (VmpMergeMemoryRanges.c)
 *     VmpRemoveMemoryRange @ 0x1405A3424 (VmpRemoveMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x1405A3714 (VmpSplitMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall VmpProcessContextLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
  return CurrentIrql;
}
