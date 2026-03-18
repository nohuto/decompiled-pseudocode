/*
 * XREFs of ?DxgkInitializeTelemetry@@YAXXZ @ 0x1C0025EFC
 * Callers:
 *     DriverEntry @ 0x1C03C7238 (DriverEntry.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1C01F4AB0 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C01F4BEC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

void DxgkInitializeTelemetry(void)
{
  TlgRegisterAggregateProviderEx(&dword_1C012F918);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C012F9C0);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C012F8E0);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C012F988);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C012F950);
  TlgRegisterAggregateProviderEx(&dword_1C012F8A8);
}
