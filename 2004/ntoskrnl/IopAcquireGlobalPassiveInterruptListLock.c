/*
 * XREFs of IopAcquireGlobalPassiveInterruptListLock @ 0x140507CDC
 * Callers:
 *     IopDereferencePassiveInterruptBlock @ 0x140507DD0 (IopDereferencePassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x140507F48 (IopFindPassiveInterruptBlock.c)
 *     IopInsertPassiveInterruptBlock @ 0x140508034 (IopInsertPassiveInterruptBlock.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
 */

void __fastcall IopAcquireGlobalPassiveInterruptListLock(unsigned __int8 *a1)
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
  *a1 = CurrentIrql;
  KxAcquireSpinLock(&PassiveInterruptListLock);
}
