/*
 * XREFs of MiVadPureReserve @ 0x1402ADBF0
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140246200 (MiSetReadOnlyOnSectionView.c)
 *     NtLockVirtualMemory @ 0x14024CD50 (NtLockVirtualMemory.c)
 *     MiProbeAndLockPrepare @ 0x14024EE20 (MiProbeAndLockPrepare.c)
 *     MiSplitPrivatePage @ 0x140255888 (MiSplitPrivatePage.c)
 *     MiInPagePageTable @ 0x140258DB0 (MiInPagePageTable.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 *     MiQueryAddressState @ 0x1402B1190 (MiQueryAddressState.c)
 *     MiDeleteEmptyPageTables @ 0x1403EF2E0 (MiDeleteEmptyPageTables.c)
 *     MiReturnVadQuota @ 0x1405F8B20 (MiReturnVadQuota.c)
 *     MiInsertVadCharges @ 0x1405FE050 (MiInsertVadCharges.c)
 *     MiReturnPageTablePageCommitment @ 0x1406084D0 (MiReturnPageTablePageCommitment.c)
 *     MiCommitPagefileBackedSection @ 0x14060BD6C (MiCommitPagefileBackedSection.c)
 *     MiCommitPageTablesForVad @ 0x1406970B0 (MiCommitPageTablesForVad.c)
 *     MiAllocateChildVads @ 0x1408D5490 (MiAllocateChildVads.c)
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
