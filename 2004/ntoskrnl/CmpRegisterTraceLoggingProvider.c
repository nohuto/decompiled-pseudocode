/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x140786550
 * Callers:
 *     CmInitSystem2 @ 0x140A42768 (CmInitSystem2.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x14078DF8C (TlgRegisterAggregateProviderEx.c)
 */

__int64 CmpRegisterTraceLoggingProvider()
{
  return TlgRegisterAggregateProviderEx(&dword_140C02130);
}
