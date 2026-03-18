/*
 * XREFs of KdExitDebugger @ 0x140A6F900
 * Callers:
 *     KdpReport @ 0x140299E94 (KdpReport.c)
 *     KdRefreshDebuggerNotPresent @ 0x1403DC750 (KdRefreshDebuggerNotPresent.c)
 *     KiTpWriteMemory @ 0x140573408 (KiTpWriteMemory.c)
 *     KdpCreateRemoteFile @ 0x140A6F444 (KdpCreateRemoteFile.c)
 *     KdpSymbol @ 0x140A6F61C (KdpSymbol.c)
 *     KdpSendWaitContinue @ 0x140A6FB80 (KdpSendWaitContinue.c)
 *     KdSendTraceData @ 0x140A702DC (KdSendTraceData.c)
 *     KdpCloseRemoteFile @ 0x140A7294C (KdpCloseRemoteFile.c)
 *     KdpReadRemoteFile @ 0x140A72BB0 (KdpReadRemoteFile.c)
 *     KdpCommandString @ 0x140A74270 (KdpCommandString.c)
 *     KdpPrint @ 0x140A7434C (KdpPrint.c)
 *     KdpPrompt @ 0x140A744CC (KdpPrompt.c)
 *     KdpSetOwedBreakpoints @ 0x140A74B64 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KeRestoreSupervisorState @ 0x14029B210 (KeRestoreSupervisorState.c)
 *     VfIsVerifierEnabled @ 0x1402DA4B0 (VfIsVerifierEnabled.c)
 *     KeThawExecution @ 0x1402DA4C0 (KeThawExecution.c)
 *     ExQueueDebuggerWorker @ 0x1402DA7E4 (ExQueueDebuggerWorker.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfNotifyVerifierOfEvent @ 0x140A81780 (VfNotifyVerifierOfEvent.c)
 */

__int64 __fastcall KdExitDebugger(char a1)
{
  __int64 v1; // rax
  _DWORD *v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  __int64 result; // rax

  KdEnteredDebugger = 0;
  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  v3 = (_DWORD *)KdLogBuffer[v1];
  if ( v3 )
  {
    v4 = (unsigned int)*v3;
    v5 = __rdtsc();
    *(_QWORD *)&v3[4 * v4 + 6] = v3[4 * v4 + 6] & 4 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1u | ((((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) - *(_QWORD *)&v3[4 * v4 + 4]) & 0xFFFFFFFFFFFFFFF1uLL;
    if ( (_DWORD)v4 == 254 )
      *v3 = 0;
    else
      *v3 = v4 + 1;
  }
  off_140C01F08[0]();
  if ( (KiBugCheckActive & 3) == 0 && !PoAllProcIntrDisabled )
  {
    KeRestoreSupervisorState((__int64)KeGetCurrentPrcb()->ExtendedSupervisorState, qword_140C4ECA0);
    qword_140C4ECA0 = 0LL;
  }
  KeThawExecution(a1);
  if ( KdTimerStop )
    KdTimerStart = __rdtsc();
  else
    KdTimerStart = 0LL;
  if ( !PoHiberInProgress && (KiBugCheckActive & 3) == 0 )
  {
    if ( !_InterlockedExchange(&KdpTimeSlipPending, 2) )
      KeInsertQueueDpc(&KdpTimeSlipDpc, 0LL, 0LL);
    ExQueueDebuggerWorker();
  }
  result = VfIsVerifierEnabled();
  if ( (_DWORD)result )
    return VfNotifyVerifierOfEvent(4LL);
  return result;
}
