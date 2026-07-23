/*
 * XREFs of ObDereferenceObjectDeferDelete @ 0x14034E290
 * Callers:
 *     PspJobDelete @ 0x1402046D0 (PspJobDelete.c)
 *     MmFreeAccessPfnBuffer @ 0x140273308 (MmFreeAccessPfnBuffer.c)
 *     MiEmptyPageAccessLog @ 0x14027D1E0 (MiEmptyPageAccessLog.c)
 *     IopDeleteFileObjectExtension @ 0x140285B3C (IopDeleteFileObjectExtension.c)
 *     MiCompleteProtoPteFault @ 0x1402B8690 (MiCompleteProtoPteFault.c)
 *     ExpApplyPriorityBoost @ 0x1402D3850 (ExpApplyPriorityBoost.c)
 *     MiFinishHardFault @ 0x1402DE0E0 (MiFinishHardFault.c)
 *     ExpFreeOwnerEntry @ 0x1402FFD40 (ExpFreeOwnerEntry.c)
 *     IoReferenceIoAttributionFromThread @ 0x140303638 (IoReferenceIoAttributionFromThread.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140326D30 (IoSetDiskIoAttributionFromThread.c)
 *     MiMakeSystemCacheRangeValid @ 0x1403298E0 (MiMakeSystemCacheRangeValid.c)
 *     CcMapAndCopyInToCache @ 0x14033C9C0 (CcMapAndCopyInToCache.c)
 *     MiLogPageAccess @ 0x1403453A0 (MiLogPageAccess.c)
 *     IopCompleteRequest @ 0x14034D870 (IopCompleteRequest.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140356310 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140357F10 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     MiDereferenceControlAreaFile @ 0x140361F34 (MiDereferenceControlAreaFile.c)
 *     PfpServiceMainThreadUnboost @ 0x140382C80 (PfpServiceMainThreadUnboost.c)
 *     CmpRunDownCmRM @ 0x1405E0E80 (CmpRunDownCmRM.c)
 *     ObpDeleteDirectoryObject @ 0x14061C220 (ObpDeleteDirectoryObject.c)
 *     CmpFreePostBlock @ 0x14065C880 (CmpFreePostBlock.c)
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 *     CmpDelayedDerefKeys @ 0x1406DCCDC (CmpDelayedDerefKeys.c)
 *     IopSynchronousServiceTail @ 0x140716160 (IopSynchronousServiceTail.c)
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x14075C518 (MiObtainSectionForDriver.c)
 *     CmpCleanupTransactionState @ 0x140770644 (CmpCleanupTransactionState.c)
 *     PfpServiceMainThreadBoostPrep @ 0x14077A0B8 (PfpServiceMainThreadBoostPrep.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408C2690 (NtAlpcImpersonateClientContainerOfPort.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C9358 (MiApplyHotPatchToLoadedDriver.c)
 *     PfpScenCtxScenarioSet @ 0x14099BB98 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14023A834 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140564F68 (ObpPushStackInfo.c)
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
