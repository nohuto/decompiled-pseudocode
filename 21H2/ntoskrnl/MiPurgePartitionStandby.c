/*
 * XREFs of MiPurgePartitionStandby @ 0x14038E4BC
 * Callers:
 *     MiFinishResume @ 0x14038DF70 (MiFinishResume.c)
 *     MiTrimAllSystemPagableMemory @ 0x1405970A0 (MiTrimAllSystemPagableMemory.c)
 *     MmPerformMemoryListCommand @ 0x140A5B810 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiIsFreeZeroPfnCold @ 0x140268620 (MiIsFreeZeroPfnCold.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14038E608 (MiRemoveLowestPriorityStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiPurgePartitionStandby(__int64 a1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG_PTR v9; // r14
  __int64 v10; // rdi
  int v11; // eax
  _DWORD *SchedulerAssist; // r9
  __int64 result; // rax
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v16; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  int v23; // [rsp+50h] [rbp+18h] BYREF

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v5 = MiRemoveLowestPriorityStandbyPage(a1, a2, 0x2000LL);
    v9 = v5;
    if ( v5 == -1 )
      break;
    v10 = 48 * v5 - 0x220000000000LL;
    v23 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v23, v6, v7, v8);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    *(_QWORD *)(v10 + 24) |= 0x4000000000000000uLL;
    LOBYTE(v11) = MiIsFreeZeroPfnCold(v10);
    MiInsertPageInFreeOrZeroedList(v9, v11 != 0 ? 1026 : 2);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v16 = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v18 = (v17 & v16[5]) == 0;
          v16[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v18 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
