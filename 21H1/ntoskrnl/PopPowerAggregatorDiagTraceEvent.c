/*
 * XREFs of PopPowerAggregatorDiagTraceEvent @ 0x140762494
 * Callers:
 *     PopPowerAggregatorDiagTraceHandleIntent @ 0x1403800C0 (PopPowerAggregatorDiagTraceHandleIntent.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140761E88 (PopPowerAggregatorNotifySuspendResume.c)
 *     PopPowerAggregatorSetCurrentState @ 0x1407621A8 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorWorker @ 0x140762280 (PopPowerAggregatorWorker.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140762308 (PopPowerAggregatorInvokeStateMachine.c)
 *     PopNotifyCsStateExited @ 0x1408EB700 (PopNotifyCsStateExited.c)
 *     PopPowerAggregatorDiagTracePdcSleepTransition @ 0x1408F5DC8 (PopPowerAggregatorDiagTracePdcSleepTransition.c)
 * Callees:
 *     EtwWrite @ 0x140256BF0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 */

void __fastcall PopPowerAggregatorDiagTraceEvent(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  REGHANDLE v6; // rdi

  if ( PopDiagHandleRegistered )
  {
    v6 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
      EtwWrite(v6, EventDescriptor, 0LL, UserDataCount, UserData);
  }
}
