/*
 * XREFs of MiChargeFullProcessCommitment @ 0x140696FE0
 * Callers:
 *     MiProbeAndLockPrepare @ 0x14024EE20 (MiProbeAndLockPrepare.c)
 *     MiCopyToUserVa @ 0x1402548D0 (MiCopyToUserVa.c)
 *     MiProtectPrivateMemory @ 0x140254D50 (MiProtectPrivateMemory.c)
 *     MiSplitPrivatePage @ 0x140255888 (MiSplitPrivatePage.c)
 *     MiCommitExistingVad @ 0x1402AB230 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x1402AD740 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiSplitReducedCommitClonePage @ 0x14052B8C4 (MiSplitReducedCommitClonePage.c)
 *     MiCommitHotPatchTable @ 0x1405393F0 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405396FC (MiPrepareImagePagesForHotPatch.c)
 *     MiCommitPageTablesForVad @ 0x1406970B0 (MiCommitPageTablesForVad.c)
 *     MiComputeProcessUserVa @ 0x1406B4A38 (MiComputeProcessUserVa.c)
 *     MiCreateLargePageVad @ 0x1408D6964 (MiCreateLargePageVad.c)
 * Callees:
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x1402AD1E0 (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x1402AD200 (MiChargeProcessCommitment.c)
 *     PspChargeQuota @ 0x1402AD280 (PspChargeQuota.c)
 *     MiReturnProcessCommitment @ 0x14054B2A4 (MiReturnProcessCommitment.c)
 *     PsReturnProcessPageFileQuota @ 0x1405FA2DC (PsReturnProcessPageFileQuota.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406D3450 (PspChangeJobMemoryUsageByProcess.c)
 *     MiCommitRequestFailed @ 0x1408D3D84 (MiCommitRequestFailed.c)
 */

__int64 __fastcall MiChargeFullProcessCommitment(ULONG_PTR a1, unsigned __int64 a2)
{
  char v2; // bl
  __int64 v5; // rdx
  __int64 ProcessPartition; // rax
  unsigned int v8; // ebp
  unsigned int v9; // r14d

  v2 = 0;
  if ( (PEPROCESS)a1 == PsInitialSystemProcess || (int)PspChargeQuota(*(_QWORD *)(a1 + 1384), a1, 2, a2) >= 0 )
  {
    v2 = 1;
    if ( (unsigned int)MiChargeProcessCommitment((_QWORD *)a1, a2) )
    {
      v2 = 3;
      if ( (*(_DWORD *)(a1 + 1120) & 0x10) == 0 )
      {
LABEL_7:
        ProcessPartition = MiGetProcessPartition(a1);
        if ( (unsigned int)MiChargeCommit(ProcessPartition, a2, 0) )
          return 0LL;
        v9 = 4;
        goto LABEL_13;
      }
      if ( (unsigned __int8)PspChangeJobMemoryUsageByProcess(2LL, a2, a1) )
      {
        v2 = 7;
        goto LABEL_7;
      }
      v9 = 3;
    }
    else
    {
      v9 = 2;
    }
LABEL_13:
    v8 = -1073741523;
    goto LABEL_14;
  }
  v8 = -1073741524;
  v9 = 1;
LABEL_14:
  if ( (v2 & 1) != 0 )
    PsReturnProcessPageFileQuota(a1, a2);
  if ( (v2 & 2) != 0 )
    MiReturnProcessCommitment(a1, a2);
  if ( (unsigned __int8)v2 >= 4u )
    PspChangeJobMemoryUsageByProcess(2LL, -(__int64)a2, a1);
  MiCommitRequestFailed(a1, v5, a2, v9);
  return v8;
}
