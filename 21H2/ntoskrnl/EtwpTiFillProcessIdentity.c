/*
 * XREFs of EtwpTiFillProcessIdentity @ 0x14027E4B8
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x140243FC0 (EtwTiLogInsertQueueUserApc.c)
 *     EtwTimLogBlockNonCetBinaries @ 0x1405D00D4 (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1405D0494 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1405D09D0 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1405D1528 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     EtwTiLogSetContextThread @ 0x1405F6208 (EtwTiLogSetContextThread.c)
 *     EtwTiLogMapExecView @ 0x14061CEF4 (EtwTiLogMapExecView.c)
 *     EtwTiLogReadWriteVm @ 0x140690354 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogAllocExecVm @ 0x140690504 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogProtectExecVm @ 0x1406906F0 (EtwTiLogProtectExecVm.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x14072FA00 (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTiLogSuspendResumeProcess @ 0x14093BC7C (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x14093BDE4 (EtwTiLogSuspendResumeThread.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x14093BF98 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x14093C298 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     EtwpTimLogMitigationForProcess @ 0x14093C814 (EtwpTimLogMitigationForProcess.c)
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
