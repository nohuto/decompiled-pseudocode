/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x14079E26C
 * Callers:
 *     CmInitSystem2 @ 0x140A4C3D4 (CmInitSystem2.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1407A4DEC (TlgRegisterAggregateProviderEx.c)
 */

__int64 CmpRegisterTraceLoggingProvider()
{
  return TlgRegisterAggregateProviderEx(&dword_140C02130);
}
