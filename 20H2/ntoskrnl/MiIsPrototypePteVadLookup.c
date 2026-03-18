/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x140236D50
 * Callers:
 *     MiComputePageCommitment @ 0x1402340F0 (MiComputePageCommitment.c)
 *     MiIsPteDecommittedPage @ 0x1402344F0 (MiIsPteDecommittedPage.c)
 *     MiSplitPrivatePage @ 0x1402354F8 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x140235BB4 (MiIsCfgBitMapPageShared.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140236AC8 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsFaultPteIntact @ 0x140236AF4 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x140236BC4 (MiFindActualFaultingPte.c)
 *     MiCheckProtoAccess @ 0x14023836C (MiCheckProtoAccess.c)
 *     MiIsPteEvaluated @ 0x1402397A8 (MiIsPteEvaluated.c)
 *     MiInitializeReadInProgressPfn @ 0x14024D760 (MiInitializeReadInProgressPfn.c)
 *     MiTranslatePageForCopy @ 0x140251058 (MiTranslatePageForCopy.c)
 *     MiResolveProtoPteFault @ 0x140276BB0 (MiResolveProtoPteFault.c)
 *     MiCommitExistingVad @ 0x14027A570 (MiCommitExistingVad.c)
 *     MiSharedVaToPartition @ 0x14028EF98 (MiSharedVaToPartition.c)
 *     MiSetReadOnlyOnSectionView @ 0x14028EFF0 (MiSetReadOnlyOnSectionView.c)
 *     MiSystemFault @ 0x1402989E0 (MiSystemFault.c)
 *     MiQueryAddressState @ 0x1402B2B40 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x1402B41B0 (MiGetPageProtection.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x1402BAF60 (MiDeleteVa.c)
 *     MiCountSharedPages @ 0x1402FF4F0 (MiCountSharedPages.c)
 *     MiWalkVaRange @ 0x1403471D0 (MiWalkVaRange.c)
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052960C (MiCheckCommitReleaseFromVad.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPrototypePteVadLookup(unsigned __int64 a1)
{
  if ( (a1 & 0x400) == 0 )
    return 0LL;
  if ( qword_140C4DDC0 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C4DDC0;
  }
  return HIDWORD(a1) == 0xFFFFFFFF;
}
