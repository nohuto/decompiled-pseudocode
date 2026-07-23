/*
 * XREFs of MiReferencePageRuns @ 0x1402D43E0
 * Callers:
 *     MiReferencePageRuns @ 0x1402D43E0 (MiReferencePageRuns.c)
 *     MiZeroLargePages @ 0x1402D6D70 (MiZeroLargePages.c)
 *     MiFindContiguousPages @ 0x14030C430 (MiFindContiguousPages.c)
 *     MiFinishResume @ 0x1403849F0 (MiFinishResume.c)
 *     MiWaitForFreePagesToZero @ 0x1405501CC (MiWaitForFreePagesToZero.c)
 *     MiRebuildLargePage @ 0x140552918 (MiRebuildLargePage.c)
 *     MiCombineAllPhysicalMemory @ 0x140727760 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x14076F928 (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x1407C87F0 (MmGetNodeChannelRanges.c)
 *     MiComputeNodeMemory @ 0x1407CD210 (MiComputeNodeMemory.c)
 *     MiAddPhysicalMemory @ 0x1408C4FF0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C60EC (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x1408C7218 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x1408D0930 (MiScanPagefileSpace.c)
 *     MiInitializeScrubPacket @ 0x1408DBFB0 (MiInitializeScrubPacket.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x1402C1A70 (ExpAcquireSpinLockExclusive.c)
 *     MiReferencePageRuns @ 0x1402D43E0 (MiReferencePageRuns.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5FBC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiReferencePageRuns(__int64 a1, unsigned int a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // si
  _QWORD *v7; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v9; // rdx
  int v11; // eax
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  void *retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C50E88, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(&dword_140C50E88, CurrentIrql, a3, (__int64)SchedulerAssist);
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
  if ( a2 == 1 )
  {
    v7 = *(_QWORD **)(a1 + 32);
  }
  else if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    v7 = MmPhysicalMemoryBlock;
  }
  else
  {
    v7 = *(_QWORD **)(a1 + 96);
  }
  if ( v7 )
  {
    ++*(v7 - 1);
    ++qword_140C50DE8;
  }
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C50E88, retaddr);
  else
    dword_140C50E88 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = CurrentPrcb->SchedulerAssist;
  if ( v9 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v11 = v9[6] - 1;
      v9[6] = v11;
      if ( !v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        v14 = v13->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v13);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v7 )
    return (__int64)v7;
  else
    return MiReferencePageRuns(&MiSystemPartition, a2);
}
