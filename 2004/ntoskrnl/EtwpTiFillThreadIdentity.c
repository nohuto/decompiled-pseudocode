/*
 * XREFs of EtwpTiFillThreadIdentity @ 0x1402FBA84
 * Callers:
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
