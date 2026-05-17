/*
 * XREFs of _sprintf_s @ 0x4B2FFF60
 * Callers:
 *     _LdrpLogDelayLoadTrigger@16 @ 0x4B2C02B9 (_LdrpLogDelayLoadTrigger@16.c)
 *     _RtlIpv4AddressToStringA@8 @ 0x4B2F2200 (_RtlIpv4AddressToStringA@8.c)
 *     _RtlIpv6AddressToStringA@8 @ 0x4B2F2780 (_RtlIpv6AddressToStringA@8.c)
 *     _RtlEthernetAddressToStringA@8 @ 0x4B3619C0 (_RtlEthernetAddressToStringA@8.c)
 *     _RtlIpv4AddressToStringExA@16 @ 0x4B361A10 (_RtlIpv4AddressToStringExA@16.c)
 *     _RtlIpv6AddressToStringExA@20 @ 0x4B361AC0 (_RtlIpv6AddressToStringExA@20.c)
 * Callees:
 *     _vsprintf_s @ 0x4B2FFF90 (_vsprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list ArgList; // [esp+14h] [ebp+14h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(Buffer, BufferCount, Format, ArgList);
}
