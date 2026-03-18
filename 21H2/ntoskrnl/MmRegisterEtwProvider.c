/*
 * XREFs of MmRegisterEtwProvider @ 0x140B01800
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x140828004 (TlgRegisterAggregateProviderEx.c)
 */

__int64 MmRegisterEtwProvider()
{
  __int64 result; // rax

  result = TlgRegisterAggregateProviderEx(byte_140C06738, (__int64)MiTracingEnabledCallback, 0LL);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)&qword_140C53448 = byte_140C06738;
    return 0LL;
  }
  return result;
}
