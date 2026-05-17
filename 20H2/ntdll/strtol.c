/*
 * XREFs of strtol @ 0x1800917C0
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x18007CDB0 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     strtoxlX @ 0x18009159C (strtoxlX.c)
 */

int __cdecl strtol(const char *String, char **EndPtr, int Radix)
{
  return strtoxlX(
           (__int64)&_initiallocalestructinfo,
           (unsigned __int8 *)String,
           (unsigned __int8 **)EndPtr,
           Radix,
           0,
           0);
}
