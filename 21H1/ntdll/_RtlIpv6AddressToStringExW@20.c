/*
 * XREFs of _RtlIpv6AddressToStringExW@20 @ 0x4B361CE0
 * Callers:
 *     _RtlCanonicalizeDomainName@12 @ 0x4B34D8C0 (_RtlCanonicalizeDomainName@12.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _swprintf_s @ 0x4B300420 (_swprintf_s.c)
 *     _RtlIpv6AddressToStringW@8 @ 0x4B361DF0 (_RtlIpv6AddressToStringW@8.c)
 */

LONG __stdcall RtlIpv6AddressToStringExW(
        const struct in6_addr *Address,
        ULONG ScopeId,
        USHORT Port,
        PWSTR AddressString,
        PULONG AddressStringLength)
{
  WCHAR *p_S; // eax
  wchar_t *v6; // esi
  unsigned __int16 v7; // ax
  ULONG v8; // eax
  ULONG v9; // esi
  WCHAR S; // [esp+14h] [ebp-88h] BYREF
  char v12; // [esp+16h] [ebp-86h] BYREF
  _BYTE v13[2]; // [esp+96h] [ebp-6h] BYREF

  if ( !Address || !AddressStringLength || !AddressString && *AddressStringLength )
    return -1073741811;
  p_S = &S;
  if ( Port )
  {
    S = 91;
    p_S = (WCHAR *)&v12;
  }
  v6 = RtlIpv6AddressToStringW(Address, p_S);
  if ( ScopeId )
    v6 += swprintf_s(v6, (v13 - (_BYTE *)v6) >> 1, L"%%%u", ScopeId);
  if ( Port )
  {
    LOBYTE(v7) = HIBYTE(Port);
    HIBYTE(v7) = Port;
    v6 += swprintf_s(v6, (v13 - (_BYTE *)v6) >> 1, L"]:%u", v7);
  }
  v8 = *AddressStringLength;
  v9 = v6 - &S + 1;
  *AddressStringLength = v9;
  if ( v8 < v9 )
    return -1073741811;
  memcpy(AddressString, &S, 2 * v9);
  return 0;
}
