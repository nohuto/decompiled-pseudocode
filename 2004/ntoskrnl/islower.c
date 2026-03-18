/*
 * XREFs of islower @ 0x1403CF100
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x14038E5A0 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x140586D60 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x140586EA0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x1405874A0 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl islower(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_140C00150[v1] & 2;
}
