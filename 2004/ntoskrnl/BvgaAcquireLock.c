/*
 * XREFs of BvgaAcquireLock @ 0x1404FA700
 * Callers:
 *     BvgaBitBlt @ 0x1404FA7A0 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1404FA820 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x1404FA890 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x1404FA990 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x1404FAB40 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x1404FAC00 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
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
