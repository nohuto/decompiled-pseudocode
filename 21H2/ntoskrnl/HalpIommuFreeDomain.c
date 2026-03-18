/*
 * XREFs of HalpIommuFreeDomain @ 0x140517FE8
 * Callers:
 *     HalpIommuDereferenceHardwareDomain @ 0x14051A824 (HalpIommuDereferenceHardwareDomain.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     HalpIommuFlushDomainTB @ 0x140517FA8 (HalpIommuFlushDomainTB.c)
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
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 448));
    _bittestandreset(*(signed __int32 **)(a1 + 464), *(_DWORD *)(a2 + 48));
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 448));
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
