/*
 * XREFs of ?DxgkInitializeTelemetry@@YAXXZ @ 0x1C002293C
 * Callers:
 *     DriverEntry @ 0x1C0302C24 (DriverEntry.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1C017FC7C (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C017FDB8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

void DxgkInitializeTelemetry(void)
{
  TlgRegisterAggregateProviderEx(&dword_1C00AEA90);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00AEA58);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00AEA20);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00AEB00);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00AEAC8);
  TlgRegisterAggregateProviderEx(&dword_1C00AE9E8);
}
