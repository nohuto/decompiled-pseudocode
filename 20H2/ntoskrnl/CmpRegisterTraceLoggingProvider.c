/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x140794260
 * Callers:
 *     CmInitSystem2 @ 0x140A48A08 (CmInitSystem2.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x14079A6CC (TlgRegisterAggregateProviderEx.c)
 */

__int64 CmpRegisterTraceLoggingProvider()
{
  return TlgRegisterAggregateProviderEx(&dword_140C02130);
}
