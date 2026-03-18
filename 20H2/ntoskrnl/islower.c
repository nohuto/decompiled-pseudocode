/*
 * XREFs of islower @ 0x1403D1D90
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x140390A90 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x14058A6C0 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x14058A800 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x14058AE00 (RtlIpv6StringToAddressExA.c)
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
