/*
 * XREFs of KdExitDebugger @ 0x1409B4190
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x1403CC910 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x14050C584 (KdpReport.c)
 *     KiTpWriteMemory @ 0x14051804C (KiTpWriteMemory.c)
 *     KdpCloseRemoteFile @ 0x1409B3970 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x1409B3BD0 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x1409B3DFC (KdpReadRemoteFile.c)
 *     KdSendTraceData @ 0x1409B42D0 (KdSendTraceData.c)
 *     KdpSendWaitContinue @ 0x1409B54F4 (KdpSendWaitContinue.c)
 *     KdpCommandString @ 0x1409B6600 (KdpCommandString.c)
 *     KdpPrint @ 0x1409B66C8 (KdpPrint.c)
 *     KdpPrompt @ 0x1409B6848 (KdpPrompt.c)
 *     KdpSymbol @ 0x1409B69C0 (KdpSymbol.c)
 *     KdpSetOwedBreakpoints @ 0x1409B75E0 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140214C00 (KeInsertQueueDpc.c)
 *     VfIsVerifierEnabled @ 0x140360D70 (VfIsVerifierEnabled.c)
 *     ExQueueDebuggerWorker @ 0x1403C3AEC (ExQueueDebuggerWorker.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     KeRestoreSupervisorState @ 0x1405149F0 (KeRestoreSupervisorState.c)
 *     KeThawExecution @ 0x140518730 (KeThawExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C3040 (VfNotifyVerifierOfEvent.c)
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
  off_140C008B8[0]();
  if ( (KiBugCheckActive & 3) == 0 && !PoAllProcIntrDisabled )
  {
    KeRestoreSupervisorState((__int64)KeGetCurrentPrcb()->ExtendedSupervisorState, qword_140CF6350);
    qword_140CF6350 = 0LL;
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
