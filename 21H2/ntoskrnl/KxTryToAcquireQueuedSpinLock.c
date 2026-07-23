/*
 * XREFs of KxTryToAcquireQueuedSpinLock @ 0x14021614C
 * Callers:
 *     MiTryToAcquireExpansionLockAtDpc @ 0x140215EF8 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiGetPerfectColorHeadPage @ 0x140215F28 (MiGetPerfectColorHeadPage.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     KeTryToAcquireQueuedSpinLock @ 0x140516400 (KeTryToAcquireQueuedSpinLock.c)
 *     KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140516510 (KeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x140516748 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KxTryToAcquireQueuedSpinLock(signed __int64 a1, _DWORD *a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int v5; // ebx
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v8; // rcx
  int v9; // eax
  int v10; // eax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    return (unsigned int)KiTryToAcquireQueuedSpinLockInstrumented();
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v9 = SchedulerAssist[6];
        SchedulerAssist[6] = v9 + 1;
        if ( v9 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    _m_prefetchw(a2);
    if ( *a2 || _InterlockedCompareExchange64((volatile signed __int64 *)a2, a1, 0LL) )
    {
      v8 = CurrentPrcb->SchedulerAssist;
      if ( v8 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v10 = v8[6] - 1;
          v8[6] = v10;
          if ( !v10 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _mm_pause();
    }
    else
    {
      return 1;
    }
  }
  return v5;
}
