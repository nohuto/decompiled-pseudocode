/*
 * XREFs of MiVadPureReserve @ 0x14021AF70
 * Callers:
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiQueryAddressState @ 0x14021E510 (MiQueryAddressState.c)
 *     MiSetReadOnlyOnSectionView @ 0x14029F230 (MiSetReadOnlyOnSectionView.c)
 *     NtLockVirtualMemory @ 0x1402A5D80 (NtLockVirtualMemory.c)
 *     MiProbeAndLockPrepare @ 0x1402A7E50 (MiProbeAndLockPrepare.c)
 *     MiSplitPrivatePage @ 0x1402AE8B8 (MiSplitPrivatePage.c)
 *     MiInPagePageTable @ 0x1402B1DE0 (MiInPagePageTable.c)
 *     MiDeleteEmptyPageTables @ 0x1403EDF80 (MiDeleteEmptyPageTables.c)
 *     MiCommitPageTablesForVad @ 0x1405EDBB0 (MiCommitPageTablesForVad.c)
 *     MiReturnVadQuota @ 0x14062DB60 (MiReturnVadQuota.c)
 *     MiInsertVadCharges @ 0x140633090 (MiInsertVadCharges.c)
 *     MiReturnPageTablePageCommitment @ 0x14063D620 (MiReturnPageTablePageCommitment.c)
 *     MiCommitPagefileBackedSection @ 0x140640EBC (MiCommitPagefileBackedSection.c)
 *     MiAllocateChildVads @ 0x1408D4140 (MiAllocateChildVads.c)
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
