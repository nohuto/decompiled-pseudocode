/*
 * XREFs of _RtlIpv4AddressToStringA@8 @ 0x4B2F2200
 * Callers:
 *     _RtlIpv4AddressToStringExA@16 @ 0x4B361A10 (_RtlIpv4AddressToStringExA@16.c)
 * Callees:
 *     _sprintf_s @ 0x4B2FFF60 (_sprintf_s.c)
 */

PSTR __stdcall RtlIpv4AddressToStringA(const struct in_addr *Addr, PSTR S)
{
  size_t v3; // [esp-18h] [ebp-18h]

  HIDWORD(v3) = "%u.%u.%u.%u";
  LODWORD(v3) = 16;
  return &S[sprintf_s(
              S,
              v3,
              (const char *const)*(unsigned __int8 *)Addr,
              *((unsigned __int8 *)Addr + 1),
              *((unsigned __int8 *)Addr + 2),
              *((unsigned __int8 *)Addr + 3))];
}
