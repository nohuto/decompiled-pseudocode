/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140261880
 * Callers:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     PopPepWork @ 0x1402614FC (PopPepWork.c)
 *     MiLockSectionControlArea @ 0x140274944 (MiLockSectionControlArea.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14029F8B0 (MmDoesFileHaveUserWritableReferences.c)
 *     MiCanFileBeTruncatedInternal @ 0x1402A10AC (MiCanFileBeTruncatedInternal.c)
 *     MmFlushImageSection @ 0x1402B9080 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x1402B91F0 (MiForceSectionClosed.c)
 *     MiDeleteEmptySubsections @ 0x1402BD5BC (MiDeleteEmptySubsections.c)
 *     MmChangeSectionBackingFile @ 0x1402C3114 (MmChangeSectionBackingFile.c)
 *     MiReferencePfBackedSection @ 0x1402C5218 (MiReferencePfBackedSection.c)
 *     MiCopyHeaderIfResident @ 0x1402E8D30 (MiCopyHeaderIfResident.c)
 *     MiCopyDataPageToImagePage @ 0x1403043E8 (MiCopyDataPageToImagePage.c)
 *     MiReferenceControlArea @ 0x140356824 (MiReferenceControlArea.c)
 *     MiProcessDereferenceList @ 0x140387B6C (MiProcessDereferenceList.c)
 *     CcBcbProfiler @ 0x1403DB990 (CcBcbProfiler.c)
 *     MiDeleteCachedSegment @ 0x140528BB8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140528DAC (MiDeleteCachedSubsection.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140529D68 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x140529F98 (MiProcessDeleteOnClose.c)
 *     MmRemoveSystemCacheFromDump @ 0x140538B8C (MmRemoveSystemCacheFromDump.c)
 *     MiDbgMarkPfnModified @ 0x140545CEC (MiDbgMarkPfnModified.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1405461F0 (MiDbgTranslatePhysicalAddress.c)
 *     PspIumReplenishPartitionPages @ 0x140583F78 (PspIumReplenishPartitionPages.c)
 *     sub_1405CC010 @ 0x1405CC010 (sub_1405CC010.c)
 *     KiForceSymbolReferences @ 0x140A915EC (KiForceSymbolReferences.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DF0 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
