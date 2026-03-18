/*
 * XREFs of IopAcquirePassiveInterruptBlockLock @ 0x14050B684
 * Callers:
 *     IoProcessPassiveInterrupts @ 0x14050B524 (IoProcessPassiveInterrupts.c)
 *     IopDereferencePassiveInterruptBlock @ 0x14050B700 (IopDereferencePassiveInterruptBlock.c)
 *     IopPassiveInterruptWorker @ 0x14050BA80 (IopPassiveInterruptWorker.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
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
