/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x140315EC0
 * Callers:
 *     MiDeleteVa @ 0x140242B90 (MiDeleteVa.c)
 *     MiSetReadOnlyOnSectionView @ 0x140246200 (MiSetReadOnlyOnSectionView.c)
 *     MiComputePageCommitment @ 0x140254480 (MiComputePageCommitment.c)
 *     MiIsPteDecommittedPage @ 0x140254880 (MiIsPteDecommittedPage.c)
 *     MiSplitPrivatePage @ 0x140255888 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x140255F44 (MiIsCfgBitMapPageShared.c)
 *     MiInitializeReadInProgressPfn @ 0x140261AC0 (MiInitializeReadInProgressPfn.c)
 *     MiResolveProtoPteFault @ 0x1402A7870 (MiResolveProtoPteFault.c)
 *     MiCommitExistingVad @ 0x1402AB230 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 *     MiQueryAddressState @ 0x1402B1190 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x1402B25A0 (MiGetPageProtection.c)
 *     MiSharedVaToPartition @ 0x1402B8FC8 (MiSharedVaToPartition.c)
 *     MiWalkVaRange @ 0x1402BB1D0 (MiWalkVaRange.c)
 *     MiSystemFault @ 0x1402BD490 (MiSystemFault.c)
 *     MiCountSharedPages @ 0x140312D60 (MiCountSharedPages.c)
 *     MiIsPteEvaluated @ 0x140315AD0 (MiIsPteEvaluated.c)
 *     MiCheckProtoAccess @ 0x140315B68 (MiCheckProtoAccess.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140315C30 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsFaultPteIntact @ 0x140315C5C (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x140315D2C (MiFindActualFaultingPte.c)
 *     MiGetWorkingSetInfoList @ 0x1403186FC (MiGetWorkingSetInfoList.c)
 *     MiTranslatePageForCopy @ 0x14033FBD4 (MiTranslatePageForCopy.c)
 *     MiCheckCommitReleaseFromVad @ 0x140525C3C (MiCheckCommitReleaseFromVad.c)
 *     MiBuildForkPte @ 0x140552E1C (MiBuildForkPte.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPrototypePteVadLookup(unsigned __int64 a1)
{
  if ( (a1 & 0x400) == 0 )
    return 0LL;
  if ( qword_140C4DD40 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C4DD40;
  }
  return HIDWORD(a1) == 0xFFFFFFFF;
}
