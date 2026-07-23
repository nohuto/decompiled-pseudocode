/*
 * XREFs of _swprintf_s @ 0x4B300420
 * Callers:
 *     _RtlStringFromGUIDEx@12 @ 0x4B2ED180 (_RtlStringFromGUIDEx@12.c)
 *     _RtlEthernetAddressToStringW@8 @ 0x4B361BA0 (_RtlEthernetAddressToStringW@8.c)
 *     _RtlIpv4AddressToStringExW@16 @ 0x4B361BF0 (_RtlIpv4AddressToStringExW@16.c)
 *     _RtlIpv4AddressToStringW@8 @ 0x4B361CA0 (_RtlIpv4AddressToStringW@8.c)
 *     _RtlIpv6AddressToStringExW@20 @ 0x4B361CE0 (_RtlIpv6AddressToStringExW@20.c)
 *     _RtlIpv6AddressToStringW@8 @ 0x4B361DF0 (_RtlIpv6AddressToStringW@8.c)
 * Callees:
 *     _vswprintf_s @ 0x4B300450 (_vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list savedregs; // [esp+0h] [ebp+0h]

  return vswprintf_s(Buffer, BufferCount, (const wchar_t *const)&Format, savedregs);
}
