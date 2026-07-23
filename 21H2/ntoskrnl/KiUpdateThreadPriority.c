/*
 * XREFs of KiUpdateThreadPriority @ 0x1402D56A0
 * Callers:
 *     KeYieldExecution @ 0x14021B710 (KeYieldExecution.c)
 *     KiSetPriorityBoost @ 0x14023B2B0 (KiSetPriorityBoost.c)
 *     KeStartThread @ 0x140265A0C (KeStartThread.c)
 *     KiQuantumEnd @ 0x140279260 (KiQuantumEnd.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14027A380 (KiUpdateVPBackingThreadPriority.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiApplyForegroundBoostThread @ 0x14029B3DC (KiApplyForegroundBoostThread.c)
 *     KiSetPriorityThread @ 0x1402D4AF0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 *     KiDirectSwitchThread @ 0x1402F1090 (KiDirectSwitchThread.c)
 *     KiDeferredReadySingleThread @ 0x14034EC10 (KiDeferredReadySingleThread.c)
 *     KeTransitionProcessorParkState @ 0x1405256EC (KeTransitionProcessorParkState.c)
 *     KiCompleteKernelInit @ 0x14099F010 (KiCompleteKernelInit.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x140205B9C (KiAbQueueAutoBoostDpc.c)
 *     KiIsThreadRankNonZero @ 0x1402F1CA0 (KiIsThreadRankNonZero.c)
 *     KiSetSchedulerAssistPriority @ 0x140520B94 (KiSetSchedulerAssistPriority.c)
 */

void __fastcall KiUpdateThreadPriority(__int64 a1, __int64 a2, PVOID *p_DpcData, char a4)
{
  struct _KDPC *CurrentPrcb; // rcx
  char v7; // di
  __int64 v9; // rcx
  bool v10; // zf
  char v11; // al
  PVOID *v12; // rdx
  __int64 v13; // rdx

  CurrentPrcb = (struct _KDPC *)KeGetCurrentPrcb();
  v7 = (char)p_DpcData;
  if ( (char)p_DpcData > *(char *)(a2 + 195) )
  {
    if ( *(_BYTE *)(a2 + 793) )
    {
      v12 = (PVOID *)(a2 + 808);
      if ( *v12 == (PVOID)1 )
      {
        p_DpcData = &CurrentPrcb[541].DpcData;
        if ( CurrentPrcb != (struct _KDPC *)-34680LL )
        {
          *v12 = *p_DpcData;
          *p_DpcData = v12;
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
    LOBYTE(p_DpcData) = 1;
    KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 968), (unsigned int)*(char *)(a2 + 195), p_DpcData);
  }
}
