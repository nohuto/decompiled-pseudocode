/*
 * XREFs of ?DxgkInitializeTelemetry@@YAXXZ @ 0x1C0023810
 * Callers:
 *     DriverEntry @ 0x1C0307D3C (DriverEntry.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1C0198878 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C01989B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

void DxgkInitializeTelemetry(void)
{
  TlgRegisterAggregateProviderEx(&dword_1C00B1A90);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00B1A58);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00B1A20);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00B1B00);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00B1AC8);
  TlgRegisterAggregateProviderEx(&dword_1C00B19E8);
}
