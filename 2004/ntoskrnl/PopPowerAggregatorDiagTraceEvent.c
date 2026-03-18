/*
 * XREFs of PopPowerAggregatorDiagTraceEvent @ 0x140763D74
 * Callers:
 *     PopPowerAggregatorDiagTraceHandleIntent @ 0x140380900 (PopPowerAggregatorDiagTraceHandleIntent.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140763768 (PopPowerAggregatorNotifySuspendResume.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140763A88 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorWorker @ 0x140763B60 (PopPowerAggregatorWorker.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140763BE8 (PopPowerAggregatorInvokeStateMachine.c)
 *     PopNotifyCsStateExited @ 0x1408EC980 (PopNotifyCsStateExited.c)
 *     PopPowerAggregatorDiagTracePdcSleepTransition @ 0x1408F70B8 (PopPowerAggregatorDiagTracePdcSleepTransition.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140293470 (EtwWrite.c)
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
