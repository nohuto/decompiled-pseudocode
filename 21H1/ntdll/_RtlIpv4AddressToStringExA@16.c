/*
 * XREFs of _RtlIpv4AddressToStringExA@16 @ 0x4B361A10
 * Callers:
 *     <none>
 * Callees:
 *     _RtlIpv4AddressToStringA@8 @ 0x4B2F2200 (_RtlIpv4AddressToStringA@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _sprintf_s @ 0x4B2FFF60 (_sprintf_s.c)
 */

LONG __stdcall RtlIpv4AddressToStringExA(
        const struct in_addr *Address,
        USHORT Port,
        PSTR AddressString,
        PULONG AddressStringLength)
{
  char *v4; // esi
  unsigned __int16 v5; // cx
  ULONG v6; // esi
  size_t v8; // [esp-Ch] [ebp-38h]
  size_t v9; // [esp-4h] [ebp-30h]
  CHAR S[22]; // [esp+10h] [ebp-1Ch] BYREF
  _BYTE v11[2]; // [esp+26h] [ebp-6h] BYREF

  if ( !Address || !AddressStringLength || !AddressString && *AddressStringLength )
    return -1073741811;
  v4 = RtlIpv4AddressToStringA(Address, S);
  if ( Port )
  {
    LOBYTE(v5) = HIBYTE(Port);
    HIBYTE(v5) = Port;
    HIDWORD(v8) = ":%u";
    LODWORD(v8) = v11 - v4;
    v4 += sprintf_s(v4, v8, (const char *const)v5);
  }
  v6 = v4 - S + 1;
  if ( *AddressStringLength < v6 )
  {
    *AddressStringLength = v6;
    return -1073741811;
  }
  LODWORD(v9) = v6;
  memcpy(AddressString, S, v9);
  *AddressStringLength = v6;
  return 0;
}
