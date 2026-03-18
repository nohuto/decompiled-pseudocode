/*
 * XREFs of ExecuteMarshaledInterceptRequest @ 0x1C01A92B0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00554EC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C01BAF00 (-InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void ExecuteMarshaledInterceptRequest()
{
  _DWORD *MouseProcessor; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  MouseProcessor = (_DWORD *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
  {
    if ( MouseProcessor[14] == (unsigned int)PsGetCurrentThreadId() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3, v4);
    if ( MouseProcessor[2] != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3, v4);
    CMouseProcessor::MouseInterceptState::InvokeMarshaledInterceptRequest((CMouseProcessor::MouseInterceptState *)(MouseProcessor + 924));
  }
}
