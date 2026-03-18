/*
 * XREFs of VmpProcessContextLockShared @ 0x14059F504
 * Callers:
 *     VmColdPagesHint @ 0x14059D300 (VmColdPagesHint.c)
 *     VmpAccessFaultBatch @ 0x14059D69C (VmpAccessFaultBatch.c)
 *     VmpPrefetchVirtualAddresses @ 0x14059F0B4 (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x14059F71C (VmpQueryAccessedState.c)
 *     VmpSplitMemoryRange @ 0x14059FC74 (VmpSplitMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140224840 (ExAcquireSpinLockSharedAtDpcLevel.c)
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
