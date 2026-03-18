/*
 * XREFs of MiWorkingSetIsContended @ 0x1402CB2C0
 * Callers:
 *     MiQueryAddressSpan @ 0x14022C1F0 (MiQueryAddressSpan.c)
 *     MiMoveDirtyBitsToPfns @ 0x14022F4F0 (MiMoveDirtyBitsToPfns.c)
 *     MiProtectPrivateMemory @ 0x1402349C0 (MiProtectPrivateMemory.c)
 *     MiDeleteSystemPagableVm @ 0x140236D90 (MiDeleteSystemPagableVm.c)
 *     MiReplaceRotateWithDemandZero @ 0x14025E4B0 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14025F3B4 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDispatchFault @ 0x140270220 (MiDispatchFault.c)
 *     MiCheckProcessShadow @ 0x140270BA0 (MiCheckProcessShadow.c)
 *     MiGetPageChain @ 0x140274030 (MiGetPageChain.c)
 *     NtGetWriteWatch @ 0x1402AFA60 (NtGetWriteWatch.c)
 *     NtUnlockVirtualMemory @ 0x1402B1340 (NtUnlockVirtualMemory.c)
 *     MiFillPoolCommitPageTable @ 0x1402CA5C0 (MiFillPoolCommitPageTable.c)
 *     MiCommitPoolMemory @ 0x1402CAD1C (MiCommitPoolMemory.c)
 *     MiRemoveMappedPtes @ 0x1402CF020 (MiRemoveMappedPtes.c)
 *     MiProbePacketContended @ 0x1402D138C (MiProbePacketContended.c)
 *     NtLockVirtualMemory @ 0x1402D3000 (NtLockVirtualMemory.c)
 *     MiWalkVaRange @ 0x1403471D0 (MiWalkVaRange.c)
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C63D8 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14052B898 (MiUpdatePrivateDemandZeroView.c)
 *     MiSetGraphicsPtes @ 0x140532B3C (MiSetGraphicsPtes.c)
 *     MiQueryVaPhysicalContiguity @ 0x140545754 (MiQueryVaPhysicalContiguity.c)
 *     MiAddPagesToEnclave @ 0x140547604 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140547C84 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140547F28 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140549030 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x14054A444 (MiFreePhysicalPages.c)
 *     MiWriteAwePtes @ 0x14054C798 (MiWriteAwePtes.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405504A4 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiCloneVads @ 0x140557858 (MiCloneVads.c)
 *     MiMapUserLargePages @ 0x14055CC60 (MiMapUserLargePages.c)
 *     MiScrubLargeMappedPage @ 0x140561FB8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiWorkingSetIsContended(__int64 a1)
{
  LONG *v1; // rcx

  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v1 = &dword_140C4F600;
  else
    v1 = (LONG *)(a1 + 192);
  return (*v1 & 0x40000000) != 0;
}
