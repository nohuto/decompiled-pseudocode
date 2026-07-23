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

LONG __fastcall RtlCanonicalizeDomainName(PUNICODE_STRING DestinationString, const UNICODE_STRING *a2, BOOLEAN a3)
{
  LONG result; // eax
  LONG v7; // edi
  WCHAR *v8; // rbx
  __int64 v9; // rsi
  USHORT Port[2]; // [rsp+30h] [rbp-D0h] BYREF
  LONG DestinationStringLength; // [rsp+34h] [rbp-CCh] BYREF
  ULONG ScopeId; // [rsp+38h] [rbp-C8h] BYREF
  LONG SourceStringLength; // [rsp+3Ch] [rbp-C4h] BYREF
  _UNICODE_STRING DestinationStringa; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v15[6]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v16; // [rsp+5Ch] [rbp-A4h]
  WCHAR AddressString[256]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR SourceString[256]; // [rsp+260h] [rbp+160h] BYREF
  char v19; // [rsp+460h] [rbp+360h] BYREF

  DestinationStringLength = 256;
  SourceStringLength = 256;
  DestinationStringa.Buffer = (wchar_t *)&v19;
  *(_QWORD *)&DestinationStringa.Length = 33554942LL;
  RtlCopyUnicodeString(&DestinationStringa, a2);
  if ( DestinationStringa.Length == DestinationStringa.MaximumLength )
    return -1073740010;
  if ( RtlIpv6StringToAddressExW(DestinationStringa.Buffer, (struct in6_addr *)v15, &ScopeId, Port) >= 0 && !Port[0] )
  {
    if ( v15[0] || v15[1] || v15[2] || v15[3] || v15[4] || v15[5] != 0xFFFF || ScopeId )
    {
      result = RtlIpv6AddressToStringExW(
                 (const struct in6_addr *)v15,
                 ScopeId,
                 0,
                 AddressString,
                 (PULONG)&DestinationStringLength);
LABEL_28:
      if ( result < 0 )
        return result;
      goto LABEL_12;
    }
    ScopeId = v16;
LABEL_27:
    result = RtlIpv4AddressToStringExW(
               (const struct in_addr *)&ScopeId,
               0,
               AddressString,
               (PULONG)&DestinationStringLength);
    goto LABEL_28;
  }
  if ( RtlIpv4StringToAddressExW(DestinationStringa.Buffer, a3, (struct in_addr *)&ScopeId, Port) >= 0 && !Port[0] )
    goto LABEL_27;
  result = RtlpNameprepAsciiWorker(
             0,
             a2->Buffer,
             a2->Length >> 1,
             (unsigned int)SourceString,
             (__int64)&SourceStringLength,
             1);
  if ( result >= 0 )
  {
    v7 = SourceStringLength;
    if ( SourceStringLength )
    {
      v8 = SourceString;
      v9 = (unsigned int)SourceStringLength;
      do
      {
        *v8 = towlower(*v8);
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    result = RtlIdnToUnicode(0, SourceString, v7, AddressString, &DestinationStringLength);
    if ( result >= 0 )
    {
      if ( DestinationStringLength != 256 )
      {
        if ( 2 * (unsigned __int64)(unsigned int)DestinationStringLength >= 0x200 )
          _report_rangecheckfailure();
        AddressString[DestinationStringLength] = 0;
LABEL_12:
        if ( RtlCreateUnicodeString(DestinationString, AddressString) )
          return 0;
        else
          return -1073741801;
      }
      return -1073740010;
    }
  }
  return result;
}
