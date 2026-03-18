/*
 * XREFs of MiReferencePageRuns @ 0x140300EC0
 * Callers:
 *     MiZeroLargePages @ 0x1402C0D40 (MiZeroLargePages.c)
 *     MiReferencePageRuns @ 0x140300EC0 (MiReferencePageRuns.c)
 *     MiFindContiguousPages @ 0x14034B980 (MiFindContiguousPages.c)
 *     MiFinishResume @ 0x140383AC0 (MiFinishResume.c)
 *     MiWaitForFreePagesToZero @ 0x14054E4BC (MiWaitForFreePagesToZero.c)
 *     MiRebuildLargePage @ 0x140550C08 (MiRebuildLargePage.c)
 *     MiCombineAllPhysicalMemory @ 0x140723820 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x14076B808 (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x1407C4210 (MmGetNodeChannelRanges.c)
 *     MiComputeNodeMemory @ 0x1407C8DE0 (MiComputeNodeMemory.c)
 *     MiAddPhysicalMemory @ 0x1408C76D0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C87CC (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x1408C98F8 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x1408D3010 (MiScanPagefileSpace.c)
 *     MiInitializeScrubPacket @ 0x1408DE690 (MiInitializeScrubPacket.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14027F330 (ExpAcquireSpinLockExclusive.c)
 *     MiReferencePageRuns @ 0x140300EC0 (MiReferencePageRuns.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B4374 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiReferencePageRuns(__int64 a1, unsigned int a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // si
  _DWORD *v7; // r8
  struct _KPRCB *v8; // r9
  _QWORD *v9; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v11; // rdx
  int v13; // eax
  unsigned __int8 v14; // al
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
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C50CC8, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(&dword_140C50CC8, CurrentIrql, a3, (__int64)SchedulerAssist);
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
  if ( a2 == 1 )
  {
    v9 = *(_QWORD **)(a1 + 32);
  }
  else if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    v9 = MmPhysicalMemoryBlock;
  }
  else
  {
    v9 = *(_QWORD **)(a1 + 96);
  }
  if ( v9 )
  {
    ++*(v9 - 1);
    ++qword_140C50C28;
  }
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C50CC8, retaddr);
  else
    dword_140C50CC8 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = CurrentPrcb->SchedulerAssist;
  if ( v11 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v13 = v11[6] - 1;
      v11[6] = v13;
      if ( !v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
      {
        v8 = KeGetCurrentPrcb();
        v7 = v8->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & v7[5]) == 0;
        v7[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v9 )
    return (__int64)v9;
  else
    return MiReferencePageRuns(&MiSystemPartition, a2, v7, v8);
}
