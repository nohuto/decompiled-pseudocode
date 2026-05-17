/*
 * XREFs of swprintf_s @ 0x180097A60
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x1800658A0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x1800659E0 (RtlIpv6AddressToStringW.c)
 *     RtlStringFromGUIDEx @ 0x180069A70 (RtlStringFromGUIDEx.c)
 *     RtlIpv4AddressToStringExW @ 0x18007B100 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x18007B1D0 (RtlIpv4AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x1800FBB90 (RtlEthernetAddressToStringW.c)
 * Callees:
 *     vswprintf_s @ 0x180097A90 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Buffer, BufferCount, Format, ArgList);
}
