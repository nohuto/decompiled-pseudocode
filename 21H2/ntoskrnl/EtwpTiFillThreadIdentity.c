/*
 * XREFs of EtwpTiFillThreadIdentity @ 0x14025F884
 * Callers:
 *     EtwTiLogAllocExecVm @ 0x14062909C (EtwTiLogAllocExecVm.c)
 *     EtwTiLogProtectExecVm @ 0x140629288 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x1406293AC (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x140696CB8 (EtwTiLogSetContextThread.c)
 *     EtwTiLogMapExecView @ 0x1406BDCE4 (EtwTiLogMapExecView.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x14072F834 (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTiLogSuspendResumeProcess @ 0x14093BAAC (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x14093BC14 (EtwTiLogSuspendResumeThread.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x14093BDC8 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x14093C0C8 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     EtwpTimLogMitigationForProcess @ 0x14093C644 (EtwpTimLogMitigationForProcess.c)
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
