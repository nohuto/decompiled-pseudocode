/*
 * XREFs of _RtlIpv4AddressToStringW@8 @ 0x4B361CA0
 * Callers:
 *     _RtlIpv4AddressToStringExW@16 @ 0x4B361BF0 (_RtlIpv4AddressToStringExW@16.c)
 * Callees:
 *     _swprintf_s @ 0x4B300420 (_swprintf_s.c)
 */

PWSTR __stdcall RtlIpv4AddressToStringW(const struct in_addr *Addr, PWSTR S)
{
  return &S[swprintf_s(
              S,
              0x10u,
              L"%u.%u.%u.%u",
              Addr->S_un.S_un_b.s_b1,
              Addr->S_un.S_un_b.s_b2,
              Addr->S_un.S_un_b.s_b3,
              Addr->S_un.S_un_b.s_b4)];
}
