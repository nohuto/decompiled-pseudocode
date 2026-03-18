/*
 * XREFs of ObDereferenceObjectDeferDelete @ 0x140219220
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x14020B5C0 (IopDeleteFileObjectExtension.c)
 *     IopCompleteRequest @ 0x1402186C0 (IopCompleteRequest.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140221690 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140223290 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     MiEmptyPageAccessLog @ 0x1402331B0 (MiEmptyPageAccessLog.c)
 *     MmFreeAccessPfnBuffer @ 0x1402440A8 (MmFreeAccessPfnBuffer.c)
 *     IoReferenceIoAttributionFromThread @ 0x1402491C8 (IoReferenceIoAttributionFromThread.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14024E710 (IoSetDiskIoAttributionFromThread.c)
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 *     ExpApplyPriorityBoost @ 0x140291140 (ExpApplyPriorityBoost.c)
 *     ExpFreeOwnerEntry @ 0x14029DA20 (ExpFreeOwnerEntry.c)
 *     MiDereferenceControlAreaFile @ 0x1402A039C (MiDereferenceControlAreaFile.c)
 *     MiMakeSystemCacheRangeValid @ 0x1402A22E0 (MiMakeSystemCacheRangeValid.c)
 *     CcMapAndCopyInToCache @ 0x1402B4EC0 (CcMapAndCopyInToCache.c)
 *     MiLogPageAccess @ 0x1402BDB30 (MiLogPageAccess.c)
 *     MiFinishHardFault @ 0x1402C80B0 (MiFinishHardFault.c)
 *     PspJobDelete @ 0x14035D490 (PspJobDelete.c)
 *     PfpServiceMainThreadUnboost @ 0x140382480 (PfpServiceMainThreadUnboost.c)
 *     CmpDelayedDerefKeys @ 0x1405F3AAC (CmpDelayedDerefKeys.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     CmpRunDownCmRM @ 0x1406A3B00 (CmpRunDownCmRM.c)
 *     CmpFreePostBlock @ 0x1406BDB90 (CmpFreePostBlock.c)
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 *     ObpDeleteDirectoryObject @ 0x1406DD250 (ObpDeleteDirectoryObject.c)
 *     MmLoadSystemImageEx @ 0x140754C1C (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140755478 (MiObtainSectionForDriver.c)
 *     CmpCleanupTransactionState @ 0x14076C168 (CmpCleanupTransactionState.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140775F48 (PfpServiceMainThreadBoostPrep.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408C4D70 (NtAlpcImpersonateClientContainerOfPort.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408CBA38 (MiApplyHotPatchToLoadedDriver.c)
 *     PfpScenCtxScenarioSet @ 0x14099D618 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14031A0E0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140563258 (ObpPushStackInfo.c)
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
    ObpDeferObjectDeletion((char *)Object - 48);
  }
}
