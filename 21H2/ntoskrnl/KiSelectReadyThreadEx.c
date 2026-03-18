/*
 * XREFs of KiSelectReadyThreadEx @ 0x1402B7AE0
 * Callers:
 *     KeYieldExecution @ 0x14029B310 (KeYieldExecution.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KiSchedulerApc @ 0x1402EFA40 (KiSchedulerApc.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 *     KiRemoveBoostThread @ 0x14035B110 (KiRemoveBoostThread.c)
 *     KiSelectNextThread @ 0x14035C3FC (KiSelectNextThread.c)
 *     KiApplyForegroundBoostThread @ 0x14035CAD8 (KiApplyForegroundBoostThread.c)
 * Callees:
 *     KiChooseLowestRankedThread @ 0x140210224 (KiChooseLowestRankedThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSelectReadyThread @ 0x1402B4AE0 (KiSelectReadyThread.c)
 *     KiSelectLowestRankedThread @ 0x14034412C (KiSelectLowestRankedThread.c)
 */

__int64 __fastcall KiSelectReadyThreadEx(struct _KPRCB *a1, _KTHREAD *a2, __int64 a3)
{
  char v3; // si
  __int64 result; // rax
  unsigned int Priority; // eax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdx
  unsigned int v9; // esi
  signed int v10; // ecx
  __int64 v11; // rdx
  char v12; // r9

  v3 = a3;
  if ( a2 )
  {
    Priority = a2->Priority;
    if ( a2->Priority == 31 )
    {
      return 0LL;
    }
    else
    {
      SchedulingGroup = a2->SchedulingGroup;
      v9 = Priority + 1;
      if ( (a3 & 2) != 0 )
        v9 = Priority;
      if ( !SchedulingGroup
        || (v11 = (__int64)SchedulingGroup + a1->ScbOffset) == 0
        || (a1 == KeGetCurrentPrcb() || a2 != a1->CurrentThread ? (v12 = 1) : (v12 = 0),
            !(unsigned int)KiGetThreadEffectiveRankNonZero((__int64)a2, v11, a3, v12, 0LL)) )
      {
        v10 = v9;
        return KiSelectReadyThread(v10, (__int64)a1, a3);
      }
      return KiChooseLowestRankedThread(a1, a2, v9);
    }
  }
  else
  {
    result = KiSelectReadyThread(1, (__int64)a1, a3);
    if ( !result )
    {
      result = KiSelectLowestRankedThread(a1);
      if ( !result && (v3 & 1) == 0 )
      {
        v10 = 0;
        return KiSelectReadyThread(v10, (__int64)a1, a3);
      }
    }
  }
  return result;
}
