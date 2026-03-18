/*
 * XREFs of EtwpTiFillProcessIdentity @ 0x1402EBDD0
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x140324F30 (EtwTiLogInsertQueueUserApc.c)
 *     EtwTimLogBlockNonCetBinaries @ 0x1405CDDE4 (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1405CE1A4 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1405CE694 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1405CF1EC (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     EtwTiLogReadWriteVm @ 0x140699CB8 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogAllocExecVm @ 0x140699E68 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogProtectExecVm @ 0x14069A054 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogSetContextThread @ 0x1406C7D98 (EtwTiLogSetContextThread.c)
 *     EtwTiLogMapExecView @ 0x1406DDC94 (EtwTiLogMapExecView.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x14072B81C (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTiLogSuspendResumeProcess @ 0x14093E2DC (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x14093E444 (EtwTiLogSuspendResumeThread.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x14093E5F8 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x14093E8F8 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     EtwpTimLogMitigationForProcess @ 0x14093EE74 (EtwpTimLogMitigationForProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpTiFillProcessIdentity(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 result; // rax

  a1[1] = 4LL;
  *a1 = a2 + 1088;
  a1[2] = a2 + 1128;
  a1[3] = 8LL;
  *a3 = *(_QWORD *)(a2 + 2296) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
  a1[6] = a2 + 2168;
  a1[8] = a2 + 2169;
  a1[10] = a2 + 2170;
  result = 6LL;
  a1[4] = a3;
  a1[5] = 8LL;
  a1[7] = 1LL;
  a1[9] = 1LL;
  a1[11] = 1LL;
  return result;
}
