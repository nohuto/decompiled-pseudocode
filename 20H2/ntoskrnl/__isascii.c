/*
 * XREFs of __isascii @ 0x1403D1D40
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x140390A90 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x14058A6C0 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x14058A800 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x14058A9E0 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x14058AE00 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
