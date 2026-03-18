/*
 * XREFs of KiSelectReadyThreadEx @ 0x140269EC0
 * Callers:
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KiSetPriorityThread @ 0x14026C6D0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x140335F0C (KiApplyForegroundBoostThread.c)
 *     KeYieldExecution @ 0x1403366C0 (KeYieldExecution.c)
 *     KiSchedulerApc @ 0x1403564C0 (KiSchedulerApc.c)
 * Callees:
 *     KiSelectReadyThread @ 0x140266580 (KiSelectReadyThread.c)
 *     KiSelectLowestRankedThread @ 0x140330BE0 (KiSelectLowestRankedThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140334740 (KiGetThreadEffectiveRankNonZero.c)
 *     KiChooseLowestRankedThread @ 0x140334C40 (KiChooseLowestRankedThread.c)
 */

__int64 __fastcall KiSelectReadyThreadEx(struct _KPRCB *a1, _KTHREAD *a2, char a3)
{
  unsigned int Priority; // eax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdx
  unsigned int v8; // ebx
  int v9; // ecx
  __int64 result; // rax
  __int64 v11; // rdx
  bool v12; // r9
  __int64 v13; // r10

  if ( a2 )
  {
    Priority = a2->Priority;
    if ( a2->Priority == 31 )
      return 0LL;
    SchedulingGroup = a2->SchedulingGroup;
    v8 = Priority + 1;
    if ( (a3 & 2) != 0 )
      v8 = Priority;
    if ( SchedulingGroup )
    {
      v11 = (__int64)SchedulingGroup + a1->ScbOffset;
      if ( v11 )
      {
        v12 = a1 == KeGetCurrentPrcb() || a2 != a1->CurrentThread;
        if ( (unsigned int)KiGetThreadEffectiveRankNonZero((_DWORD)a2, v11, a3, v12, 0LL) )
          return KiChooseLowestRankedThread(a1, v13, v8);
      }
    }
    v9 = v8;
    return KiSelectReadyThread(v9, (__int64)a1);
  }
  result = KiSelectReadyThread(1, (__int64)a1);
  if ( !result )
  {
    result = KiSelectLowestRankedThread(a1);
    if ( !result && (a3 & 1) == 0 )
    {
      v9 = 0;
      return KiSelectReadyThread(v9, (__int64)a1);
    }
  }
  return result;
}
