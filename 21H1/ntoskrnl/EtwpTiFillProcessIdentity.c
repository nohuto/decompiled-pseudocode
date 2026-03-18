/*
 * XREFs of EtwpTiFillProcessIdentity @ 0x1403577E0
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x140316780 (EtwTiLogInsertQueueUserApc.c)
 *     EtwTimLogBlockNonCetBinaries @ 0x1405C7920 (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1405C7CE0 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1405C81D0 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     EtwTiLogMapExecView @ 0x1406E7D58 (EtwTiLogMapExecView.c)
 *     EtwTiLogSetContextThread @ 0x1406FD8E4 (EtwTiLogSetContextThread.c)
 *     EtwTiLogAllocExecVm @ 0x14070902C (EtwTiLogAllocExecVm.c)
 *     EtwTiLogProtectExecVm @ 0x140709218 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x14070933C (EtwTiLogReadWriteVm.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x14071BA00 (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTiLogSuspendResumeProcess @ 0x14093720C (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x140937374 (EtwTiLogSuspendResumeThread.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x140937528 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140937828 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     EtwpTimLogMitigationForProcess @ 0x140937DA4 (EtwpTimLogMitigationForProcess.c)
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
