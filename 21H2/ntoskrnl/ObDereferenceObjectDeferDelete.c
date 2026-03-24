/*
 * XREFs of ObDereferenceObjectDeferDelete @ 0x140343540
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213D90 (MiCompleteProtoPteFault.c)
 *     ExpApplyPriorityBoost @ 0x14022F000 (ExpApplyPriorityBoost.c)
 *     MiFinishHardFault @ 0x140239890 (MiFinishHardFault.c)
 *     IopDeleteFileObjectExtension @ 0x140252C8C (IopDeleteFileObjectExtension.c)
 *     MiEmptyPageAccessLog @ 0x14025BC70 (MiEmptyPageAccessLog.c)
 *     PspJobDelete @ 0x140287530 (PspJobDelete.c)
 *     MmFreeAccessPfnBuffer @ 0x1402D4628 (MmFreeAccessPfnBuffer.c)
 *     ExpFreeOwnerEntry @ 0x1402F4FF0 (ExpFreeOwnerEntry.c)
 *     IoReferenceIoAttributionFromThread @ 0x1402F88E8 (IoReferenceIoAttributionFromThread.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14031BFE0 (IoSetDiskIoAttributionFromThread.c)
 *     MiMakeSystemCacheRangeValid @ 0x14031EB90 (MiMakeSystemCacheRangeValid.c)
 *     CcMapAndCopyInToCache @ 0x140331C70 (CcMapAndCopyInToCache.c)
 *     MiLogPageAccess @ 0x14033A650 (MiLogPageAccess.c)
 *     IopCompleteRequest @ 0x140342B20 (IopCompleteRequest.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14034B5C0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14034D1C0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     MiDereferenceControlAreaFile @ 0x1403571E4 (MiDereferenceControlAreaFile.c)
 *     PfpServiceMainThreadUnboost @ 0x140382AD0 (PfpServiceMainThreadUnboost.c)
 *     CmpDelayedDerefKeys @ 0x1405ED57C (CmpDelayedDerefKeys.c)
 *     CmpFreePostBlock @ 0x140667A60 (CmpFreePostBlock.c)
 *     CmpRunDownCmRM @ 0x1406BB4A0 (CmpRunDownCmRM.c)
 *     ObpDeleteDirectoryObject @ 0x1406BD0A0 (ObpDeleteDirectoryObject.c)
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 *     IopSynchronousServiceTail @ 0x1406FED80 (IopSynchronousServiceTail.c)
 *     MmLoadSystemImageEx @ 0x14075BAFC (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x14075C358 (MiObtainSectionForDriver.c)
 *     CmpCleanupTransactionState @ 0x140770484 (CmpCleanupTransactionState.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140779EF8 (PfpServiceMainThreadBoostPrep.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408C2530 (NtAlpcImpersonateClientContainerOfPort.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C91F8 (MiApplyHotPatchToLoadedDriver.c)
 *     PfpScenCtxScenarioSet @ 0x14099AB98 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x1402BC2D0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140564D28 (ObpPushStackInfo.c)
 */

void __stdcall ObDereferenceObjectDeferDelete(PVOID Object)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  BugCheckParameter4 = v2 - 1;
  if ( v3 )
  {
    if ( *((_QWORD *)Object - 5) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)],
        (ULONG_PTR)Object,
        3uLL,
        *((_QWORD *)Object - 5));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 4uLL, BugCheckParameter4);
    ObpDeferObjectDeletion((signed __int64)Object - 48);
  }
}
