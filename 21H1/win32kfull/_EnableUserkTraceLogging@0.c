/*
 * XREFs of _EnableUserkTraceLogging@0 @ 0xE7544
 * Callers:
 *     <none>
 * Callees:
 *     _TlgRegisterAggregateProviderEx@16 @ 0x27A62E (_TlgRegisterAggregateProviderEx@16.c)
 *     _TraceLoggingRegisterEx_EtwRegister_EtwSetInformation@12 @ 0x27A6CA (_TraceLoggingRegisterEx_EtwRegister_EtwSetInformation@12.c)
 */

int __stdcall EnableUserkTraceLogging()
{
  int v0; // ecx

  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_266280, 0);
  TlgRegisterAggregateProviderEx(v0, v0);
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_2689E8, 0);
}
