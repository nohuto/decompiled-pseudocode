/*
 * XREFs of PnpTraceInitialize @ 0x140A51640
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14077ACB4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     TlgRegisterAggregateProvider @ 0x14078DF70 (TlgRegisterAggregateProvider.c)
 */

__int64 PnpTraceInitialize()
{
  TlgRegisterAggregateProvider(&dword_140C02DC0);
  TlgRegisterAggregateProvider(&dword_140C02D88);
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_140C02D50, 0LL, 0LL);
}
