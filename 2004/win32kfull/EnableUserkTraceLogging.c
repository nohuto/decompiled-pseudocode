/*
 * XREFs of EnableUserkTraceLogging @ 0x1C0122DE0
 * Callers:
 *     <none>
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1C037C5E4 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C037C6C8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 EnableUserkTraceLogging()
{
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C032B3F8);
  TlgRegisterAggregateProviderEx();
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0330B30);
}
