/*
 * XREFs of BvgaAcquireLock @ 0x1405517A0
 * Callers:
 *     BvgaBitBlt @ 0x140551840 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1405518C0 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x140551930 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x140551A30 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x140551BE0 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x140551CA0 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 */

void BvgaAcquireLock()
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql <= 2u )
  {
    while ( BootDriverLock )
      _mm_pause();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
  }
  KxAcquireSpinLock(&BootDriverLock);
  BvgaOldIrql = CurrentIrql;
}
