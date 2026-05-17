/*
 * XREFs of sprintf_s @ 0x1800975E0
 * Callers:
 *     LdrpLogDelayLoadTrigger @ 0x1800165B0 (LdrpLogDelayLoadTrigger.c)
 *     RtlIpv6AddressToStringExA @ 0x180077600 (RtlIpv6AddressToStringExA.c)
 *     RtlIpv6AddressToStringA @ 0x1800776F0 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x18007D810 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv4AddressToStringA @ 0x18007D8B0 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x1800FC030 (RtlEthernetAddressToStringA.c)
 * Callees:
 *     vsprintf_s @ 0x180097610 (vsprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(Buffer, BufferCount, Format, ArgList);
}
