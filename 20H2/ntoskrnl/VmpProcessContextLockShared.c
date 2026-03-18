/*
 * XREFs of VmpProcessContextLockShared @ 0x1405A2FA4
 * Callers:
 *     VmColdPagesHint @ 0x1405A0DA0 (VmColdPagesHint.c)
 *     VmpAccessFaultBatch @ 0x1405A113C (VmpAccessFaultBatch.c)
 *     VmpPrefetchVirtualAddresses @ 0x1405A2B54 (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x1405A31BC (VmpQueryAccessedState.c)
 *     VmpSplitMemoryRange @ 0x1405A3714 (VmpSplitMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402971C0 (ExAcquireSpinLockSharedAtDpcLevel.c)
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
