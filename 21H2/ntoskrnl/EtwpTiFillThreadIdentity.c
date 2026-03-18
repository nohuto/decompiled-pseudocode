/*
 * XREFs of EtwpTiFillThreadIdentity @ 0x1402EDFB0
 * Callers:
 *     EtwTiLogSetContextThread @ 0x14070592C (EtwTiLogSetContextThread.c)
 *     EtwTiLogAllocExecVm @ 0x14079EA28 (EtwTiLogAllocExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x14079EC58 (EtwTiLogReadWriteVm.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1407F74C4 (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTiLogProtectExecVm @ 0x1408833DA (EtwTiLogProtectExecVm.c)
 *     EtwTiLogMapExecView @ 0x1409E637C (EtwTiLogMapExecView.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1409E6524 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x1409E668C (EtwTiLogSuspendResumeThread.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1409E7418 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x1409E7718 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     EtwpTimLogMitigationForProcess @ 0x1409E8BEC (EtwpTimLogMitigationForProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpTiFillThreadIdentity(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)a1 = a2 + 1232;
  *(_QWORD *)(a1 + 16) = a2 + 1152;
  result = 2LL;
  *(_DWORD *)(a1 + 8) = 4;
  *(_DWORD *)(a1 + 24) = 8;
  return result;
}
