/*
 * XREFs of MmQueryProcessWorkingSetSwapPages @ 0x140286CF0
 * Callers:
 *     PfpPrivSourceEnum @ 0x1406A53B4 (PfpPrivSourceEnum.c)
 *     SmStoreCompressionStop @ 0x1406BD690 (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x1406BD78C (SmStoreCompressionStart.c)
 * Callees:
 *     MiGetWorkingSetSwapSupport @ 0x1402872B0 (MiGetWorkingSetSwapSupport.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmQueryProcessWorkingSetSwapPages(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  unsigned __int64 WorkingSetSwapSupport; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf

  v2 = a1 + 1664;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(a1 + 1664) <= 2 )
    return 3221226021LL;
  v5 = -1073741275;
  v6 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(v2 + 174));
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 1136));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v2);
  if ( WorkingSetSwapSupport > 2 )
  {
    v5 = 0;
    *a2 = *(_QWORD *)(*(_QWORD *)WorkingSetSwapSupport + 24LL);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 1136));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v5;
}
