/*
 * XREFs of KdAcquireDebuggerLock @ 0x14050B6B0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
 */

void __fastcall KdAcquireDebuggerLock(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // r10
  _DWORD *SchedulerAssist; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
  }
  *a1 = CurrentIrql;
  KxAcquireSpinLock(&KdDebuggerLock);
}
