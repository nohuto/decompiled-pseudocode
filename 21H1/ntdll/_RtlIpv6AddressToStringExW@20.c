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
  size_t v11; // [esp-Ch] [ebp-A8h]
  size_t v12; // [esp-Ch] [ebp-A8h]
  size_t v13; // [esp-4h] [ebp-A0h]
  WCHAR S; // [esp+14h] [ebp-88h] BYREF
  char v15; // [esp+16h] [ebp-86h] BYREF
  _BYTE v16[2]; // [esp+96h] [ebp-6h] BYREF

  if ( !Address || !AddressStringLength || !AddressString && *AddressStringLength )
    return -1073741811;
  p_S = &S;
  if ( Port )
  {
    S = 91;
    p_S = (WCHAR *)&v15;
  }
  v6 = (wchar_t *)RtlIpv6AddressToStringW(Address, p_S);
  if ( ScopeId )
  {
    HIDWORD(v11) = L"%%%u";
    LODWORD(v11) = (v16 - (_BYTE *)v6) >> 1;
    v6 += swprintf_s(v6, v11, (const wchar_t *const)ScopeId);
  }
  if ( Port )
  {
    LOBYTE(v7) = HIBYTE(Port);
    HIBYTE(v7) = Port;
    HIDWORD(v12) = L"]:%u";
    LODWORD(v12) = (v16 - (_BYTE *)v6) >> 1;
    v6 += swprintf_s(v6, v12, (const wchar_t *const)v7);
  }
  v8 = *AddressStringLength;
  v9 = (((char *)v6 - (char *)&S) >> 1) + 1;
  *AddressStringLength = v9;
  if ( v8 < v9 )
    return -1073741811;
  LODWORD(v13) = 2 * v9;
  memcpy(AddressString, &S, v13);
  return 0;
}
