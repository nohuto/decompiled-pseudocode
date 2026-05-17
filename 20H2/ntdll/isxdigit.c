/*
 * XREFs of isxdigit @ 0x18008CC40
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x180077C80 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x180077D10 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x18007CD10 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x18007CDB0 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1800FC110 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl isxdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_180166150[v1] & 0x80;
}
