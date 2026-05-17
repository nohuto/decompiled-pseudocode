/*
 * XREFs of RtlCanonicalizeDomainName @ 0x18000CF10
 * Callers:
 *     RtlEqualDomainName @ 0x18000CE90 (RtlEqualDomainName.c)
 * Callees:
 *     RtlIdnToUnicode @ 0x18000C6F0 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x18000D0E4 (RtlpNameprepAsciiWorker.c)
 *     RtlIpv4StringToAddressExW @ 0x18000D5D0 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv6StringToAddressExW @ 0x18000D950 (RtlIpv6StringToAddressExW.c)
 *     RtlCopyUnicodeString @ 0x1800102F0 (RtlCopyUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x180038AF0 (RtlCreateUnicodeString.c)
 *     RtlIpv6AddressToStringExW @ 0x1800658A0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv4AddressToStringExW @ 0x18007B100 (RtlIpv4AddressToStringExW.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18008C3E0 (__report_rangecheckfailure.c)
 *     towlower @ 0x180091CB0 (towlower.c)
 */

int __fastcall RtlCanonicalizeDomainName(__int64 a1, unsigned __int16 *a2, BOOLEAN a3)
{
  int result; // eax
  unsigned int v7; // edi
  wint_t *v8; // rbx
  __int64 v9; // rsi
  USHORT Port[2]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG AddressStringLength; // [rsp+34h] [rbp-CCh] BYREF
  ULONG ScopeId; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  PCWSTR AddressString; // [rsp+48h] [rbp-B8h]
  in6_addr Address; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR v17[256]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v18[512]; // [rsp+260h] [rbp+160h] BYREF
  char v19; // [rsp+460h] [rbp+360h] BYREF

  AddressStringLength = 256;
  v13 = 256;
  AddressString = (PCWSTR)&v19;
  v14 = 33554942LL;
  RtlCopyUnicodeString(&v14);
  if ( (_WORD)v14 == WORD1(v14) )
    return -1073740010;
  if ( RtlIpv6StringToAddressExW(AddressString, &Address, &ScopeId, Port) >= 0 && !Port[0] )
  {
    if ( Address.u.Word[0]
      || __PAIR32__(Address.u.Word[1], 0) != Address.u.Word[2]
      || __PAIR32__(Address.u.Word[3], 0) != Address.u.Word[4]
      || Address.u.Word[5] != 0xFFFF
      || ScopeId )
    {
      result = RtlIpv6AddressToStringExW(&Address, ScopeId, 0, v17, &AddressStringLength);
LABEL_26:
      if ( result < 0 )
        return result;
      goto LABEL_12;
    }
    ScopeId = *(_DWORD *)&Address.u.Word[6];
LABEL_25:
    result = RtlIpv4AddressToStringExW((const struct in_addr *)&ScopeId, 0, v17, &AddressStringLength);
    goto LABEL_26;
  }
  if ( RtlIpv4StringToAddressExW(AddressString, a3, (struct in_addr *)&ScopeId, Port) >= 0 && !Port[0] )
    goto LABEL_25;
  result = RtlpNameprepAsciiWorker(0, *((_QWORD *)a2 + 1), *a2 >> 1, (unsigned int)v18, (__int64)&v13, 1);
  if ( result >= 0 )
  {
    v7 = v13;
    if ( v13 )
    {
      v8 = (wint_t *)v18;
      v9 = v13;
      do
      {
        *v8 = towlower(*v8);
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    result = RtlIdnToUnicode(0, (__int64)v18, v7, (__int64)v17, (__int64)&AddressStringLength);
    if ( result >= 0 )
    {
      if ( AddressStringLength != 256 )
      {
        if ( 2 * (unsigned __int64)AddressStringLength >= 0x200 )
          _report_rangecheckfailure();
        v17[AddressStringLength] = 0;
LABEL_12:
        if ( (unsigned __int8)RtlCreateUnicodeString(a1, v17) )
          return 0;
        else
          return -1073741801;
      }
      return -1073740010;
    }
  }
  return result;
}
