/*
 * XREFs of EtwpTiFillProcessIdentity @ 0x1402EDEB4
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x14024BD24 (EtwTiLogInsertQueueUserApc.c)
 *     EtwTiLogSetContextThread @ 0x14070592C (EtwTiLogSetContextThread.c)
 *     EtwTiLogAllocExecVm @ 0x14079EA28 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x14079EC58 (EtwTiLogReadWriteVm.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1407F74C4 (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTiLogProtectExecVm @ 0x1408833DA (EtwTiLogProtectExecVm.c)
 *     EtwTiLogMapExecView @ 0x1409E637C (EtwTiLogMapExecView.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1409E6524 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x1409E668C (EtwTiLogSuspendResumeThread.c)
 *     EtwTimLogBlockNonCetBinaries @ 0x1409E67F0 (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1409E6BB0 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1409E7418 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x1409E7718 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1409E7AD4 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1409E8614 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     EtwpTimLogMitigationForProcess @ 0x1409E8BEC (EtwpTimLogMitigationForProcess.c)
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
