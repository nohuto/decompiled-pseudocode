/*
 * XREFs of __isascii @ 0x1403CE270
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x14038DA30 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x140586630 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x140586770 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x140586950 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x140586D70 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
