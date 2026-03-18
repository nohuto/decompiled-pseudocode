/*
 * XREFs of MiVadPureReserve @ 0x14027D170
 * Callers:
 *     MiSplitPrivatePage @ 0x1402354F8 (MiSplitPrivatePage.c)
 *     MiProbeAndLockPrepare @ 0x14026B610 (MiProbeAndLockPrepare.c)
 *     MiSetReadOnlyOnSectionView @ 0x14028EFF0 (MiSetReadOnlyOnSectionView.c)
 *     MiQueryAddressState @ 0x1402B2B40 (MiQueryAddressState.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     MiInPagePageTable @ 0x1402CBBA0 (MiInPagePageTable.c)
 *     NtLockVirtualMemory @ 0x1402D3000 (NtLockVirtualMemory.c)
 *     MiDeleteEmptyPageTables @ 0x1403F3750 (MiDeleteEmptyPageTables.c)
 *     MiInsertVadCharges @ 0x1406239C0 (MiInsertVadCharges.c)
 *     MiReturnVadQuota @ 0x140625D80 (MiReturnVadQuota.c)
 *     MiReturnPageTablePageCommitment @ 0x1406265B0 (MiReturnPageTablePageCommitment.c)
 *     MiCommitPageTablesForVad @ 0x14067BDF0 (MiCommitPageTablesForVad.c)
 *     MiCommitPagefileBackedSection @ 0x1406B29C0 (MiCommitPagefileBackedSection.c)
 *     MiAllocateChildVads @ 0x1408DB2D0 (MiAllocateChildVads.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadPureReserve(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x100000) != 0 )
  {
    if ( (v1 & 0x70) != 0 || *(int *)(a1 + 52) < 0 )
      return 0LL;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 48) & 0xF80) != 0xC00 )
      return 0LL;
    v3 = *(_QWORD *)(a1 + 72);
    if ( *(_QWORD *)(*(_QWORD *)v3 + 64LL) || (*(_DWORD *)(*(_QWORD *)v3 + 56LL) & 0x1000) == 0 )
      return 0LL;
  }
  return 1LL;
}
