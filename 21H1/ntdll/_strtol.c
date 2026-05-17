/*
 * XREFs of _strtol @ 0x4B2FA3E0
 * Callers:
 *     _RtlIpv6StringToAddressA@12 @ 0x4B2EC2C0 (_RtlIpv6StringToAddressA@12.c)
 * Callees:
 *     strtoxlX @ 0x4B2FA1E6 (strtoxlX.c)
 */

int __cdecl strtol(const char *String, char **EndPtr, int Radix)
{
  return strtoxlX((int)&__initiallocalestructinfo, (unsigned __int8 *)String, (unsigned __int8 **)EndPtr, Radix, 0, 0);
}
