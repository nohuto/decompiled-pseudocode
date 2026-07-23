/*
 * XREFs of MiPurgePartitionStandby @ 0x140385154
 * Callers:
 *     MiFinishResume @ 0x1403849F0 (MiFinishResume.c)
 *     MiTrimAllSystemPagableMemory @ 0x14053C280 (MiTrimAllSystemPagableMemory.c)
 *     MmPerformMemoryListCommand @ 0x14099BB4C (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiIsFreeZeroPfnCold @ 0x14030DE70 (MiIsFreeZeroPfnCold.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385270 (MiRemoveLowestPriorityStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiPurgePartitionStandby(__int64 a1, unsigned int a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG_PTR v11; // r14
  __int64 v12; // rdi
  int v13; // eax
  __int64 result; // rax
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r10
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
    v7 = MiRemoveLowestPriorityStandbyPage(a1, a2, 0x2000LL, SchedulerAssist);
    v11 = v7;
    if ( v7 == -1 )
      break;
    v12 = 48 * v7 - 0x58000000000LL;
    v23 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v23, v8, v9, v10);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    *(_QWORD *)(v12 + 24) |= 0x4000000000000000uLL;
    LOBYTE(v13) = MiIsFreeZeroPfnCold(v12);
    MiInsertPageInFreeOrZeroedList(v11, v13 != 0 ? 1026 : 2);
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v18 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
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
