/*
 * XREFs of _RtlIpv4AddressToStringA@8 @ 0x4B2F2200
 * Callers:
 *     _RtlIpv4AddressToStringExA@16 @ 0x4B361A10 (_RtlIpv4AddressToStringExA@16.c)
 * Callees:
 *     _sprintf_s @ 0x4B2FFF60 (_sprintf_s.c)
 */

PSTR __stdcall RtlIpv4AddressToStringA(const struct in_addr *Addr, PSTR S)
{
  return &S[sprintf_s(
              S,
              0x10u,
              "%u.%u.%u.%u",
              Addr->S_un.S_un_b.s_b1,
              Addr->S_un.S_un_b.s_b2,
              Addr->S_un.S_un_b.s_b3,
              Addr->S_un.S_un_b.s_b4)];
}
