/*
 * XREFs of _RtlIpv4AddressToStringExW@16 @ 0x4B361BF0
 * Callers:
 *     _RtlCanonicalizeDomainName@12 @ 0x4B34D8C0 (_RtlCanonicalizeDomainName@12.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _swprintf_s @ 0x4B300420 (_swprintf_s.c)
 *     _RtlIpv4AddressToStringW@8 @ 0x4B361CA0 (_RtlIpv4AddressToStringW@8.c)
 */

LONG __stdcall RtlIpv4AddressToStringExW(
        const struct in_addr *Address,
        USHORT Port,
        PWSTR AddressString,
        PULONG AddressStringLength)
{
  wchar_t *v4; // esi
  unsigned __int16 v5; // cx
  ULONG v6; // esi
  size_t v8; // [esp-Ch] [ebp-4Ch]
  size_t v9; // [esp-4h] [ebp-44h]
  WCHAR S[22]; // [esp+10h] [ebp-30h] BYREF
  int v11; // [esp+3Ch] [ebp-4h] BYREF

  if ( !Address || !AddressStringLength || !AddressString && *AddressStringLength )
    return -1073741811;
  v4 = (wchar_t *)RtlIpv4AddressToStringW(Address, S);
  if ( Port )
  {
    LOBYTE(v5) = HIBYTE(Port);
    HIBYTE(v5) = Port;
    HIDWORD(v8) = L":%u";
    LODWORD(v8) = ((char *)&v11 - (char *)v4) >> 1;
    v4 += swprintf_s(v4, v8, (const wchar_t *const)v5);
  }
  v6 = (((char *)v4 - (char *)S) >> 1) + 1;
  if ( *AddressStringLength < v6 )
  {
    *AddressStringLength = v6;
    return -1073741811;
  }
  LODWORD(v9) = 2 * v6;
  memcpy(AddressString, S, v9);
  *AddressStringLength = v6;
  return 0;
}
