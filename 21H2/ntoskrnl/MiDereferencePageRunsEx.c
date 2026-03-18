/*
 * XREFs of MiDereferencePageRunsEx @ 0x14023FD0C
 * Callers:
 *     MiDereferencePageRuns @ 0x14023FCF0 (MiDereferencePageRuns.c)
 *     MiFindContiguousPagesEx @ 0x140277D10 (MiFindContiguousPagesEx.c)
 *     MiFinishResume @ 0x14038DF70 (MiFinishResume.c)
 *     MiZeroLargePageThread @ 0x1403C6B00 (MiZeroLargePageThread.c)
 *     MiRebuildLargePage @ 0x14045CDD6 (MiRebuildLargePage.c)
 *     MmQueryBadAddresses @ 0x14058FE88 (MmQueryBadAddresses.c)
 *     MiDeleteZeroContext @ 0x1405B2670 (MiDeleteZeroContext.c)
 *     MiDeletePartitionResources @ 0x1405BDFF8 (MiDeletePartitionResources.c)
 *     MiUpdatePartitionMemory @ 0x1405BFED0 (MiUpdatePartitionMemory.c)
 *     MiMakePartitionMemoryBlock @ 0x140981F58 (MiMakePartitionMemoryBlock.c)
 * Callees:
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
      LOBYTE(v7) = ExAcquireSpinLockExclusive(&dword_140C55048);
    }
    if ( !--qword_140C54FA8 )
    {
      v6 = (_QWORD *)qword_140C54FD8;
      qword_140C54FD8 = 0LL;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C55048);
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
        KeSignalGate(v6 + 1);
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
