/*
 * XREFs of VmpProcessContextLockExclusive @ 0x14059ED9C
 * Callers:
 *     VmpFlushTb @ 0x14059DA54 (VmpFlushTb.c)
 *     VmpFlushTbVaRange @ 0x14059DBF0 (VmpFlushTbVaRange.c)
 *     VmpInsertMemoryRange @ 0x14059DDC0 (VmpInsertMemoryRange.c)
 *     VmpMergeMemoryRanges @ 0x14059E780 (VmpMergeMemoryRanges.c)
 *     VmpRemoveMemoryRange @ 0x14059F294 (VmpRemoveMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x14059F584 (VmpSplitMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
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
