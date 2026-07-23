/*
 * XREFs of MiDereferencePageRunsEx @ 0x140241A18
 * Callers:
 *     MiFindContiguousPages @ 0x14030C430 (MiFindContiguousPages.c)
 *     MiDereferencePageRuns @ 0x14037EB10 (MiDereferencePageRuns.c)
 *     MiFinishResume @ 0x1403849F0 (MiFinishResume.c)
 *     MiDeleteZeroThreadContext @ 0x14054FE54 (MiDeleteZeroThreadContext.c)
 *     MiWaitForFreePagesToZero @ 0x1405501CC (MiWaitForFreePagesToZero.c)
 *     MiRebuildLargePage @ 0x140552918 (MiRebuildLargePage.c)
 *     MiDeletePartitionResources @ 0x140561B58 (MiDeletePartitionResources.c)
 *     MiUpdatePartitionMemory @ 0x1405636B4 (MiUpdatePartitionMemory.c)
 *     MiMakePartitionMemoryBlock @ 0x1408DB6E0 (MiMakePartitionMemoryBlock.c)
 * Callees:
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferencePageRunsEx(__int64 a1, int a2)
{
  void *v2; // r12
  __int64 v4; // r13
  _QWORD *v6; // r14
  unsigned __int64 v7; // rsi
  bool v8; // zf
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r9
  int v11; // eax
  _DWORD *v12; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  _QWORD *v21; // rbx

  v2 = (void *)(a1 - 16);
  v4 = *(_QWORD *)(a1 - 16);
  v6 = 0LL;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 200));
  v8 = (*(_QWORD *)(a1 - 8))-- == 1LL;
  if ( !v8 )
    v2 = 0LL;
  if ( a2 )
  {
    if ( (ULONG_PTR *)v4 != &MiSystemPartition )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 200));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v8 = (v16 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v16;
            if ( v8 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v7);
      LOBYTE(v7) = ExAcquireSpinLockExclusive(&dword_140C50E88);
    }
    if ( !--qword_140C50DE8 )
    {
      v6 = (_QWORD *)qword_140C50E18;
      qword_140C50E18 = 0LL;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C50E88);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v17 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = v18->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v8 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
    }
    __writecr8((unsigned __int8)v7);
    if ( v6 )
    {
      do
      {
        v21 = (_QWORD *)*v6;
        KeSignalGate((__int64)(v6 + 1), 1);
        v6 = v21;
      }
      while ( v21 );
    }
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 200));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v9 = KeGetCurrentIrql();
        if ( v9 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v9 >= 2u )
        {
          v10 = KeGetCurrentPrcb();
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v12 = v10->SchedulerAssist;
          v8 = (v11 & v12[5]) == 0;
          v12[5] &= v11;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(v10);
        }
      }
    }
    __writecr8(v7);
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
