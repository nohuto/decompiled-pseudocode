/*
 * XREFs of __isascii @ 0x1403CF0B0
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x14038E5A0 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x140586D60 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x140586EA0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x140587080 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1405874A0 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
