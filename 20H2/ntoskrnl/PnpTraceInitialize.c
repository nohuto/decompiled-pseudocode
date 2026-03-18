/*
 * XREFs of PnpTraceInitialize @ 0x140A51CC0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1407892B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     TlgRegisterAggregateProvider @ 0x14079A6B0 (TlgRegisterAggregateProvider.c)
 */

__int64 PnpTraceInitialize()
{
  TlgRegisterAggregateProvider(&dword_140C02DC0);
  TlgRegisterAggregateProvider(&dword_140C02D88);
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_140C02D50, 0LL, 0LL);
}
