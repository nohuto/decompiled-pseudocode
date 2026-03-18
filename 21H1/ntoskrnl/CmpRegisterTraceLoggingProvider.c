/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x1407BE5D4
 * Callers:
 *     CmInitSystem2 @ 0x140A6FC5C (CmInitSystem2.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x14078C0BC (TlgRegisterAggregateProviderEx.c)
 */

__int64 CmpRegisterTraceLoggingProvider()
{
  return TlgRegisterAggregateProviderEx((ULONGLONG *)&dword_140C02130, 0LL, 0LL);
}
