/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140282D50
 * Callers:
 *     MmDoesFileHaveUserWritableReferences @ 0x14021CE30 (MmDoesFileHaveUserWritableReferences.c)
 *     MiCanFileBeTruncatedInternal @ 0x14021E62C (MiCanFileBeTruncatedInternal.c)
 *     MmFlushImageSection @ 0x140237290 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x140237400 (MiForceSectionClosed.c)
 *     MiDeleteEmptySubsections @ 0x14023BC6C (MiDeleteEmptySubsections.c)
 *     MmChangeSectionBackingFile @ 0x140241634 (MmChangeSectionBackingFile.c)
 *     MiReferencePfBackedSection @ 0x140243798 (MiReferencePfBackedSection.c)
 *     MiLockSectionControlArea @ 0x1402628E4 (MiLockSectionControlArea.c)
 *     PopPepWork @ 0x1402829CC (PopPepWork.c)
 *     MiCopyHeaderIfResident @ 0x14029A080 (MiCopyHeaderIfResident.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiCopyDataPageToImagePage @ 0x14030F138 (MiCopyDataPageToImagePage.c)
 *     MiReferenceControlArea @ 0x140361574 (MiReferenceControlArea.c)
 *     MiProcessDereferenceList @ 0x140387CBC (MiProcessDereferenceList.c)
 *     CcBcbProfiler @ 0x1403DBB00 (CcBcbProfiler.c)
 *     MiDeleteCachedSegment @ 0x140528DF8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140528FEC (MiDeleteCachedSubsection.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140529FA8 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x14052A1D8 (MiProcessDeleteOnClose.c)
 *     MmRemoveSystemCacheFromDump @ 0x140538DCC (MmRemoveSystemCacheFromDump.c)
 *     MiDbgMarkPfnModified @ 0x140545F2C (MiDbgMarkPfnModified.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140546430 (MiDbgTranslatePhysicalAddress.c)
 *     PspIumReplenishPartitionPages @ 0x1405841A8 (PspIumReplenishPartitionPages.c)
 *     sub_1405CC010 @ 0x1405CC010 (sub_1405CC010.c)
 *     KiForceSymbolReferences @ 0x140A925EC (KiForceSymbolReferences.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B6020 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
