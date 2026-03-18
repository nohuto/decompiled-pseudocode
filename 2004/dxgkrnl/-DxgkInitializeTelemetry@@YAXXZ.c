/*
 * XREFs of ?DxgkInitializeTelemetry@@YAXXZ @ 0x1C00234C0
 * Callers:
 *     DriverEntry @ 0x1C0306D00 (DriverEntry.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1C0192D78 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C0192EB4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

void DxgkInitializeTelemetry(void)
{
  TlgRegisterAggregateProviderEx(&dword_1C00B0A90);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00B0A58);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00B0A20);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00B0B00);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00B0AC8);
  TlgRegisterAggregateProviderEx(&dword_1C00B09E8);
}
