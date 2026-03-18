/*
 * XREFs of EtwpTiFillThreadIdentity @ 0x1402EC054
 * Callers:
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
