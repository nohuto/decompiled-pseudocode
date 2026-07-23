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

LONG __stdcall RtlCanonicalizeDomainName(_UNICODE_STRING *a1, const UNICODE_STRING *SourceString, BOOLEAN Strict)
{
  USHORT v3; // si
  LONG result; // eax
  unsigned __int32 v5; // edi
  unsigned __int32 i; // esi
  const IN6_ADDR *v7; // [esp+0h] [ebp-640h]
  ULONG ScopeId; // [esp+10h] [ebp-630h] BYREF
  ULONG AddressStringLength; // [esp+14h] [ebp-62Ch] BYREF
  USHORT Port[2]; // [esp+18h] [ebp-628h] BYREF
  _UNICODE_STRING DestinationString; // [esp+1Ch] [ebp-624h] BYREF
  LONG SourceStringLength; // [esp+24h] [ebp-61Ch] BYREF
  _BYTE v13[12]; // [esp+28h] [ebp-618h] BYREF
  ULONG v14; // [esp+34h] [ebp-60Ch]
  WCHAR AddressString[256]; // [esp+38h] [ebp-608h] BYREF
  WCHAR v16[256]; // [esp+238h] [ebp-408h] BYREF
  char v17; // [esp+438h] [ebp-208h] BYREF

  AddressStringLength = 256;
  SourceStringLength = 256;
  DestinationString.Buffer = (wchar_t *)&v17;
  *(_DWORD *)&DestinationString.Length = 33554942;
  RtlCopyUnicodeString(&DestinationString, SourceString);
  if ( DestinationString.Length == DestinationString.MaximumLength )
    return -1073740010;
  if ( RtlIpv6StringToAddressExW((PCWSTR)DestinationString.Buffer, (struct in6_addr *)v13, &ScopeId, Port) >= 0 )
  {
    v3 = Port[0];
    if ( !Port[0] )
    {
      if ( !IN6_IS_ADDR_V4MAPPED(v7) || ScopeId )
      {
        result = RtlIpv6AddressToStringExW(
                   (const struct in6_addr *)v13,
                   ScopeId,
                   0,
                   AddressString,
                   &AddressStringLength);
        goto LABEL_8;
      }
      ScopeId = v14;
LABEL_12:
      result = RtlIpv4AddressToStringExW((const struct in_addr *)&ScopeId, v3, AddressString, &AddressStringLength);
LABEL_8:
      if ( result < 0 )
        return result;
      goto LABEL_21;
    }
  }
  if ( RtlIpv4StringToAddressExW((PCWSTR)DestinationString.Buffer, Strict, (struct in_addr *)&ScopeId, Port) >= 0 )
  {
    v3 = Port[0];
    if ( !Port[0] )
      goto LABEL_12;
  }
  result = RtlpNameprepAsciiWorker(SourceString->Length >> 1, v16, (int)&SourceStringLength, 1);
  if ( result >= 0 )
  {
    v5 = SourceStringLength;
    for ( i = 0; i < v5; ++i )
      v16[i] = towlower(v16[i]);
    result = RtlIdnToUnicode(0, v16, v5, AddressString, (PLONG)&AddressStringLength);
    if ( result >= 0 )
    {
      if ( AddressStringLength != 256 )
      {
        if ( 2 * AddressStringLength >= 0x200 )
          __report_rangecheckfailure();
        AddressString[AddressStringLength] = 0;
LABEL_21:
        if ( RtlCreateUnicodeString(a1, AddressString) )
          return 0;
        else
          return -1073741801;
      }
      return -1073740010;
    }
  }
  return result;
}
