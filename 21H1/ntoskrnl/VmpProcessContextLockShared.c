/*
 * XREFs of VmpProcessContextLockShared @ 0x14059EE14
 * Callers:
 *     VmColdPagesHint @ 0x14059CC10 (VmColdPagesHint.c)
 *     VmpAccessFaultBatch @ 0x14059CFAC (VmpAccessFaultBatch.c)
 *     VmpPrefetchVirtualAddresses @ 0x14059E9C4 (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x14059F02C (VmpQueryAccessedState.c)
 *     VmpSplitMemoryRange @ 0x14059F584 (VmpSplitMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14027D890 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall VmpProcessContextLockShared(PEX_SPIN_LOCK SpinLock)
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
  ExAcquireSpinLockSharedAtDpcLevel(SpinLock);
  return CurrentIrql;
}
