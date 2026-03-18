/*
 * XREFs of EtwpTiFillProcessIdentity @ 0x1402FB800
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x140354270 (EtwTiLogInsertQueueUserApc.c)
 *     EtwTimLogBlockNonCetBinaries @ 0x1405C8940 (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1405C8D00 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1405C91F0 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     EtwTiLogAllocExecVm @ 0x1406B31DC (EtwTiLogAllocExecVm.c)
 *     EtwTiLogProtectExecVm @ 0x1406B33C8 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x1406B34EC (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x1406E66C4 (EtwTiLogSetContextThread.c)
 *     EtwTiLogMapExecView @ 0x14070BB14 (EtwTiLogMapExecView.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x14071D980 (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1409384AC (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x140938614 (EtwTiLogSuspendResumeThread.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1409387C8 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140938AC8 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     EtwpTimLogMitigationForProcess @ 0x140939044 (EtwpTimLogMitigationForProcess.c)
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
