/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x14020A670
 * Callers:
 *     MiCountSharedPages @ 0x140209600 (MiCountSharedPages.c)
 *     MiCheckProtoAccess @ 0x14020A320 (MiCheckProtoAccess.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14020A3E8 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsFaultPteIntact @ 0x14020A414 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14020A4E4 (MiFindActualFaultingPte.c)
 *     MiTranslatePageForCopy @ 0x140232F94 (MiTranslatePageForCopy.c)
 *     MiGetWorkingSetInfoList @ 0x14025C83C (MiGetWorkingSetInfoList.c)
 *     MiIsPteEvaluated @ 0x14025F1EC (MiIsPteEvaluated.c)
 *     MiResolveProtoPteFault @ 0x1402B9CD0 (MiResolveProtoPteFault.c)
 *     MiCommitExistingVad @ 0x1402BD690 (MiCommitExistingVad.c)
 *     MiWalkVaRange @ 0x1402E0940 (MiWalkVaRange.c)
 *     MiSetReadOnlyOnSectionView @ 0x1402E53E0 (MiSetReadOnlyOnSectionView.c)
 *     MiSharedVaToPartition @ 0x1402E5C9C (MiSharedVaToPartition.c)
 *     MiInitializeReadInProgressPfn @ 0x140306C80 (MiInitializeReadInProgressPfn.c)
 *     MiComputePageCommitment @ 0x1403178B0 (MiComputePageCommitment.c)
 *     MiIsPteDecommittedPage @ 0x140317CB0 (MiIsPteDecommittedPage.c)
 *     MiSplitPrivatePage @ 0x140317D00 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x1403183BC (MiIsCfgBitMapPageShared.c)
 *     MiSystemFault @ 0x14031C150 (MiSystemFault.c)
 *     MiQueryAddressState @ 0x14033A480 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x14033BAF0 (MiGetPageProtection.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x1403427D0 (MiDeleteVa.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052B34C (MiCheckCommitReleaseFromVad.c)
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPrototypePteVadLookup(unsigned __int64 a1)
{
  if ( (a1 & 0x400) == 0 )
    return 0LL;
  if ( qword_140C4DF80 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C4DF80;
  }
  return HIDWORD(a1) == 0xFFFFFFFF;
}
