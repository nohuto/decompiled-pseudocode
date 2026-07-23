/*
 * XREFs of MiWorkingSetIsContended @ 0x140316520
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140218B54 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReplaceRotateWithDemandZero @ 0x140219184 (MiReplaceRotateWithDemandZero.c)
 *     MiGetWorkingSetInfoList @ 0x14025C83C (MiGetWorkingSetInfoList.c)
 *     NtLockVirtualMemory @ 0x14025E000 (NtLockVirtualMemory.c)
 *     MiQueryAddressSpan @ 0x14027C940 (MiQueryAddressSpan.c)
 *     MiDispatchFault @ 0x1402B3800 (MiDispatchFault.c)
 *     MiCheckProcessShadow @ 0x1402B4180 (MiCheckProcessShadow.c)
 *     MiGetPageChain @ 0x1402B7610 (MiGetPageChain.c)
 *     MiWalkVaRange @ 0x1402E0940 (MiWalkVaRange.c)
 *     MiDeleteSystemPagableVm @ 0x1403107D0 (MiDeleteSystemPagableVm.c)
 *     MiProbePacketContended @ 0x140313158 (MiProbePacketContended.c)
 *     MiRemoveMappedPtes @ 0x140313250 (MiRemoveMappedPtes.c)
 *     MiCommitPoolMemory @ 0x140315F7C (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x140316730 (MiFillPoolCommitPageTable.c)
 *     MiProtectPrivateMemory @ 0x140318750 (MiProtectPrivateMemory.c)
 *     MiMoveDirtyBitsToPfns @ 0x1403221E0 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1403373A0 (NtGetWriteWatch.c)
 *     NtUnlockVirtualMemory @ 0x140338C80 (NtUnlockVirtualMemory.c)
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C6F68 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14052D5D8 (MiUpdatePrivateDemandZeroView.c)
 *     MiSetGraphicsPtes @ 0x14053487C (MiSetGraphicsPtes.c)
 *     MiQueryVaPhysicalContiguity @ 0x140547494 (MiQueryVaPhysicalContiguity.c)
 *     MiAddPagesToEnclave @ 0x140549344 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1405499C4 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549C68 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x14054AD70 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x14054C184 (MiFreePhysicalPages.c)
 *     MiWriteAwePtes @ 0x14054E4D8 (MiWriteAwePtes.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405521B4 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiCloneVads @ 0x140559568 (MiCloneVads.c)
 *     MiMapUserLargePages @ 0x14055E970 (MiMapUserLargePages.c)
 *     MiScrubLargeMappedPage @ 0x140563CC8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiWorkingSetIsContended(__int64 a1)
{
  LONG *v1; // rcx

  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v1 = &dword_140C4F7C0;
  else
    v1 = (LONG *)(a1 + 192);
  return (*v1 & 0x40000000) != 0;
}
