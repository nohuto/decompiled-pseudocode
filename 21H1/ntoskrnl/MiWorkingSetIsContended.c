/*
 * XREFs of MiWorkingSetIsContended @ 0x1402B19F0
 * Callers:
 *     MiDispatchFault @ 0x14020E3D0 (MiDispatchFault.c)
 *     MiCheckProcessShadow @ 0x14020ED50 (MiCheckProcessShadow.c)
 *     MiGetPageChain @ 0x1402121E0 (MiGetPageChain.c)
 *     MiFillPoolCommitPageTable @ 0x140223CC0 (MiFillPoolCommitPageTable.c)
 *     MiWalkVaRange @ 0x140228550 (MiWalkVaRange.c)
 *     MiMoveDirtyBitsToPfns @ 0x14027A0D0 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x14028FD10 (NtGetWriteWatch.c)
 *     MiQueryAddressSpan @ 0x1402A4720 (MiQueryAddressSpan.c)
 *     NtLockVirtualMemory @ 0x1402A5D80 (NtLockVirtualMemory.c)
 *     MiProbePacketContended @ 0x1402A8EF8 (MiProbePacketContended.c)
 *     MiDeleteSystemPagableVm @ 0x1402AB670 (MiDeleteSystemPagableVm.c)
 *     MiProtectPrivateMemory @ 0x1402ADD80 (MiProtectPrivateMemory.c)
 *     NtUnlockVirtualMemory @ 0x1402AF520 (NtUnlockVirtualMemory.c)
 *     MiCommitPoolMemory @ 0x1402B16DC (MiCommitPoolMemory.c)
 *     MiRemoveMappedPtes @ 0x1402B38F0 (MiRemoveMappedPtes.c)
 *     MiReplaceRotateWithDemandZero @ 0x1402F7C80 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402FAF54 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C2DA8 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140527878 (MiUpdatePrivateDemandZeroView.c)
 *     MiSetGraphicsPtes @ 0x14052EB1C (MiSetGraphicsPtes.c)
 *     MiQueryVaPhysicalContiguity @ 0x140541734 (MiQueryVaPhysicalContiguity.c)
 *     MiAddPagesToEnclave @ 0x1405435E4 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140543C64 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140543F08 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140545010 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x140546424 (MiFreePhysicalPages.c)
 *     MiWriteAwePtes @ 0x140548778 (MiWriteAwePtes.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14054C484 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiCloneVads @ 0x140553838 (MiCloneVads.c)
 *     MiMapUserLargePages @ 0x140558C40 (MiMapUserLargePages.c)
 *     MiScrubLargeMappedPage @ 0x14055DF98 (MiScrubLargeMappedPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiWorkingSetIsContended(__int64 a1)
{
  LONG *v1; // rcx

  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v1 = &dword_140C4F6C0;
  else
    v1 = (LONG *)(a1 + 192);
  return (*v1 & 0x40000000) != 0;
}
