/*
 * XREFs of MiWorkingSetIsContended @ 0x1402589C0
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x140221080 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x140236CC0 (NtGetWriteWatch.c)
 *     MiQueryAddressSpan @ 0x14024B6F0 (MiQueryAddressSpan.c)
 *     NtLockVirtualMemory @ 0x14024CD50 (NtLockVirtualMemory.c)
 *     MiProbePacketContended @ 0x14024FEC8 (MiProbePacketContended.c)
 *     MiDeleteSystemPagableVm @ 0x140252640 (MiDeleteSystemPagableVm.c)
 *     MiProtectPrivateMemory @ 0x140254D50 (MiProtectPrivateMemory.c)
 *     NtUnlockVirtualMemory @ 0x1402564F0 (NtUnlockVirtualMemory.c)
 *     MiCommitPoolMemory @ 0x1402586AC (MiCommitPoolMemory.c)
 *     MiRemoveMappedPtes @ 0x14025A8C0 (MiRemoveMappedPtes.c)
 *     MiDispatchFault @ 0x1402A0EE0 (MiDispatchFault.c)
 *     MiCheckProcessShadow @ 0x1402A1860 (MiCheckProcessShadow.c)
 *     MiGetPageChain @ 0x1402A4CF0 (MiGetPageChain.c)
 *     MiFillPoolCommitPageTable @ 0x1402B6940 (MiFillPoolCommitPageTable.c)
 *     MiWalkVaRange @ 0x1402BB1D0 (MiWalkVaRange.c)
 *     MiGetWorkingSetInfoList @ 0x1403186FC (MiGetWorkingSetInfoList.c)
 *     MiReplaceRotateWithDemandZero @ 0x140334CB0 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140337F84 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C3C68 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140527EC8 (MiUpdatePrivateDemandZeroView.c)
 *     MiSetGraphicsPtes @ 0x14052F16C (MiSetGraphicsPtes.c)
 *     MiQueryVaPhysicalContiguity @ 0x140541D84 (MiQueryVaPhysicalContiguity.c)
 *     MiAddPagesToEnclave @ 0x140543C34 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1405442B4 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140544558 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140545660 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x140546A74 (MiFreePhysicalPages.c)
 *     MiWriteAwePtes @ 0x140548DC8 (MiWriteAwePtes.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14054CAD4 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiCloneVads @ 0x140553E88 (MiCloneVads.c)
 *     MiMapUserLargePages @ 0x140559290 (MiMapUserLargePages.c)
 *     MiScrubLargeMappedPage @ 0x14055E5E8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiWorkingSetIsContended(__int64 a1)
{
  LONG *v1; // rcx

  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v1 = &dword_140C4F580;
  else
    v1 = (LONG *)(a1 + 192);
  return (*v1 & 0x40000000) != 0;
}
