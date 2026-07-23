/*
 * XREFs of KiSelectReadyThreadEx @ 0x1402D4710
 * Callers:
 *     KeYieldExecution @ 0x14021B710 (KeYieldExecution.c)
 *     KiSchedulerApc @ 0x140267BA0 (KiSchedulerApc.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     KiApplyForegroundBoostThread @ 0x14029B3DC (KiApplyForegroundBoostThread.c)
 *     KiSetPriorityThread @ 0x1402D4AF0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 * Callees:
 *     KiSelectLowestRankedThread @ 0x140278714 (KiSelectLowestRankedThread.c)
 *     KiChooseLowestRankedThread @ 0x14029C310 (KiChooseLowestRankedThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402F1D50 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSelectReadyThread @ 0x140352650 (KiSelectReadyThread.c)
 */

__int64 __fastcall KiSelectReadyThreadEx(struct _KPRCB *a1, _KTHREAD *a2, char a3)
{
  unsigned int Priority; // r10d
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  char *v10; // rdx
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
      v10 = (char *)SchedulingGroup + a1->ScbOffset;
      if ( v10 )
      {
        v11 = a1 == KeGetCurrentPrcb() || a2 != a1->CurrentThread;
        if ( (unsigned int)KiGetThreadEffectiveRankNonZero((_DWORD)a2, (_DWORD)v10, a3, v11, 0LL) )
          return KiChooseLowestRankedThread(a1, a2, Priority);
      }
    }
    v8 = Priority;
    return KiSelectReadyThread(v8, a1);
  }
  result = KiSelectReadyThread(1LL, a1);
  if ( !result )
  {
    result = KiSelectLowestRankedThread((__int64)a1);
    if ( !result && (a3 & 1) == 0 )
    {
      v8 = 0LL;
      return KiSelectReadyThread(v8, a1);
    }
  }
  return result;
}
