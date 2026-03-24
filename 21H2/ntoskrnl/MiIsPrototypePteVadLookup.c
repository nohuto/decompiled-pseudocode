/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x14028D4D0
 * Callers:
 *     MiResolveProtoPteFault @ 0x1402153D0 (MiResolveProtoPteFault.c)
 *     MiCommitExistingVad @ 0x140218D90 (MiCommitExistingVad.c)
 *     MiWalkVaRange @ 0x14023C0F0 (MiWalkVaRange.c)
 *     MiSetReadOnlyOnSectionView @ 0x140240B90 (MiSetReadOnlyOnSectionView.c)
 *     MiSharedVaToPartition @ 0x14024144C (MiSharedVaToPartition.c)
 *     MiGetWorkingSetInfoList @ 0x14026E89C (MiGetWorkingSetInfoList.c)
 *     MiIsPteEvaluated @ 0x14027124C (MiIsPteEvaluated.c)
 *     MiCountSharedPages @ 0x14028C460 (MiCountSharedPages.c)
 *     MiCheckProtoAccess @ 0x14028D180 (MiCheckProtoAccess.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14028D248 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsFaultPteIntact @ 0x14028D274 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14028D344 (MiFindActualFaultingPte.c)
 *     MiTranslatePageForCopy @ 0x1402B4DE4 (MiTranslatePageForCopy.c)
 *     MiInitializeReadInProgressPfn @ 0x1402FBF30 (MiInitializeReadInProgressPfn.c)
 *     MiComputePageCommitment @ 0x14030CB60 (MiComputePageCommitment.c)
 *     MiIsPteDecommittedPage @ 0x14030CF60 (MiIsPteDecommittedPage.c)
 *     MiSplitPrivatePage @ 0x14030CFB0 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x14030D66C (MiIsCfgBitMapPageShared.c)
 *     MiSystemFault @ 0x140311400 (MiSystemFault.c)
 *     MiQueryAddressState @ 0x14032F730 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x140330DA0 (MiGetPageProtection.c)
 *     MiSetProtectionOnSection @ 0x140332C70 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x140337A80 (MiDeleteVa.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052B10C (MiCheckCommitReleaseFromVad.c)
 *     MiBuildForkPte @ 0x1405582BC (MiBuildForkPte.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPrototypePteVadLookup(unsigned __int64 a1)
{
  if ( (a1 & 0x400) == 0 )
    return 0LL;
  if ( qword_140C4DF40 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C4DF40;
  }
  return HIDWORD(a1) == 0xFFFFFFFF;
}
