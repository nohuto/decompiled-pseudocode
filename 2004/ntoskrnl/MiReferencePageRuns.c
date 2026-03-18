/*
 * XREFs of MiReferencePageRuns @ 0x14032BE40
 * Callers:
 *     MiFindContiguousPages @ 0x140225A90 (MiFindContiguousPages.c)
 *     MiZeroLargePages @ 0x14023B690 (MiZeroLargePages.c)
 *     MiReferencePageRuns @ 0x14032BE40 (MiReferencePageRuns.c)
 *     MiFinishResume @ 0x140381DE0 (MiFinishResume.c)
 *     MiWaitForFreePagesToZero @ 0x14054AAEC (MiWaitForFreePagesToZero.c)
 *     MiRebuildLargePage @ 0x14054D238 (MiRebuildLargePage.c)
 *     MiCombineAllPhysicalMemory @ 0x140715860 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x14075D0A8 (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x1407B59E0 (MmGetNodeChannelRanges.c)
 *     MiComputeNodeMemory @ 0x1407BA550 (MiComputeNodeMemory.c)
 *     MiAddPhysicalMemory @ 0x1408C1890 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C298C (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x1408C3AB8 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x1408CD1D0 (MiScanPagefileSpace.c)
 *     MiInitializeScrubPacket @ 0x1408D8850 (MiInitializeScrubPacket.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x1402135A0 (ExpAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReferencePageRuns @ 0x14032BE40 (MiReferencePageRuns.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B0814 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C50C48, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(&dword_140C50C48, CurrentIrql, a3, (__int64)SchedulerAssist);
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
    ++qword_140C50BA8;
  }
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C50C48, retaddr);
  else
    dword_140C50C48 = 0;
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
