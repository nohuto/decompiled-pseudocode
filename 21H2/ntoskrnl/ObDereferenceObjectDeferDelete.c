/*
 * XREFs of ObDereferenceObjectDeferDelete @ 0x140348920
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140203B8C (IopDeleteFileObjectExtension.c)
 *     MmChangeSectionBackingFile @ 0x1402483DC (MmChangeSectionBackingFile.c)
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402B02B0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1402B1740 (ExpReleaseResourceSharedForThreadLite.c)
 *     CcMapAndCopyInToCache @ 0x1402BD970 (CcMapAndCopyInToCache.c)
 *     IoReferenceIoAttributionFromThread @ 0x1402F5EA0 (IoReferenceIoAttributionFromThread.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 *     ExpApplyPriorityBoost @ 0x140343010 (ExpApplyPriorityBoost.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1403437A0 (IoSetDiskIoAttributionFromThread.c)
 *     IopCompleteRequest @ 0x140347E10 (IopCompleteRequest.c)
 *     MmFreeAccessPfnBuffer @ 0x14035FA80 (MmFreeAccessPfnBuffer.c)
 *     PfpServiceMainThreadUnboost @ 0x14038B6C0 (PfpServiceMainThreadUnboost.c)
 *     CmpRunDownCmRM @ 0x14069FD64 (CmpRunDownCmRM.c)
 *     ObpCreateSymbolicLinkName @ 0x1406A97F0 (ObpCreateSymbolicLinkName.c)
 *     ObpDeleteSymbolicLinkName @ 0x1406B96E8 (ObpDeleteSymbolicLinkName.c)
 *     ObpDeleteDirectoryObject @ 0x1406D9780 (ObpDeleteDirectoryObject.c)
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     CmpFreePostBlock @ 0x1407190AC (CmpFreePostBlock.c)
 *     CmpDelayedDerefKeys @ 0x140721B0C (CmpDelayedDerefKeys.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     CmpCleanupTransactionState @ 0x140742300 (CmpCleanupTransactionState.c)
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x1407603D4 (MiObtainSectionForDriver.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140808A98 (PfpServiceMainThreadBoostPrep.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1409663D0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     PfpScenCtxScenarioSet @ 0x140A540E0 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x1402440B4 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
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
