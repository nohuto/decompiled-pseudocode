/*
 * XREFs of KiDpcWatchdogCounterReset @ 0x1402221F4
 * Callers:
 *     KiDpcWatchdog @ 0x1402220E0 (KiDpcWatchdog.c)
 *     KeAccumulateTicks @ 0x1403078A0 (KeAccumulateTicks.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140222280 (KiResetGlobalDpcWatchdogProfiler.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceCumulativeDpcSoftTimeout @ 0x14062D678 (EtwTraceCumulativeDpcSoftTimeout.c)
 */

__int64 __fastcall KiDpcWatchdogCounterReset(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  int v5; // r9d
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 0x3FFC;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v5 = *(_DWORD *)(a1 + 13272);
  if ( v5 )
  {
    a3 = *(unsigned int *)(a1 + 32428);
    if ( (int)a3 >= v5 )
      EtwTraceCumulativeDpcSoftTimeout(*(_QWORD *)(a1 + 8), a1);
  }
  *(_DWORD *)(a1 + 32428) = 0;
  KiResetGlobalDpcWatchdogProfiler(a1, a2, a3);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
