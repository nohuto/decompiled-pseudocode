/*
 * XREFs of swprintf_s @ 0x180098160
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x180066EA0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x180066FE0 (RtlIpv6AddressToStringW.c)
 *     RtlStringFromGUIDEx @ 0x18006B070 (RtlStringFromGUIDEx.c)
 *     RtlIpv4AddressToStringExW @ 0x18007C230 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x18007C300 (RtlIpv4AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x1800FBF00 (RtlEthernetAddressToStringW.c)
 * Callees:
 *     vswprintf_s @ 0x180098190 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Buffer, BufferCount, Format, ArgList);
}
