/*
 * XREFs of ObDereferenceObjectDeferDelete @ 0x14024A1D0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213720 (MiCompleteProtoPteFault.c)
 *     ExpFreeOwnerEntry @ 0x140230F90 (ExpFreeOwnerEntry.c)
 *     IoReferenceIoAttributionFromThread @ 0x1402355A8 (IoReferenceIoAttributionFromThread.c)
 *     ExpApplyPriorityBoost @ 0x1402468E0 (ExpApplyPriorityBoost.c)
 *     IopCompleteRequest @ 0x1402497C0 (IopCompleteRequest.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140261630 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140263230 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     CcMapAndCopyInToCache @ 0x14027BC80 (CcMapAndCopyInToCache.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140280FF0 (IoSetDiskIoAttributionFromThread.c)
 *     MiDereferenceControlAreaFile @ 0x14028244C (MiDereferenceControlAreaFile.c)
 *     MiFinishHardFault @ 0x140283A50 (MiFinishHardFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x140286080 (MiMakeSystemCacheRangeValid.c)
 *     MiLogPageAccess @ 0x14029E790 (MiLogPageAccess.c)
 *     MiEmptyPageAccessLog @ 0x1402A4D00 (MiEmptyPageAccessLog.c)
 *     MmFreeAccessPfnBuffer @ 0x1402C2DF4 (MmFreeAccessPfnBuffer.c)
 *     IopDeleteFileObjectExtension @ 0x1402D7140 (IopDeleteFileObjectExtension.c)
 *     PspJobDelete @ 0x1402D96F0 (PspJobDelete.c)
 *     PfpServiceMainThreadUnboost @ 0x14037FE80 (PfpServiceMainThreadUnboost.c)
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 *     CmpDelayedDerefKeys @ 0x14061B06C (CmpDelayedDerefKeys.c)
 *     CmpRunDownCmRM @ 0x1406590AC (CmpRunDownCmRM.c)
 *     CmpFreePostBlock @ 0x1406CC480 (CmpFreePostBlock.c)
 *     ObpDeleteDirectoryObject @ 0x1406E6FA0 (ObpDeleteDirectoryObject.c)
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x1407444BC (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140744D18 (MiObtainSectionForDriver.c)
 *     CmpCleanupTransactionState @ 0x14075B618 (CmpCleanupTransactionState.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140765558 (PfpServiceMainThreadBoostPrep.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408BDC70 (NtAlpcImpersonateClientContainerOfPort.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C48A8 (MiApplyHotPatchToLoadedDriver.c)
 *     PfpScenCtxScenarioSet @ 0x140996208 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14030B7E0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x14055F238 (ObpPushStackInfo.c)
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
