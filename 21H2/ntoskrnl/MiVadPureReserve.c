/*
 * XREFs of MiVadPureReserve @ 0x14021B990
 * Callers:
 *     MiProbeAndLockPrepare @ 0x14020A2F0 (MiProbeAndLockPrepare.c)
 *     MiSetReadOnlyOnSectionView @ 0x140240B90 (MiSetReadOnlyOnSectionView.c)
 *     NtLockVirtualMemory @ 0x140270060 (NtLockVirtualMemory.c)
 *     MiInPagePageTable @ 0x14030BDC0 (MiInPagePageTable.c)
 *     MiSplitPrivatePage @ 0x14030CFB0 (MiSplitPrivatePage.c)
 *     MiQueryAddressState @ 0x14032F730 (MiQueryAddressState.c)
 *     MiSetProtectionOnSection @ 0x140332C70 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 *     MiDeleteEmptyPageTables @ 0x1403F4F90 (MiDeleteEmptyPageTables.c)
 *     MiCommitPageTablesForVad @ 0x1405F91A0 (MiCommitPageTablesForVad.c)
 *     MiCommitPagefileBackedSection @ 0x14069BA84 (MiCommitPagefileBackedSection.c)
 *     MiInsertVadCharges @ 0x1406ECC70 (MiInsertVadCharges.c)
 *     MiReturnVadQuota @ 0x1406EE790 (MiReturnVadQuota.c)
 *     MiReturnPageTablePageCommitment @ 0x1406EE990 (MiReturnPageTablePageCommitment.c)
 *     MiAllocateChildVads @ 0x1408D8A90 (MiAllocateChildVads.c)
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
