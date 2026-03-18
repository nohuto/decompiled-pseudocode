/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250
 * Callers:
 *     MmFlushImageSection @ 0x14023E840 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x14023E9A0 (MiForceSectionClosed.c)
 *     MiReferencePfBackedSection @ 0x14023FA50 (MiReferencePfBackedSection.c)
 *     MiDeleteEmptySubsections @ 0x140246A0C (MiDeleteEmptySubsections.c)
 *     MmChangeSectionBackingFile @ 0x1402483DC (MmChangeSectionBackingFile.c)
 *     MiCopyDataPageToImagePage @ 0x14026F180 (MiCopyDataPageToImagePage.c)
 *     MiCanFileBeTruncatedInternal @ 0x14027F9DC (MiCanFileBeTruncatedInternal.c)
 *     MiLockSectionControlArea @ 0x14028494C (MiLockSectionControlArea.c)
 *     MiReferenceControlArea @ 0x140287C84 (MiReferenceControlArea.c)
 *     MiCopyHeaderIfResident @ 0x14029E440 (MiCopyHeaderIfResident.c)
 *     MiSynchronizeFastPageInsert @ 0x1402C0900 (MiSynchronizeFastPageInsert.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14030F1E0 (MmDoesFileHaveUserWritableReferences.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiGetPerfectColorHeadPage @ 0x140325830 (MiGetPerfectColorHeadPage.c)
 *     PopPepWork @ 0x140355EE8 (PopPepWork.c)
 *     MiProcessDereferenceList @ 0x140393EC0 (MiProcessDereferenceList.c)
 *     CcBcbProfiler @ 0x1403EAC70 (CcBcbProfiler.c)
 *     MiDeleteCachedSegment @ 0x14058A4E8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x14058A6D4 (MiDeleteCachedSubsection.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x14058B540 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x14058B784 (MiProcessDeleteOnClose.c)
 *     MiFreezeIoPfnNode @ 0x140591724 (MiFreezeIoPfnNode.c)
 *     MiDbgMarkPfnModified @ 0x1405A4940 (MiDbgMarkPfnModified.c)
 *     PspIumReplenishPartitionPages @ 0x1405E29C8 (PspIumReplenishPartitionPages.c)
 *     sub_140657010 @ 0x140657010 (sub_140657010.c)
 *     KiForceSymbolReferences @ 0x140B50C78 (KiForceSymbolReferences.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461C46 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
