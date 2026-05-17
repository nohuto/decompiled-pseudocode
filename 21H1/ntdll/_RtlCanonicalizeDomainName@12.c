/*
 * XREFs of _RtlCanonicalizeDomainName@12 @ 0x4B34D8C0
 * Callers:
 *     _RtlEqualDomainName@8 @ 0x4B34DB90 (_RtlEqualDomainName@8.c)
 * Callees:
 *     _RtlCreateUnicodeString@8 @ 0x4B2D40C0 (_RtlCreateUnicodeString@8.c)
 *     _RtlCopyUnicodeString@8 @ 0x4B2D5EF0 (_RtlCopyUnicodeString@8.c)
 *     _RtlpNameprepAsciiWorker@24 @ 0x4B2E58F1 (_RtlpNameprepAsciiWorker@24.c)
 *     _RtlIpv6StringToAddressExW@16 @ 0x4B2E7FB0 (_RtlIpv6StringToAddressExW@16.c)
 *     _RtlIpv4StringToAddressExW@16 @ 0x4B2E89C0 (_RtlIpv4StringToAddressExW@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     ___report_rangecheckfailure @ 0x4B2F4C38 (___report_rangecheckfailure.c)
 *     _towlower @ 0x4B2FA5C0 (_towlower.c)
 *     _IN6_IS_ADDR_V4MAPPED@4 @ 0x4B34D88C (_IN6_IS_ADDR_V4MAPPED@4.c)
 *     _RtlIpv4AddressToStringExW@16 @ 0x4B361BF0 (_RtlIpv4AddressToStringExW@16.c)
 *     _RtlIpv6AddressToStringExW@20 @ 0x4B361CE0 (_RtlIpv6AddressToStringExW@20.c)
 *     _RtlIdnToUnicode@20 @ 0x4B365300 (_RtlIdnToUnicode@20.c)
 */

LONG __stdcall RtlCanonicalizeDomainName(int a1, unsigned __int16 *a2, BOOLEAN Strict)
{
  USHORT v3; // si
  LONG result; // eax
  unsigned int v5; // edi
  unsigned int i; // esi
  const IN6_ADDR *v7; // [esp+0h] [ebp-640h]
  ULONG ScopeId; // [esp+10h] [ebp-630h] BYREF
  ULONG AddressStringLength; // [esp+14h] [ebp-62Ch] BYREF
  USHORT Port[2]; // [esp+18h] [ebp-628h] BYREF
  int v11; // [esp+1Ch] [ebp-624h] BYREF
  PCWSTR AddressString; // [esp+20h] [ebp-620h]
  int v13; // [esp+24h] [ebp-61Ch] BYREF
  in6_addr Address; // [esp+28h] [ebp-618h] BYREF
  WCHAR Src[256]; // [esp+38h] [ebp-608h] BYREF
  _WORD v16[256]; // [esp+238h] [ebp-408h] BYREF
  char v17; // [esp+438h] [ebp-208h] BYREF

  AddressStringLength = 256;
  v13 = 256;
  AddressString = (PCWSTR)&v17;
  v11 = 33554942;
  RtlCopyUnicodeString((unsigned __int16 *)&v11, a2);
  if ( (_WORD)v11 == HIWORD(v11) )
    return -1073740010;
  if ( RtlIpv6StringToAddressExW(AddressString, &Address, &ScopeId, Port) >= 0 )
  {
    v3 = Port[0];
    if ( !Port[0] )
    {
      if ( !IN6_IS_ADDR_V4MAPPED(v7) || ScopeId )
      {
        result = RtlIpv6AddressToStringExW(&Address, ScopeId, 0, Src, &AddressStringLength);
        goto LABEL_8;
      }
      ScopeId = *(_DWORD *)&Address.u.Word[6];
LABEL_12:
      result = RtlIpv4AddressToStringExW((const struct in_addr *)&ScopeId, v3, Src, &AddressStringLength);
LABEL_8:
      if ( result < 0 )
        return result;
      goto LABEL_21;
    }
  }
  if ( RtlIpv4StringToAddressExW(AddressString, Strict, (struct in_addr *)&ScopeId, Port) >= 0 )
  {
    v3 = Port[0];
    if ( !Port[0] )
      goto LABEL_12;
  }
  result = RtlpNameprepAsciiWorker(*a2 >> 1, v16, (int)&v13, 1);
  if ( result >= 0 )
  {
    v5 = v13;
    for ( i = 0; i < v5; ++i )
      v16[i] = towlower(v16[i]);
    result = RtlIdnToUnicode(0, v16, v5, Src, &AddressStringLength);
    if ( result >= 0 )
    {
      if ( AddressStringLength != 256 )
      {
        if ( 2 * AddressStringLength >= 0x200 )
          __report_rangecheckfailure();
        Src[AddressStringLength] = 0;
LABEL_21:
        if ( RtlCreateUnicodeString(a1, Src) )
          return 0;
        else
          return -1073741801;
      }
      return -1073740010;
    }
  }
  return result;
}
