/*
 * XREFs of KiSelectReadyThreadEx @ 0x14022FEC0
 * Callers:
 *     KiSetPriorityThread @ 0x1402302A0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402305B0 (KeSetActualBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     KiSchedulerApc @ 0x140279C00 (KiSchedulerApc.c)
 *     KeYieldExecution @ 0x14029E1B0 (KeYieldExecution.c)
 *     KiApplyForegroundBoostThread @ 0x1402EA08C (KiApplyForegroundBoostThread.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x14024D500 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSelectLowestRankedThread @ 0x1402571A4 (KiSelectLowestRankedThread.c)
 *     KiChooseLowestRankedThread @ 0x1402EAFC0 (KiChooseLowestRankedThread.c)
 *     KiSelectReadyThread @ 0x140347900 (KiSelectReadyThread.c)
 */

__int64 __fastcall KiSelectReadyThreadEx(struct _KPRCB *a1, _KTHREAD *a2, char a3)
{
  unsigned int Priority; // r10d
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdx
  __int64 v8; // rcx
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
    return KiSelectReadyThread(v8, a1);
  }
  result = KiSelectReadyThread(1LL, a1);
  if ( !result )
  {
    result = KiSelectLowestRankedThread(a1);
    if ( !result && (a3 & 1) == 0 )
    {
      v8 = 0LL;
      return KiSelectReadyThread(v8, a1);
    }
  }
  return result;
}
