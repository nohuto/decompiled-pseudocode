/*
 * XREFs of KdExitDebugger @ 0x1409B7190
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x1403CFF10 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x1405119E4 (KdpReport.c)
 *     KiTpWriteMemory @ 0x14051D4FC (KiTpWriteMemory.c)
 *     KdpCloseRemoteFile @ 0x1409B6970 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x1409B6BD0 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x1409B6DFC (KdpReadRemoteFile.c)
 *     KdSendTraceData @ 0x1409B72D0 (KdSendTraceData.c)
 *     KdpSendWaitContinue @ 0x1409B84F4 (KdpSendWaitContinue.c)
 *     KdpCommandString @ 0x1409B9600 (KdpCommandString.c)
 *     KdpPrint @ 0x1409B96C8 (KdpPrint.c)
 *     KdpPrompt @ 0x1409B9848 (KdpPrompt.c)
 *     KdpSymbol @ 0x1409B99C0 (KdpSymbol.c)
 *     KdpSetOwedBreakpoints @ 0x1409BA5E0 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14021FD40 (KeInsertQueueDpc.c)
 *     VfIsVerifierEnabled @ 0x1402D3DF0 (VfIsVerifierEnabled.c)
 *     ExQueueDebuggerWorker @ 0x1403C6C4C (ExQueueDebuggerWorker.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     KeRestoreSupervisorState @ 0x140519E60 (KeRestoreSupervisorState.c)
 *     KeThawExecution @ 0x14051DBE0 (KeThawExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C6050 (VfNotifyVerifierOfEvent.c)
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
    KeRestoreSupervisorState((__int64)KeGetCurrentPrcb()->ExtendedSupervisorState, qword_140CF68D0);
    qword_140CF68D0 = 0LL;
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
