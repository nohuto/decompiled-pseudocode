/*
 * XREFs of EnableUserkTraceLogging @ 0x1C01240D0
 * Callers:
 *     <none>
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1C037B5E4 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C037B6C8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 EnableUserkTraceLogging()
{
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C032A3F8);
  TlgRegisterAggregateProviderEx();
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C032FB30);
}
