/*
 * XREFs of ObDereferenceObjectDeferDelete @ 0x140286A70
 * Callers:
 *     ExpReleaseResourceSharedForThreadLite @ 0x140208710 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14020A310 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     CcMapAndCopyInToCache @ 0x140222C30 (CcMapAndCopyInToCache.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140227FA0 (IoSetDiskIoAttributionFromThread.c)
 *     MiDereferenceControlAreaFile @ 0x1402293FC (MiDereferenceControlAreaFile.c)
 *     MiFinishHardFault @ 0x14022AA00 (MiFinishHardFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x14022D030 (MiMakeSystemCacheRangeValid.c)
 *     MiLogPageAccess @ 0x140245760 (MiLogPageAccess.c)
 *     MiEmptyPageAccessLog @ 0x14024BCD0 (MiEmptyPageAccessLog.c)
 *     IopDeleteFileObjectExtension @ 0x140269E64 (IopDeleteFileObjectExtension.c)
 *     PspJobDelete @ 0x14027ABB0 (PspJobDelete.c)
 *     ExpApplyPriorityBoost @ 0x1402830C0 (ExpApplyPriorityBoost.c)
 *     IopCompleteRequest @ 0x140285F60 (IopCompleteRequest.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     ExpFreeOwnerEntry @ 0x1402C3DC0 (ExpFreeOwnerEntry.c)
 *     IoReferenceIoAttributionFromThread @ 0x1402C83D8 (IoReferenceIoAttributionFromThread.c)
 *     MmFreeAccessPfnBuffer @ 0x1403050AC (MmFreeAccessPfnBuffer.c)
 *     PfpServiceMainThreadUnboost @ 0x1403806C0 (PfpServiceMainThreadUnboost.c)
 *     CmpDelayedDerefKeys @ 0x1405E5A4C (CmpDelayedDerefKeys.c)
 *     CmpRunDownCmRM @ 0x140652EF0 (CmpRunDownCmRM.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 *     CmpFreePostBlock @ 0x1406ED780 (CmpFreePostBlock.c)
 *     ObpDeleteDirectoryObject @ 0x14070AE60 (ObpDeleteDirectoryObject.c)
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140746898 (MiObtainSectionForDriver.c)
 *     CmpCleanupTransactionState @ 0x14075DB00 (CmpCleanupTransactionState.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140766F18 (PfpServiceMainThreadBoostPrep.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408BEFC0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C5BF8 (MiApplyHotPatchToLoadedDriver.c)
 *     PfpScenCtxScenarioSet @ 0x1409975D8 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x1403494E0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x14055F888 (ObpPushStackInfo.c)
 */

void __stdcall ObDereferenceObjectDeferDelete(PVOID Object)
{
  __int64 v1; // rdx
  signed __int64 v3; // rax
  bool v4; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v4 = v3 <= 1;
  BugCheckParameter4 = v3 - 1;
  if ( v4 )
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
    ObpDeferObjectDeletion((char *)Object - 48, v1);
  }
}
