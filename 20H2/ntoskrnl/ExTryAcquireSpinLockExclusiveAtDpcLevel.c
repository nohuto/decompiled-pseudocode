/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14033F2C0
 * Callers:
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiReferenceControlArea @ 0x14029FAA4 (MiReferenceControlArea.c)
 *     MiDeleteEmptySubsections @ 0x140300C50 (MiDeleteEmptySubsections.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140303360 (MmDoesFileHaveUserWritableReferences.c)
 *     MiCanFileBeTruncatedInternal @ 0x14030E88C (MiCanFileBeTruncatedInternal.c)
 *     MmFlushImageSection @ 0x1403159F0 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x140315B60 (MiForceSectionClosed.c)
 *     MiReferencePfBackedSection @ 0x14031F7A0 (MiReferencePfBackedSection.c)
 *     MmChangeSectionBackingFile @ 0x1403218A4 (MmChangeSectionBackingFile.c)
 *     PopPepWork @ 0x14033EF3C (PopPepWork.c)
 *     MiCopyDataPageToImagePage @ 0x14034EC44 (MiCopyDataPageToImagePage.c)
 *     MiLockSectionControlArea @ 0x1403544E8 (MiLockSectionControlArea.c)
 *     MiCopyHeaderIfResident @ 0x140355BE4 (MiCopyHeaderIfResident.c)
 *     MiProcessDereferenceList @ 0x140387414 (MiProcessDereferenceList.c)
 *     CcBcbProfiler @ 0x1403DB020 (CcBcbProfiler.c)
 *     MiDeleteCachedSegment @ 0x1405270D8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1405272CC (MiDeleteCachedSubsection.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140528288 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1405284B8 (MiProcessDeleteOnClose.c)
 *     MmRemoveSystemCacheFromDump @ 0x14053708C (MmRemoveSystemCacheFromDump.c)
 *     MiDbgMarkPfnModified @ 0x1405441EC (MiDbgMarkPfnModified.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1405446F0 (MiDbgTranslatePhysicalAddress.c)
 *     PspIumReplenishPartitionPages @ 0x140582568 (PspIumReplenishPartitionPages.c)
 *     sub_1405CB010 @ 0x1405CB010 (sub_1405CB010.c)
 *     KiForceSymbolReferences @ 0x140A9478C (KiForceSymbolReferences.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B43D8 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
