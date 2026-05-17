/*
 * XREFs of islower @ 0x18008CA50
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x180077B80 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x180077C10 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x18007CC10 (RtlIpv6StringToAddressExA.c)
 *     RtlEthernetStringToAddressA @ 0x1800FBC00 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl islower(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_180164150[v1] & 2;
}
