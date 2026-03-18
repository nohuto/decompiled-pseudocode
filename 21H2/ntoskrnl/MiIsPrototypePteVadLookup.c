/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x1402806A0
 * Callers:
 *     MiIsPteDecommittedPage @ 0x14023AF98 (MiIsPteDecommittedPage.c)
 *     MiTranslatePageForCopy @ 0x14026C808 (MiTranslatePageForCopy.c)
 *     MiInitializeReadInProgressPfn @ 0x1402724C0 (MiInitializeReadInProgressPfn.c)
 *     MiSystemFault @ 0x140279590 (MiSystemFault.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402802DC (MI_PROTO_FORMAT_COMBINED.c)
 *     MiCheckProtoAccess @ 0x140280308 (MiCheckProtoAccess.c)
 *     MiIsFaultPteIntact @ 0x1402803FC (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x1402804F0 (MiFindActualFaultingPte.c)
 *     MiIsCfgBitMapPageShared @ 0x1402810B0 (MiIsCfgBitMapPageShared.c)
 *     MiSplitPrivatePage @ 0x14028E238 (MiSplitPrivatePage.c)
 *     MiComputePageCommitment @ 0x14028EDD0 (MiComputePageCommitment.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     MiCountSharedPages @ 0x1402D0500 (MiCountSharedPages.c)
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     MiIsPteEvaluated @ 0x1402E766C (MiIsPteEvaluated.c)
 *     MiQueryAddressState @ 0x140318330 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x140319160 (MiGetPageProtection.c)
 *     MiResolveProtoPteFault @ 0x14031EAA0 (MiResolveProtoPteFault.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiDeleteVa @ 0x140330730 (MiDeleteVa.c)
 *     MiSetReadOnlyOnSectionView @ 0x14033A030 (MiSetReadOnlyOnSectionView.c)
 *     MiSharedVaToPartition @ 0x14033D80C (MiSharedVaToPartition.c)
 *     MiWalkVaRange @ 0x14033E5D0 (MiWalkVaRange.c)
 *     MiCheckCommitReleaseFromVad @ 0x14057FA8C (MiCheckCommitReleaseFromVad.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPrototypePteVadLookup(unsigned __int64 a1)
{
  if ( (a1 & 0x400) == 0 )
    return 0LL;
  if ( qword_140C50780 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C50780;
  }
  return HIDWORD(a1) == 0xFFFFFFFF;
}
