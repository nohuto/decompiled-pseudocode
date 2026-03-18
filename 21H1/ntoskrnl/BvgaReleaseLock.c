/*
 * XREFs of BvgaReleaseLock @ 0x1404FA3B0
 * Callers:
 *     BvgaBitBlt @ 0x1404FA150 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1404FA1D0 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x1404FA240 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x1404FA340 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x1404FA4F0 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x1404FA5B0 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

void BvgaReleaseLock()
{
  unsigned __int64 v0; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v3; // eax
  bool v4; // zf

  v0 = (unsigned __int8)BvgaOldIrql;
  KxReleaseSpinLock(&BootDriverLock);
  if ( (unsigned __int8)v0 <= 2u )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v3 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
      v4 = (v3 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v3;
      if ( v4 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v0);
  }
}
