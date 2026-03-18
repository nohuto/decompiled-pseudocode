/*
 * XREFs of ExecuteMarshaledInterceptRequest @ 0x1C01B1390
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00718AC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C01C2FD0 (-InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void ExecuteMarshaledInterceptRequest()
{
  _DWORD *MouseProcessor; // rbx
  __int64 v1; // rcx

  MouseProcessor = (_DWORD *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
  {
    if ( MouseProcessor[14] == (unsigned int)PsGetCurrentThreadId() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v1);
    if ( MouseProcessor[2] != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v1);
    CMouseProcessor::MouseInterceptState::InvokeMarshaledInterceptRequest((CMouseProcessor::MouseInterceptState *)(MouseProcessor + 942));
  }
}
