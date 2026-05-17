/*
 * XREFs of __isascii @ 0x18008C8B0
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x180077B80 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x180077C10 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x18007CC10 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x18007CCB0 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1800FBC00 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
