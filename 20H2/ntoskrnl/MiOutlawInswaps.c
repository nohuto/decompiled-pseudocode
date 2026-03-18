/*
 * XREFs of MiOutlawInswaps @ 0x14033B3FC
 * Callers:
 *     MiBeginProcessClean @ 0x14033B300 (MiBeginProcessClean.c)
 * Callees:
 *     MiGetWorkingSetSwapSupport @ 0x140250E80 (MiGetWorkingSetSwapSupport.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiOutlawInswaps(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 WorkingSetSwapSupport; // rbp
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  v1 = a1 + 1664;
  v2 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(a1 + 1838));
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1136));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v1, v4);
  *((_QWORD *)MiGetSharedVm(v6) + 3) = 2LL;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1136));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return WorkingSetSwapSupport;
}
