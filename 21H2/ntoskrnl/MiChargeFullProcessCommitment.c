/*
 * XREFs of MiChargeFullProcessCommitment @ 0x1407BE280
 * Callers:
 *     MiCopyToUserVa @ 0x14028DF40 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14028E238 (MiSplitPrivatePage.c)
 *     MiMakeHyperRangeAccessible @ 0x1403199E0 (MiMakeHyperRangeAccessible.c)
 *     MiProbeAndLockPrepare @ 0x140319F70 (MiProbeAndLockPrepare.c)
 *     MiCommitExistingVad @ 0x14032C1B0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14032EA60 (MiProtectPrivateMemory.c)
 *     MiSplitReducedCommitClonePage @ 0x1405845D4 (MiSplitReducedCommitClonePage.c)
 *     MiCommitHotPatchTable @ 0x1405A3418 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405A3818 (MiPrepareImagePagesForHotPatch.c)
 *     MiComputeProcessUserVa @ 0x14070A9C0 (MiComputeProcessUserVa.c)
 *     MiCommitPageTablesForVad @ 0x1407BDB60 (MiCommitPageTablesForVad.c)
 *     MiCreateLargePageVad @ 0x140982DE4 (MiCreateLargePageVad.c)
 * Callees:
 *     PspChargeQuota @ 0x1402AC010 (PspChargeQuota.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x14032A72C (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x14032A750 (MiChargeProcessCommitment.c)
 *     MiReturnProcessCommitment @ 0x1405B3370 (MiReturnProcessCommitment.c)
 *     PsReturnProcessPageFileQuota @ 0x1406FEC90 (PsReturnProcessPageFileQuota.c)
 *     PsChangeJobMemoryUsage @ 0x1406FECC4 (PsChangeJobMemoryUsage.c)
 *     MiCommitRequestFailed @ 0x14097F250 (MiCommitRequestFailed.c)
 */

__int64 __fastcall MiChargeFullProcessCommitment(ULONG_PTR a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  char v5; // bl
  __int64 ProcessPartition; // rax
  unsigned int v8; // ebp
  unsigned int v9; // r14d

  if ( (PEPROCESS)a1 == PsInitialSystemProcess || (int)PspChargeQuota(*(_QWORD *)(a1 + 1384), a1, 2, a2) >= 0 )
  {
    v5 = 1;
    if ( (unsigned int)MiChargeProcessCommitment((_QWORD *)a1, a2) )
    {
      v5 = 3;
      if ( (*(_DWORD *)(a1 + 1120) & 0x10) == 0 )
      {
LABEL_7:
        ProcessPartition = MiGetProcessPartition(a1);
        if ( (unsigned int)MiChargeCommit(ProcessPartition, a2, 0) )
          return 0LL;
        v8 = 4;
        goto LABEL_13;
      }
      if ( (unsigned __int8)PsChangeJobMemoryUsage(2LL, a2, a1) )
      {
        v5 = 7;
        goto LABEL_7;
      }
      v8 = 3;
    }
    else
    {
      v8 = 2;
    }
LABEL_13:
    PsReturnProcessPageFileQuota(a1, a2);
    if ( (v5 & 2) != 0 )
      MiReturnProcessCommitment(a1, a2);
    v9 = -1073741523;
    if ( (unsigned __int8)v5 >= 4u )
      PsChangeJobMemoryUsage(2LL, -(__int64)a2, a1);
    goto LABEL_17;
  }
  v8 = 1;
  v9 = -1073741524;
LABEL_17:
  MiCommitRequestFailed(a1, v4, a2, v8);
  return v9;
}
