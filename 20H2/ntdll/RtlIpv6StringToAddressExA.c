/*
 * XREFs of RtlIpv6StringToAddressExA @ 0x18007CD10
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv6StringToAddressA @ 0x18007CDB0 (RtlIpv6StringToAddressA.c)
 *     __isascii @ 0x18008C9B0 (__isascii.c)
 *     isdigit @ 0x18008CAF0 (isdigit.c)
 *     islower @ 0x18008CB50 (islower.c)
 *     isxdigit @ 0x18008CC40 (isxdigit.c)
 */

LONG __stdcall RtlIpv6StringToAddressExA(PCSTR AddressString, struct in6_addr *Address, PULONG ScopeId, PUSHORT Port)
{
  CHAR v7; // r14
  bool v8; // zf
  const CHAR *v9; // rcx
  unsigned __int16 v10; // si
  ULONG v11; // r15d
  LONG result; // eax
  PCSTR v13; // rbx
  int v14; // edi
  bool v15; // dl
  unsigned __int16 v16; // r14
  PCSTR v17; // rcx
  char v18; // al
  CHAR v19; // bp
  __int16 v20; // ax
  __int16 v21; // si
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  __int16 v25; // cx
  PCSTR v26; // [rsp+20h] [rbp-38h] BYREF
  bool v27; // [rsp+60h] [rbp+8h]

  if ( !AddressString || !Address || !ScopeId || !Port )
    return -1073741811;
  v7 = *AddressString;
  v8 = *AddressString == 91;
  v9 = AddressString + 1;
  v10 = 0;
  if ( !v8 )
    v9 = AddressString;
  v11 = 0;
  v27 = v8;
  if ( RtlIpv6StringToAddressA(v9, &v26, Address) < 0 )
    return -1073741811;
  v13 = v26;
  if ( *v26 == 37 )
  {
    v13 = v26 + 1;
    v14 = v26[1];
    if ( !_isascii(v14) || !isdigit(v14) )
      return -1073741811;
    while ( (_BYTE)v14 && (_BYTE)v14 != 93 )
    {
      if ( !_isascii((char)v14) || !isdigit((char)v14) || (char)v14 + 2 * (5 * (unsigned __int64)v11 - 24) > 0xFFFFFFFF )
        return -1073741811;
      v11 = (char)v14 + 10 * v11 - 48;
      LOBYTE(v14) = *++v13;
    }
  }
  if ( *v13 == 93 )
  {
    if ( v7 != 91 )
      return -1073741811;
    ++v13;
    v15 = 0;
    v27 = 0;
    if ( *v13 == 58 )
    {
      ++v13;
      v16 = 10;
      if ( *v13 == 48 )
      {
        v17 = v13 + 1;
        v16 = 8;
        v18 = *++v13 - 88;
        if ( (v18 & 0xDF) == 0 )
        {
          v16 = 16;
          v13 = v17 + 1;
        }
      }
      v19 = *v13;
      if ( *v13 )
      {
        while ( 1 )
        {
          if ( _isascii(v19) && isdigit(v19) && v19 - 48 < v16 )
          {
            if ( v19 + v16 * (unsigned int)v10 - 48 > 0xFFFF )
              return -1073741811;
            v20 = v19;
            v21 = v10 * v16 - 48;
          }
          else
          {
            if ( v16 != 16 || !_isascii(v19) || !isxdigit(v19) )
              return -1073741811;
            if ( !_isascii(v19) || (v22 = islower(v19), v23 = 97, !v22) )
              v23 = 65;
            if ( v19 + 16 * (unsigned int)v10 - v23 + 10 > 0xFFFF )
              return -1073741811;
            v21 = 16 * v10;
            if ( !_isascii(v19) || (v24 = islower(v19), v25 = 97, !v24) )
              v25 = 65;
            v20 = v19 - v25 + 10;
          }
          ++v13;
          v10 = v20 + v21;
          v19 = *v13;
          if ( !*v13 )
            goto LABEL_42;
        }
      }
    }
  }
  else
  {
LABEL_42:
    v15 = v27;
  }
  if ( *v13 || v15 )
    return -1073741811;
  *Port = __ROR2__(v10, 8);
  result = 0;
  *ScopeId = v11;
  return result;
}
