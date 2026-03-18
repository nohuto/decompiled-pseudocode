/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1402D80A0
 * Callers:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiLockSectionControlArea @ 0x14022F9DC (MiLockSectionControlArea.c)
 *     MiReferenceControlArea @ 0x140281B54 (MiReferenceControlArea.c)
 *     MiCopyDataPageToImagePage @ 0x1402B988C (MiCopyDataPageToImagePage.c)
 *     MiDeleteEmptySubsections @ 0x1402BE850 (MiDeleteEmptySubsections.c)
 *     MiCopyHeaderIfResident @ 0x1402BEB60 (MiCopyHeaderIfResident.c)
 *     MiCanFileBeTruncatedInternal @ 0x1402CFE0C (MiCanFileBeTruncatedInternal.c)
 *     MiReferencePfBackedSection @ 0x1402D03FC (MiReferencePfBackedSection.c)
 *     PopPepWork @ 0x1402D7D28 (PopPepWork.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1402F3370 (MmDoesFileHaveUserWritableReferences.c)
 *     MmFlushImageSection @ 0x140306E90 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x140307000 (MiForceSectionClosed.c)
 *     MmChangeSectionBackingFile @ 0x140313464 (MmChangeSectionBackingFile.c)
 *     MiProcessDereferenceList @ 0x1403842FC (MiProcessDereferenceList.c)
 *     CcBcbProfiler @ 0x1403D7550 (CcBcbProfiler.c)
 *     MiDeleteCachedSegment @ 0x1405230B8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1405232AC (MiDeleteCachedSubsection.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140524268 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x140524498 (MiProcessDeleteOnClose.c)
 *     MmRemoveSystemCacheFromDump @ 0x14053306C (MmRemoveSystemCacheFromDump.c)
 *     MiDbgMarkPfnModified @ 0x1405401CC (MiDbgMarkPfnModified.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1405406D0 (MiDbgTranslatePhysicalAddress.c)
 *     PspIumReplenishPartitionPages @ 0x14057E4F8 (PspIumReplenishPartitionPages.c)
 *     sub_1405C6010 @ 0x1405C6010 (sub_1405C6010.c)
 *     KiForceSymbolReferences @ 0x140A8F49C (KiForceSymbolReferences.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0158 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
