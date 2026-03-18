/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x14084F7E4
 * Callers:
 *     CmInitSystem2 @ 0x140B2359C (CmInitSystem2.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x140828004 (TlgRegisterAggregateProviderEx.c)
 */

__int64 CmpRegisterTraceLoggingProvider()
{
  return TlgRegisterAggregateProviderEx((char *)&dword_140C03868, 0LL, 0LL);
}
