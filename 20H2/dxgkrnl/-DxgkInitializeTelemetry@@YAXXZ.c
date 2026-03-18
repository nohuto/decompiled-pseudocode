/*
 * XREFs of ?DxgkInitializeTelemetry@@YAXXZ @ 0x1C0023520
 * Callers:
 *     DriverEntry @ 0x1C0305D00 (DriverEntry.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1C0191BC8 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C0191D04 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

void DxgkInitializeTelemetry(void)
{
  TlgRegisterAggregateProviderEx(&dword_1C00AFA90);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00AFA58);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00AFA20);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00AFB00);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00AFAC8);
  TlgRegisterAggregateProviderEx(&dword_1C00AF9E8);
}
