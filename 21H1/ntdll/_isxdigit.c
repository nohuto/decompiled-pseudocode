/*
 * XREFs of _isxdigit @ 0x4B2F62D0
 * Callers:
 *     _RtlIpv6StringToAddressExA@16 @ 0x4B2EC250 (_RtlIpv6StringToAddressExA@16.c)
 *     _RtlIpv6StringToAddressA@12 @ 0x4B2EC2C0 (_RtlIpv6StringToAddressA@12.c)
 *     _RtlIpv4StringToAddressExA@16 @ 0x4B2EC990 (_RtlIpv4StringToAddressExA@16.c)
 *     _RtlIpv4StringToAddressA@16 @ 0x4B2EC9E0 (_RtlIpv4StringToAddressA@16.c)
 *     _RtlEthernetStringToAddressA@12 @ 0x4B362010 (_RtlEthernetStringToAddressA@12.c)
 * Callees:
 *     <none>
 */

int __cdecl isxdigit(int C)
{
  int v1; // ecx

  v1 = -1;
  if ( C != -1 )
    v1 = (unsigned __int8)C;
  return off_4B3A3138[v1] & 0x80;
}
