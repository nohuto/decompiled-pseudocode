/*
 * XREFs of _RtlIpv6AddressToStringExA@20 @ 0x4B361AC0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlIpv6AddressToStringA@8 @ 0x4B2F2780 (_RtlIpv6AddressToStringA@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _sprintf_s @ 0x4B2FFF60 (_sprintf_s.c)
 */

LONG __stdcall RtlIpv6AddressToStringExA(
        const struct in6_addr *Address,
        ULONG ScopeId,
        USHORT Port,
        PSTR AddressString,
        PULONG AddressStringLength)
{
  CHAR *p_S; // eax
  char *v6; // esi
  unsigned __int16 v7; // ax
  ULONG v8; // eax
  ULONG v9; // esi
  CHAR S; // [esp+14h] [ebp-48h] BYREF
  char v12; // [esp+15h] [ebp-47h] BYREF
  _BYTE v13[3]; // [esp+55h] [ebp-7h] BYREF

  if ( !Address || !AddressStringLength || !AddressString && *AddressStringLength )
    return -1073741811;
  p_S = &S;
  if ( Port )
  {
    S = 91;
    p_S = &v12;
  }
  v6 = RtlIpv6AddressToStringA(Address, p_S);
  if ( ScopeId )
    v6 += sprintf_s(v6, v13 - v6, "%%%u", ScopeId);
  if ( Port )
  {
    LOBYTE(v7) = HIBYTE(Port);
    HIBYTE(v7) = Port;
    v6 += sprintf_s(v6, v13 - v6, "]:%u", v7);
  }
  v8 = *AddressStringLength;
  v9 = v6 - &S + 1;
  *AddressStringLength = v9;
  if ( v8 < v9 )
    return -1073741811;
  memcpy(AddressString, &S, v9);
  return 0;
}
