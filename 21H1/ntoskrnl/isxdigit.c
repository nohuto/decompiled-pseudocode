/*
 * XREFs of isxdigit @ 0x1403CE380
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x14038DA30 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x140586630 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x140586770 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x140586950 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x140586D70 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl isxdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_140C00150[v1] & 0x80;
}
