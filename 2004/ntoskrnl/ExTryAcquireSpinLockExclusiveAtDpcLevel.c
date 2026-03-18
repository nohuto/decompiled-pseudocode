/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1402E41B0
 * Callers:
 *     MiReferenceControlArea @ 0x140228B04 (MiReferenceControlArea.c)
 *     MiCopyDataPageToImagePage @ 0x14026085C (MiCopyDataPageToImagePage.c)
 *     MiDeleteEmptySubsections @ 0x140265820 (MiDeleteEmptySubsections.c)
 *     MiCopyHeaderIfResident @ 0x140265B30 (MiCopyHeaderIfResident.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiLockSectionControlArea @ 0x1402C280C (MiLockSectionControlArea.c)
 *     PopPepWork @ 0x1402E3E30 (PopPepWork.c)
 *     MiCanFileBeTruncatedInternal @ 0x14032023C (MiCanFileBeTruncatedInternal.c)
 *     MiReferencePfBackedSection @ 0x14032106C (MiReferencePfBackedSection.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14032FF70 (MmDoesFileHaveUserWritableReferences.c)
 *     MmFlushImageSection @ 0x140344C90 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x140344E00 (MiForceSectionClosed.c)
 *     MmChangeSectionBackingFile @ 0x140351314 (MmChangeSectionBackingFile.c)
 *     MiProcessDereferenceList @ 0x140385268 (MiProcessDereferenceList.c)
 *     CcBcbProfiler @ 0x1403D8390 (CcBcbProfiler.c)
 *     MiDeleteCachedSegment @ 0x140523708 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1405238FC (MiDeleteCachedSubsection.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1405248B8 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x140524AE8 (MiProcessDeleteOnClose.c)
 *     MmRemoveSystemCacheFromDump @ 0x1405336BC (MmRemoveSystemCacheFromDump.c)
 *     MiDbgMarkPfnModified @ 0x14054081C (MiDbgMarkPfnModified.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140540D20 (MiDbgTranslatePhysicalAddress.c)
 *     PspIumReplenishPartitionPages @ 0x14057EB38 (PspIumReplenishPartitionPages.c)
 *     sub_1405C7010 @ 0x1405C7010 (sub_1405C7010.c)
 *     KiForceSymbolReferences @ 0x140A8EA8C (KiForceSymbolReferences.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0878 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ExTryAcquireSpinLockExclusiveAtDpcLevel(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 result; // rax
  unsigned int v5; // ebx
  _DWORD *v6; // rcx
  int v7; // eax
  int v8; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v7 = SchedulerAssist[6];
      SchedulerAssist[6] = v7 + 1;
      if ( v7 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    result = ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
    v5 = result;
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    if ( !_InterlockedCompareExchange(a1, 0x80000000, 0) )
      return 1LL;
    v5 = 0;
  }
  v6 = CurrentPrcb->SchedulerAssist;
  if ( v6 && CurrentPrcb->NestingLevel <= 1u )
  {
    v8 = v6[6] - 1;
    v6[6] = v8;
    if ( !v8 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  return v5;
}
