/*
 * XREFs of ExTryAcquireSpinLockSharedAtDpcLevel @ 0x1405B5D30
 * Callers:
 *     MmReadProcessPageTables @ 0x140548040 (MmReadProcessPageTables.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B60AC (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ExTryAcquireSpinLockSharedAtDpcLevel(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rdx
  int v4; // eax
  unsigned int v5; // edi
  signed __int32 v6; // ett
  _DWORD *v7; // rcx
  int v8; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v4 = SchedulerAssist[6];
      SchedulerAssist[6] = v4 + 1;
      if ( v4 == -1 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v5 = ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented(a1);
  }
  else
  {
    _m_prefetchw(a1);
    v6 = *a1 & 0x7FFFFFFF;
    v5 = v6 == _InterlockedCompareExchange(a1, v6 + 1, v6);
  }
  if ( !v5 )
  {
    v7 = CurrentPrcb->SchedulerAssist;
    if ( v7 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v8 = v7[6] - 1;
        v7[6] = v8;
        if ( !v8 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  return v5;
}
