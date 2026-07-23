/*
 * XREFs of _RtlIpv4AddressToStringW@8 @ 0x4B361CA0
 * Callers:
 *     _RtlIpv4AddressToStringExW@16 @ 0x4B361BF0 (_RtlIpv4AddressToStringExW@16.c)
 * Callees:
 *     _swprintf_s @ 0x4B300420 (_swprintf_s.c)
 */

PWSTR __stdcall RtlIpv4AddressToStringW(const struct in_addr *Addr, PWSTR S)
{
  size_t v3; // [esp-18h] [ebp-1Ch]

  HIDWORD(v3) = L"%u.%u.%u.%u";
  LODWORD(v3) = 16;
  return &S[swprintf_s(
              (wchar_t *const)S,
              v3,
              (const wchar_t *const)*(unsigned __int8 *)Addr,
              *((unsigned __int8 *)Addr + 1),
              *((unsigned __int8 *)Addr + 2),
              *((unsigned __int8 *)Addr + 3))];
}
