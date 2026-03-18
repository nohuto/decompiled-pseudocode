/*
 * XREFs of EtwpTiFillThreadIdentity @ 0x140357A64
 * Callers:
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
