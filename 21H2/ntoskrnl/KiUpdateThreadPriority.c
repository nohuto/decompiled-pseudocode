/*
 * XREFs of KiUpdateThreadPriority @ 0x140291010
 * Callers:
 *     KiDirectSwitchThread @ 0x14020F360 (KiDirectSwitchThread.c)
 *     KiSetPriorityBoost @ 0x14021050C (KiSetPriorityBoost.c)
 *     KiQuantumEnd @ 0x14028FFD0 (KiQuantumEnd.c)
 *     KeStartThread @ 0x140292350 (KeStartThread.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402B9FC0 (KiUpdateVPBackingThreadPriority.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x14035CAD8 (KiApplyForegroundBoostThread.c)
 *     KeTransitionProcessorParkState @ 0x14057C888 (KeTransitionProcessorParkState.c)
 *     KiCompleteKernelInit @ 0x140A58CF8 (KiCompleteKernelInit.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAbQueueAutoBoostDpc @ 0x140229D30 (KiAbQueueAutoBoostDpc.c)
 *     KiSetSchedulerAssistPriority @ 0x14045B7FC (KiSetSchedulerAssistPriority.c)
 */

void __fastcall KiUpdateThreadPriority(__int64 a1, __int64 a2, PVOID *p_DpcData, char a4)
{
  struct _KDPC *CurrentPrcb; // rcx
  char v7; // di
  _BYTE *v9; // r14
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  bool v15; // zf
  char v16; // al
  PVOID *v17; // rdx
  __int64 v18; // rdx
  unsigned int v19; // edx
  char v20; // al
  char v21; // al

  CurrentPrcb = (struct _KDPC *)KeGetCurrentPrcb();
  v7 = (char)p_DpcData;
  if ( (char)p_DpcData > *(char *)(a2 + 195) )
  {
    if ( *(_BYTE *)(a2 + 793) )
    {
      v17 = (PVOID *)(a2 + 808);
      if ( *v17 == (PVOID)1 )
      {
        p_DpcData = &CurrentPrcb[557].DpcData;
        if ( CurrentPrcb != (struct _KDPC *)-35704LL )
        {
          *v17 = *p_DpcData;
          *p_DpcData = v17;
          _InterlockedAdd16((volatile signed __int16 *)(a2 + 868), 1u);
          KiAbQueueAutoBoostDpc(CurrentPrcb);
        }
      }
    }
  }
  *(_BYTE *)(a2 + 195) = v7;
  if ( a4 )
  {
    v9 = *(_BYTE **)(a1 + 56);
    if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
    {
      if ( v7 >= 16
        || !*(_QWORD *)(a2 + 104)
        || (v13 = *(_QWORD *)(a2 + 104)) == 0
        || (v14 = *(unsigned int *)(a1 + 216) + v13) == 0
        || (v15 = (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v14, 0LL, 0, 0LL) == 0, v16 = 1, v15) )
      {
        v16 = *(_BYTE *)(a2 + 195);
      }
      v7 = v16;
    }
    v10 = v7 & 0x7F | (*(_BYTE *)(a2 + 119) << 7);
    *v9 = v10;
    v11 = *(_QWORD *)(a1 + 35000);
    if ( v11 )
    {
      if ( a2 == *(_QWORD *)(a1 + 24) )
        v18 = (unsigned int)KiVpThreadSystemWorkPriority;
      else
        v18 = v10 & 0x7F;
      KiSetSchedulerAssistPriority(v11, v18, 0LL);
    }
    v12 = *(_QWORD *)(a1 + 56);
    if ( KeHeteroSystem )
    {
      v19 = *(_DWORD *)(a2 + 80);
      v20 = (*(_BYTE *)(v12 + 64) ^ *(_BYTE *)(a2 + 512)) & 7 ^ *(_BYTE *)(v12 + 64);
      v21 = (v20 ^ (8 * *(_BYTE *)(a2 + 516))) & 0x38 ^ v20;
      if ( v19 <= *(_DWORD *)(a2 + 84) )
        v19 = *(_DWORD *)(a2 + 84);
      *(_BYTE *)(v12 + 64) = (v19 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0) | v21 & 0xBF;
    }
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
  {
    LOBYTE(p_DpcData) = 1;
    KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 968), (unsigned int)*(char *)(a2 + 195), p_DpcData);
  }
}
