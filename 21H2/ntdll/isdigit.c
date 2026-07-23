/*
 * XREFs of isdigit @ 0x18008D0F0
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x180078CB0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x180078D40 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x18007D6B0 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x18007D750 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1800FBF70 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl isdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_180166150[v1] & 4;
}
