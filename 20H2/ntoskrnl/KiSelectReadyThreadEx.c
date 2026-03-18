/*
 * XREFs of KiSelectReadyThreadEx @ 0x1402BA4B0
 * Callers:
 *     KiSetPriorityThread @ 0x140291A00 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402BE010 (KeSetActualBasePriorityThread.c)
 *     KiSchedulerApc @ 0x1402D7C50 (KiSchedulerApc.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     KiApplyForegroundBoostThread @ 0x1402E972C (KiApplyForegroundBoostThread.c)
 *     KeYieldExecution @ 0x140302FA0 (KeYieldExecution.c)
 * Callees:
 *     KiSelectReadyThread @ 0x14021D6F0 (KiSelectReadyThread.c)
 *     KiSelectLowestRankedThread @ 0x1402D9B60 (KiSelectLowestRankedThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402DF230 (KiGetThreadEffectiveRankNonZero.c)
 *     KiChooseLowestRankedThread @ 0x14035E8B4 (KiChooseLowestRankedThread.c)
 */

__int64 __fastcall KiSelectReadyThreadEx(struct _KPRCB *a1, _KTHREAD *a2, char a3)
{
  unsigned int Priority; // r10d
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdx
  signed int v8; // ecx
  __int64 result; // rax
  __int64 v10; // rdx
  bool v11; // r9

  if ( a2 )
  {
    if ( a2->Priority == 31 )
      return 0LL;
    Priority = a2->Priority;
    if ( (a3 & 2) == 0 )
      Priority = a2->Priority + 1;
    SchedulingGroup = a2->SchedulingGroup;
    if ( SchedulingGroup )
    {
      v10 = (__int64)SchedulingGroup + a1->ScbOffset;
      if ( v10 )
      {
        v11 = a1 == KeGetCurrentPrcb() || a2 != a1->CurrentThread;
        if ( (unsigned int)KiGetThreadEffectiveRankNonZero((_DWORD)a2, v10, a3, v11, 0LL) )
          return KiChooseLowestRankedThread(a1, a2, Priority);
      }
    }
    v8 = Priority;
    return KiSelectReadyThread(v8, (__int64)a1);
  }
  result = KiSelectReadyThread(1, (__int64)a1);
  if ( !result )
  {
    result = KiSelectLowestRankedThread(a1);
    if ( !result && (a3 & 1) == 0 )
    {
      v8 = 0;
      return KiSelectReadyThread(v8, (__int64)a1);
    }
  }
  return result;
}
