/*
 * XREFs of KxTryToAcquireQueuedSpinLock @ 0x140341520
 * Callers:
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1403412CC (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiGetPerfectColorHeadPage @ 0x1403412FC (MiGetPerfectColorHeadPage.c)
 *     KeTryToAcquireQueuedSpinLock @ 0x140514680 (KeTryToAcquireQueuedSpinLock.c)
 *     KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140514790 (KeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x1405149C8 (KiTryToAcquireQueuedSpinLockInstrumented.c)
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
