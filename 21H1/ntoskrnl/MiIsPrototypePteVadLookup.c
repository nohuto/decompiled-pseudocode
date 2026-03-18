/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x140345200
 * Callers:
 *     MiResolveProtoPteFault @ 0x140214D60 (MiResolveProtoPteFault.c)
 *     MiCommitExistingVad @ 0x140218720 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiQueryAddressState @ 0x14021E510 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x14021F920 (MiGetPageProtection.c)
 *     MiSharedVaToPartition @ 0x140226348 (MiSharedVaToPartition.c)
 *     MiWalkVaRange @ 0x140228550 (MiWalkVaRange.c)
 *     MiSystemFault @ 0x14022A810 (MiSystemFault.c)
 *     MiDeleteVa @ 0x14029BBC0 (MiDeleteVa.c)
 *     MiSetReadOnlyOnSectionView @ 0x14029F230 (MiSetReadOnlyOnSectionView.c)
 *     MiComputePageCommitment @ 0x1402AD4B0 (MiComputePageCommitment.c)
 *     MiIsPteDecommittedPage @ 0x1402AD8B0 (MiIsPteDecommittedPage.c)
 *     MiSplitPrivatePage @ 0x1402AE8B8 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x1402AEF74 (MiIsCfgBitMapPageShared.c)
 *     MiInitializeReadInProgressPfn @ 0x1402BAAF0 (MiInitializeReadInProgressPfn.c)
 *     MiTranslatePageForCopy @ 0x140302DD4 (MiTranslatePageForCopy.c)
 *     MiCountSharedPages @ 0x1403420A0 (MiCountSharedPages.c)
 *     MiIsPteEvaluated @ 0x140344E10 (MiIsPteEvaluated.c)
 *     MiCheckProtoAccess @ 0x140344EA8 (MiCheckProtoAccess.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140344F70 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsFaultPteIntact @ 0x140344F9C (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14034506C (MiFindActualFaultingPte.c)
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 *     MiCheckCommitReleaseFromVad @ 0x1405255EC (MiCheckCommitReleaseFromVad.c)
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPrototypePteVadLookup(unsigned __int64 a1)
{
  if ( (a1 & 0x400) == 0 )
    return 0LL;
  if ( qword_140C4DE80 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C4DE80;
  }
  return HIDWORD(a1) == 0xFFFFFFFF;
}
