/*
 * XREFs of IopAcquirePassiveInterruptBlockLock @ 0x140507D54
 * Callers:
 *     IoProcessPassiveInterrupts @ 0x140507BF4 (IoProcessPassiveInterrupts.c)
 *     IopDereferencePassiveInterruptBlock @ 0x140507DD0 (IopDereferencePassiveInterruptBlock.c)
 *     IopPassiveInterruptWorker @ 0x140508150 (IopPassiveInterruptWorker.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
 */

void __fastcall IopAcquirePassiveInterruptBlockLock(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // r10
  _DWORD *SchedulerAssist; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0x1FFC;
  }
  *a2 = CurrentIrql;
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 56));
}
