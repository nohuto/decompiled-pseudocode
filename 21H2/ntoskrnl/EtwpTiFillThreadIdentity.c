/*
 * XREFs of EtwpTiFillThreadIdentity @ 0x14027E480
 * Callers:
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

__int64 __fastcall EtwpTiFillThreadIdentity(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)a1 = a2 + 1152;
  *(_QWORD *)(a1 + 16) = a2 + 1072;
  result = 2LL;
  *(_DWORD *)(a1 + 8) = 4;
  *(_DWORD *)(a1 + 24) = 8;
  return result;
}
