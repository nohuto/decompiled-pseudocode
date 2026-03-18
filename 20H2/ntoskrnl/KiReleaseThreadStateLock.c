/*
 * XREFs of KiReleaseThreadStateLock @ 0x1402E9B20
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x140208B30 (KeQueryTotalCycleTimeThread.c)
 *     KiSetPriorityThread @ 0x140291A00 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402BE010 (KeSetActualBasePriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1402E972C (KiApplyForegroundBoostThread.c)
 *     KiSetAffinityThread @ 0x1402F7A00 (KiSetAffinityThread.c)
 *     MiSwapStackPage @ 0x14032576C (MiSwapStackPage.c)
 *     KeSetIdealProcessorThreadEx @ 0x140333B58 (KeSetIdealProcessorThreadEx.c)
 *     KiSetThreadSchedulingGroup @ 0x14035F01C (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14035F0EC (KiRemoveThreadFromSchedulingGroup.c)
 *     KeUpdateThreadTag @ 0x14036BC30 (KeUpdateThreadTag.c)
 *     KiUpdateThreadCpuSets @ 0x1403C589C (KiUpdateThreadCpuSets.c)
 *     KeTryToFreezeThreadStack @ 0x140511848 (KeTryToFreezeThreadStack.c)
 *     KeSetThreadSchedulerAssist @ 0x14051CAE8 (KeSetThreadSchedulerAssist.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14051E510 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x14051E884 (KiSetHeteroPolicyThread.c)
 *     KeAbCrossThreadDelete @ 0x14051F398 (KeAbCrossThreadDelete.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiReleaseThreadStateLock(__int64 a1, __int64 a2, volatile signed __int64 *a3)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  struct _KPRCB *v6; // rcx
  _DWORD *v7; // rdx
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        result = (unsigned int)(SchedulerAssist[6] - 1);
        SchedulerAssist[6] = result;
        if ( !(_DWORD)result )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  if ( a3 )
  {
    _InterlockedAnd64(a3, 0LL);
    v6 = KeGetCurrentPrcb();
    v7 = v6->SchedulerAssist;
    if ( v7 )
    {
      if ( v6->NestingLevel <= 1u )
      {
        result = (unsigned int)(v7[6] - 1);
        v7[6] = result;
        if ( !(_DWORD)result )
          return KiRemoveSystemWorkPriorityKick(v6);
      }
    }
  }
  return result;
}
