/*
 * XREFs of HalpIommuAcquireNewDomain @ 0x1404CBD84
 * Callers:
 *     HalpIommuGetHardwareDomain @ 0x1404C9834 (HalpIommuGetHardwareDomain.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     RtlFindClearBitsAndSet @ 0x1402F5970 (RtlFindClearBitsAndSet.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuAcquireNewDomain(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v5; // r15
  unsigned int v6; // ebp
  unsigned __int64 v7; // rsi
  ULONG ClearBitsAndSet; // eax
  __int64 (__fastcall *v9)(_QWORD, __int64, _QWORD, _QWORD); // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  if ( HalpHvIommu )
    return 3221225659LL;
  v5 = (KSPIN_LOCK *)(a1 + 432);
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 432));
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(a1 + 440), 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v6 = -1073741670;
  }
  else
  {
    *(_DWORD *)(a2 + 24) = ClearBitsAndSet;
    v9 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(a1 + 72);
    if ( v9 )
      v6 = v9(*(_QWORD *)(a1 + 16), a2, 0LL, 0LL);
  }
  KxReleaseSpinLock(v5);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v6;
}
