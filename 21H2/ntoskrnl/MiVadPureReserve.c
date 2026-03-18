/*
 * XREFs of MiVadPureReserve @ 0x140319990
 * Callers:
 *     MiSplitPrivatePage @ 0x14028E238 (MiSplitPrivatePage.c)
 *     MiDeleteEmptyPageTables @ 0x14029F6FC (MiDeleteEmptyPageTables.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     NtLockVirtualMemory @ 0x1402E5D90 (NtLockVirtualMemory.c)
 *     MiComputeVadCharges @ 0x14030B440 (MiComputeVadCharges.c)
 *     MiQueryAddressState @ 0x140318330 (MiQueryAddressState.c)
 *     MiProbeAndLockPrepare @ 0x140319F70 (MiProbeAndLockPrepare.c)
 *     MiCommitExistingVad @ 0x14032C1B0 (MiCommitExistingVad.c)
 *     MiSetReadOnlyOnSectionView @ 0x14033A030 (MiSetReadOnlyOnSectionView.c)
 *     MiInPagePageTable @ 0x140353230 (MiInPagePageTable.c)
 *     MiCommitPagefileBackedSection @ 0x1406A3E60 (MiCommitPagefileBackedSection.c)
 *     MiReturnPageTablePageCommitment @ 0x1407B92D0 (MiReturnPageTablePageCommitment.c)
 *     MiReturnVadQuota @ 0x1407BC8F0 (MiReturnVadQuota.c)
 *     MiCommitPageTablesForVad @ 0x1407BDB60 (MiCommitPageTablesForVad.c)
 *     MiAllocateChildVads @ 0x1409800F4 (MiAllocateChildVads.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadPureReserve(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x200000) != 0 )
  {
    if ( (v1 & 0x70) == 0 && *(int *)(a1 + 52) >= 0 )
      return 1LL;
  }
  else if ( (*(_DWORD *)(a1 + 48) & 0xF80) == 0xC00 )
  {
    v3 = *(_QWORD *)(a1 + 72);
    if ( !*(_QWORD *)(*(_QWORD *)v3 + 64LL) && (*(_DWORD *)(*(_QWORD *)v3 + 56LL) & 0x1000) != 0 )
      return 1LL;
  }
  return 0LL;
}
