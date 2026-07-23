/*
 * XREFs of KdExitDebugger @ 0x1409B8190
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x1403D0080 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x140511C24 (KdpReport.c)
 *     KiTpWriteMemory @ 0x14051D73C (KiTpWriteMemory.c)
 *     KdpCloseRemoteFile @ 0x1409B7970 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x1409B7BD0 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x1409B7DFC (KdpReadRemoteFile.c)
 *     KdSendTraceData @ 0x1409B82D0 (KdSendTraceData.c)
 *     KdpSendWaitContinue @ 0x1409B94F4 (KdpSendWaitContinue.c)
 *     KdpCommandString @ 0x1409BA600 (KdpCommandString.c)
 *     KdpPrint @ 0x1409BA6C8 (KdpPrint.c)
 *     KdpPrompt @ 0x1409BA848 (KdpPrompt.c)
 *     KdpSymbol @ 0x1409BA9C0 (KdpSymbol.c)
 *     KdpSetOwedBreakpoints @ 0x1409BB5E0 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140252060 (VfIsVerifierEnabled.c)
 *     KeInsertQueueDpc @ 0x1402C4640 (KeInsertQueueDpc.c)
 *     ExQueueDebuggerWorker @ 0x1403C6DEC (ExQueueDebuggerWorker.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KeRestoreSupervisorState @ 0x14051A0A0 (KeRestoreSupervisorState.c)
 *     KeThawExecution @ 0x14051DE20 (KeThawExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C7050 (VfNotifyVerifierOfEvent.c)
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
    KeRestoreSupervisorState((__int64)KeGetCurrentPrcb()->ExtendedSupervisorState, qword_140CF6910);
    qword_140CF6910 = 0LL;
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
