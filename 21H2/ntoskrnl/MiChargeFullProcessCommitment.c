/*
 * XREFs of MiChargeFullProcessCommitment @ 0x1406E8830
 * Callers:
 *     MiProbeAndLockPrepare @ 0x1402AEBF0 (MiProbeAndLockPrepare.c)
 *     MiCommitExistingVad @ 0x1402BD690 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x1402BFDE0 (MiMakeHyperRangeAccessible.c)
 *     MiSplitPrivatePage @ 0x140317D00 (MiSplitPrivatePage.c)
 *     MiProtectPrivateMemory @ 0x140318750 (MiProtectPrivateMemory.c)
 *     MiCopyToUserVa @ 0x140319288 (MiCopyToUserVa.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 *     MiSplitReducedCommitClonePage @ 0x140530FD4 (MiSplitReducedCommitClonePage.c)
 *     MiCommitHotPatchTable @ 0x14053EB00 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053EE0C (MiPrepareImagePagesForHotPatch.c)
 *     MiComputeProcessUserVa @ 0x1406C0310 (MiComputeProcessUserVa.c)
 *     MiCommitPageTablesForVad @ 0x1406E8900 (MiCommitPageTablesForVad.c)
 *     MiCreateLargePageVad @ 0x1408DA0C4 (MiCreateLargePageVad.c)
 * Callees:
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x1402BF640 (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x1402BF660 (MiChargeProcessCommitment.c)
 *     PspChargeQuota @ 0x1402BF6E0 (PspChargeQuota.c)
 *     MiReturnProcessCommitment @ 0x140550984 (MiReturnProcessCommitment.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1405DB0D0 (PspChangeJobMemoryUsageByProcess.c)
 *     PsReturnProcessPageFileQuota @ 0x140705B3C (PsReturnProcessPageFileQuota.c)
 *     MiCommitRequestFailed @ 0x1408D74E4 (MiCommitRequestFailed.c)
 */

__int64 __fastcall MiChargeFullProcessCommitment(__int64 a1, unsigned __int64 a2)
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
      if ( PspChangeJobMemoryUsageByProcess(2, a2, a1, 0LL) )
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
    PspChangeJobMemoryUsageByProcess(2, -(__int64)a2, a1, 0LL);
  MiCommitRequestFailed(a1, v5, a2, v9);
  return v8;
}
