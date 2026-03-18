/*
 * XREFs of MiUnlockProtoPoolPage @ 0x1402839B0
 * Callers:
 *     MiResolveDemandZeroFault @ 0x14020F020 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x140214D60 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140216120 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140216DE0 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x140217F80 (MiMigratePfn.c)
 *     MiFlushSectionInternal @ 0x140219740 (MiFlushSectionInternal.c)
 *     MiGetPageProtection @ 0x14021F920 (MiGetPageProtection.c)
 *     MiWalkVaRange @ 0x140228550 (MiWalkVaRange.c)
 *     MmCopyToCachedPage @ 0x14027CC60 (MmCopyToCachedPage.c)
 *     MiDeleteSubsectionPages @ 0x140283240 (MiDeleteSubsectionPages.c)
 *     MiFinishHardFault @ 0x140283A50 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     MiMakePageAvoidRead @ 0x14028B560 (MiMakePageAvoidRead.c)
 *     MiSoftFaultMappedView @ 0x1402B3FF0 (MiSoftFaultMappedView.c)
 *     MiResolveMappedFileFault @ 0x1402B7380 (MiResolveMappedFileFault.c)
 *     MiAllocateInPageSupport @ 0x1402B7B20 (MiAllocateInPageSupport.c)
 *     MiCopyDataPageToImagePage @ 0x1402B988C (MiCopyDataPageToImagePage.c)
 *     MiPfPutPagesInTransition @ 0x1402BA1E0 (MiPfPutPagesInTransition.c)
 *     MiCopyHeaderIfResident @ 0x1402BEB60 (MiCopyHeaderIfResident.c)
 *     MiSectionCreated @ 0x1402C00A4 (MiSectionCreated.c)
 *     MiWaitForPageWriteCompletion @ 0x1402CDB2C (MiWaitForPageWriteCompletion.c)
 *     MmPurgeSection @ 0x1402CF7C0 (MmPurgeSection.c)
 *     MiAnyProtosAreMapped @ 0x1402D0104 (MiAnyProtosAreMapped.c)
 *     MmCopyMemory @ 0x1403028D0 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x140302DD4 (MiTranslatePageForCopy.c)
 *     MiDeletePerSessionProtos @ 0x14031F1CC (MiDeletePerSessionProtos.c)
 *     MiHandleCollidedFault @ 0x140341780 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140341A74 (MiWaitForCollidedFaultComplete.c)
 *     MiResolvePageFileFault @ 0x1403432DC (MiResolvePageFileFault.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiInitializeImageProtos @ 0x14034BA9C (MiInitializeImageProtos.c)
 *     MiMakeImageReadOnly @ 0x1403508C0 (MiMakeImageReadOnly.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403524CC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteMergedPte @ 0x1403641F8 (MiDeleteMergedPte.c)
 *     MiConvertStandbyToProto @ 0x140364328 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x140367EE4 (MiResolveProtoCombine.c)
 *     MiReleasePageFileSectionInfo @ 0x140384214 (MiReleasePageFileSectionInfo.c)
 *     MiPurgeImageSection @ 0x1403A1EA4 (MiPurgeImageSection.c)
 *     MiIsSubsectionClean @ 0x140524134 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1405247B0 (MiPurgeSubsection.c)
 *     MiInitializeDynamicPfns @ 0x140528A80 (MiInitializeDynamicPfns.c)
 *     MiReplaceLockedPage @ 0x140537C4C (MiReplaceLockedPage.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053A258 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x14053A614 (MiCopyImageExtentContents.c)
 *     MiEliminateStaleExtents @ 0x14053ADA8 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14053AE8C (MiEnableLargeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x14053C254 (MiPurgeFileOnlyPfn.c)
 *     MiInsertLargeVadMapping @ 0x140542C80 (MiInsertLargeVadMapping.c)
 *     MiInitializeProtoPfn @ 0x14054F4A0 (MiInitializeProtoPfn.c)
 *     MiIdealClusterPage @ 0x140550324 (MiIdealClusterPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiRemoveLockedPageCharge @ 0x140285070 (MiRemoveLockedPageCharge.c)
 *     MiPfnReferenceCountIsZero @ 0x14028D5B0 (MiPfnReferenceCountIsZero.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockProtoPoolPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0;
  v5 = (unsigned __int8)a2;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v10, a2, a3, a4);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  *(_BYTE *)(a1 + 34) &= ~0x20u;
  if ( (unsigned int)MiRemoveLockedPageCharge(a1) )
    MiPfnReferenceCountIsZero(a1, (a1 + 0x58000000000LL) / 48);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_BYTE)v5 != 17 )
  {
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v9 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
  }
  return result;
}
