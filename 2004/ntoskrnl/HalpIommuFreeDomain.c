/*
 * XREFs of HalpIommuFreeDomain @ 0x1404C6F6C
 * Callers:
 *     HalpIommuDereferenceHardwareDomain @ 0x1404C4214 (HalpIommuDereferenceHardwareDomain.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpIommuFlushDomainTB @ 0x1404C6F2C (HalpIommuFlushDomainTB.c)
 */

void __fastcall HalpIommuFreeDomain(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf

  if ( !HalpHvIommu )
  {
    HalpIommuFlushDomainTB(a1, a2, 0, 0LL);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 432));
    _bittestandreset(*(signed __int32 **)(a1 + 448), *(_DWORD *)(a2 + 24));
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 432));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v9 = (v8 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
  }
}
