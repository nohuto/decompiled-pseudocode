/*
 * XREFs of PopNotifyCallbacksPreSleep @ 0x14077268C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExNotifyCallback @ 0x14030FBB0 (ExNotifyCallback.c)
 *     PopDiagTraceEventNoPayload @ 0x14032BC04 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x140996484 (PopCheckpointSystemSleep.c)
 */

__int64 PopNotifyCallbacksPreSleep()
{
  PopCheckpointSystemSleep(8LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PRESLEEP_CALLBACKS_START);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PRESLEEP_CALLBACKS_STOP);
  return PopCheckpointSystemSleep(9LL);
}
