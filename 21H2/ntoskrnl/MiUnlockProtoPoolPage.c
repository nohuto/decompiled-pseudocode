/*
 * XREFs of MiUnlockProtoPoolPage @ 0x1402397F0
 * Callers:
 *     MiResolveDemandZeroFault @ 0x14020FB50 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x1402153D0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140216790 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140217450 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x1402185F0 (MiMigratePfn.c)
 *     MiFlushSectionInternal @ 0x140219DB0 (MiFlushSectionInternal.c)
 *     MmPurgeSection @ 0x140238BA0 (MmPurgeSection.c)
 *     MiDeleteSubsectionPages @ 0x140239170 (MiDeleteSubsectionPages.c)
 *     MiFinishHardFault @ 0x140239890 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x14023A4B0 (MiWalkEntireImage.c)
 *     MiWalkVaRange @ 0x14023C0F0 (MiWalkVaRange.c)
 *     MiMakeImageReadOnly @ 0x1402694F0 (MiMakeImageReadOnly.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402696C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     MiInitializeImageProtos @ 0x14026DF7C (MiInitializeImageProtos.c)
 *     MiResolvePageFileFault @ 0x14028AF68 (MiResolvePageFileFault.c)
 *     MiHandleCollidedFault @ 0x14028BEFC (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14028C1F0 (MiWaitForCollidedFaultComplete.c)
 *     MiSoftFaultMappedView @ 0x14028D5A0 (MiSoftFaultMappedView.c)
 *     MiWaitForPageWriteCompletion @ 0x140299EBC (MiWaitForPageWriteCompletion.c)
 *     MmCopyMemory @ 0x1402B48E0 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1402B4DE4 (MiTranslatePageForCopy.c)
 *     MiDeletePerSessionProtos @ 0x1402CF174 (MiDeletePerSessionProtos.c)
 *     MiSectionCreated @ 0x1402E88CC (MiSectionCreated.c)
 *     MiCopyHeaderIfResident @ 0x1402E8D30 (MiCopyHeaderIfResident.c)
 *     MiAnyProtosAreMapped @ 0x1402EE910 (MiAnyProtosAreMapped.c)
 *     MiPfPutPagesInTransition @ 0x1402FB620 (MiPfPutPagesInTransition.c)
 *     MiCopyDataPageToImagePage @ 0x1403043E8 (MiCopyDataPageToImagePage.c)
 *     MiResolveMappedFileFault @ 0x140319480 (MiResolveMappedFileFault.c)
 *     MiAllocateInPageSupport @ 0x140319BA0 (MiAllocateInPageSupport.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x1403235B0 (MiLockCode.c)
 *     MiMakePageAvoidRead @ 0x140324070 (MiMakePageAvoidRead.c)
 *     MiGetPageProtection @ 0x140330DA0 (MiGetPageProtection.c)
 *     MmCopyToCachedPage @ 0x140331500 (MmCopyToCachedPage.c)
 *     MiDeleteMergedPte @ 0x140366E48 (MiDeleteMergedPte.c)
 *     MiConvertStandbyToProto @ 0x140366F78 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14036A050 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x14036AB34 (MiResolveProtoCombine.c)
 *     MiReleasePageFileSectionInfo @ 0x140387A84 (MiReleasePageFileSectionInfo.c)
 *     MiPurgeImageSection @ 0x1403A53C4 (MiPurgeImageSection.c)
 *     MiIsSubsectionClean @ 0x140529C34 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x14052A2B0 (MiPurgeSubsection.c)
 *     MiInitializeDynamicPfns @ 0x14052E5A0 (MiInitializeDynamicPfns.c)
 *     MiReplaceLockedPage @ 0x14053D76C (MiReplaceLockedPage.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FD78 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x140540134 (MiCopyImageExtentContents.c)
 *     MiEliminateStaleExtents @ 0x1405408C8 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x1405409AC (MiEnableLargeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x140541D74 (MiPurgeFileOnlyPfn.c)
 *     MiInsertLargeVadMapping @ 0x1405487A0 (MiInsertLargeVadMapping.c)
 *     MiInitializeProtoPfn @ 0x140554F90 (MiInitializeProtoPfn.c)
 *     MiIdealClusterPage @ 0x140555E14 (MiIdealClusterPage.c)
 * Callees:
 *     MiRemoveLockedPageCharge @ 0x14023AEB0 (MiRemoveLockedPageCharge.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiPfnReferenceCountIsZero @ 0x140325DF0 (MiPfnReferenceCountIsZero.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockProtoPoolPage(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  v3 = a2;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v8);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  *(_BYTE *)(a1 + 34) &= ~0x20u;
  if ( (unsigned int)MiRemoveLockedPageCharge(a1) )
    MiPfnReferenceCountIsZero(a1, (a1 + 0x58000000000LL) / 48);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_BYTE)v3 != 17 )
  {
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v7 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
  }
  return result;
}
