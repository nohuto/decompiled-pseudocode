/*
 * XREFs of KiUpdateThreadPriority @ 0x1402BE8B0
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140219BA0 (KiDeferredReadySingleThread.c)
 *     KiSetPriorityThread @ 0x140291A00 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402BE010 (KeSetActualBasePriorityThread.c)
 *     KeStartThread @ 0x1402D8900 (KeStartThread.c)
 *     KiQuantumEnd @ 0x1402DAD50 (KiQuantumEnd.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402DBE70 (KiUpdateVPBackingThreadPriority.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiDirectSwitchThread @ 0x1402DE570 (KiDirectSwitchThread.c)
 *     KiApplyForegroundBoostThread @ 0x1402E972C (KiApplyForegroundBoostThread.c)
 *     KeYieldExecution @ 0x140302FA0 (KeYieldExecution.c)
 *     KiSetPriorityBoost @ 0x14031A640 (KiSetPriorityBoost.c)
 *     KeTransitionProcessorParkState @ 0x1405239CC (KeTransitionProcessorParkState.c)
 *     KiCompleteKernelInit @ 0x1409A0420 (KiCompleteKernelInit.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x1402DF180 (KiIsThreadRankNonZero.c)
 *     KiAbQueueAutoBoostDpc @ 0x14035F69C (KiAbQueueAutoBoostDpc.c)
 *     KiSetSchedulerAssistPriority @ 0x14051EE74 (KiSetSchedulerAssistPriority.c)
 */

void __fastcall KiUpdateThreadPriority(__int64 a1, __int64 a2, _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList, char a4)
{
  struct _KPRCB *CurrentPrcb; // rcx
  char v7; // di
  __int64 v9; // rcx
  bool v10; // zf
  char v11; // al
  struct _SINGLE_LIST_ENTRY *v12; // rdx
  __int64 v13; // rdx

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = (char)p_AbPropagateBoostsList;
  if ( (char)p_AbPropagateBoostsList > *(char *)(a2 + 195) )
  {
    if ( *(_BYTE *)(a2 + 793) )
    {
      v12 = (struct _SINGLE_LIST_ENTRY *)(a2 + 808);
      if ( v12->Next == (struct _SINGLE_LIST_ENTRY *)1 )
      {
        p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
        if ( CurrentPrcb != (struct _KPRCB *)-34680LL )
        {
          v12->Next = p_AbPropagateBoostsList->Next;
          p_AbPropagateBoostsList->Next = v12;
          _InterlockedIncrement16((volatile signed __int16 *)(a2 + 868));
          KiAbQueueAutoBoostDpc(CurrentPrcb);
        }
      }
    }
  }
  *(_BYTE *)(a2 + 195) = v7;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
    {
      v10 = (unsigned __int8)KiIsThreadRankNonZero(a2, a1) == 0;
      v11 = 1;
      if ( v10 )
        v11 = *(_BYTE *)(a2 + 195);
      v7 = v11;
    }
    **(_BYTE **)(a1 + 56) = v7;
    v9 = *(_QWORD *)(a1 + 33976);
    if ( v9 )
    {
      v13 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( a2 != *(_QWORD *)(a1 + 24) )
        v13 = (unsigned int)v7;
      KiSetSchedulerAssistPriority(v9, v13, 0LL);
    }
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
  {
    LOBYTE(p_AbPropagateBoostsList) = 1;
    KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 968), (unsigned int)*(char *)(a2 + 195), p_AbPropagateBoostsList);
  }
}
