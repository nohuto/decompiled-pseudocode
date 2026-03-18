/*
 * XREFs of MiDereferencePageRunsEx @ 0x140313848
 * Callers:
 *     MiFindContiguousPages @ 0x14027EAE0 (MiFindContiguousPages.c)
 *     MiDereferencePageRuns @ 0x14037BE90 (MiDereferencePageRuns.c)
 *     MiFinishResume @ 0x1403815A0 (MiFinishResume.c)
 *     MiDeleteZeroThreadContext @ 0x14054A124 (MiDeleteZeroThreadContext.c)
 *     MiWaitForFreePagesToZero @ 0x14054A49C (MiWaitForFreePagesToZero.c)
 *     MiRebuildLargePage @ 0x14054CBE8 (MiRebuildLargePage.c)
 *     MiDeletePartitionResources @ 0x14055BE28 (MiDeletePartitionResources.c)
 *     MiUpdatePartitionMemory @ 0x14055D984 (MiUpdatePartitionMemory.c)
 *     MiMakePartitionMemoryBlock @ 0x1408D6C30 (MiMakePartitionMemoryBlock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSignalGate @ 0x1403247B0 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
      LOBYTE(v7) = ExAcquireSpinLockExclusive(&dword_140C50D48);
    }
    if ( !--qword_140C50CA8 )
    {
      v6 = (_QWORD *)qword_140C50CD8;
      qword_140C50CD8 = 0LL;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C50D48);
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
        KeSignalGate(v6 + 1, 1LL);
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
