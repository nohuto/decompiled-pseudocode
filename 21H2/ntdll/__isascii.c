/*
 * XREFs of __isascii @ 0x18008CFB0
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x180078CB0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x180078D40 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x18007D6B0 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x18007D750 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1800FBF70 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
