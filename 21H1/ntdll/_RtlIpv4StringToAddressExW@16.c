/*
 * XREFs of _RtlIpv4StringToAddressExW@16 @ 0x4B2E89C0
 * Callers:
 *     _RtlCanonicalizeDomainName@12 @ 0x4B34D8C0 (_RtlCanonicalizeDomainName@12.c)
 * Callees:
 *     _RtlIpv4StringToAddressW@16 @ 0x4B2E8A10 (_RtlIpv4StringToAddressW@16.c)
 *     _iswctype @ 0x4B2F86F0 (_iswctype.c)
 */

LONG __stdcall RtlIpv4StringToAddressExW(PCWSTR AddressString, BOOLEAN Strict, struct in_addr *Address, PUSHORT Port)
{
  int v5; // eax
  LPCWSTR v6; // edi
  int v7; // ebx
  __int16 v8; // dx
  LPCWSTR v9; // ecx
  int v10; // eax
  int v11; // esi
  WCHAR v12; // cx
  int v13; // eax
  int v14; // eax
  USHORT v15; // ax
  WCHAR v16; // [esp+Ch] [ebp-8h]
  LPCWSTR Terminator; // [esp+10h] [ebp-4h] BYREF

  if ( !AddressString || !Address || !Port || RtlIpv4StringToAddressW(AddressString, Strict, &Terminator, Address) < 0 )
    return -1073741811;
  v5 = *(unsigned __int16 *)Terminator;
  if ( v5 == 58 )
  {
    v6 = Terminator + 1;
    v7 = 0;
    v8 = 10;
    Terminator = (LPCWSTR)10;
    if ( *v6 == 48 )
    {
      v9 = ++v6;
      v8 = 8;
      Terminator = (LPCWSTR)8;
      v10 = *(unsigned __int16 *)v6;
      if ( v10 == 120 || v10 == 88 )
      {
        v8 = 16;
        v6 = v9 + 1;
        Terminator = (LPCWSTR)16;
      }
    }
    v11 = *(unsigned __int16 *)v6;
    v12 = *v6;
    v16 = *v6;
    if ( (_WORD)v11 )
    {
      do
      {
        ++v6;
        if ( (unsigned __int16)v11 < 0x80u
          && (v13 = iswctype(v11, 4u), v8 = (__int16)Terminator, v13)
          && (unsigned __int16)(v11 - 48) < (unsigned __int16)Terminator )
        {
          if ( (unsigned __int16)v7 * (unsigned __int16)Terminator + (unsigned int)(unsigned __int16)v11 - 48 > 0xFFFF )
            return -1073741811;
          v7 = (unsigned __int16)(v11 + v7 * (_WORD)Terminator - 48);
        }
        else
        {
          if ( v8 != 16
            || (unsigned __int16)v11 >= 0x80u
            || !iswctype(v11, 0x80u)
            || 16 * (unsigned __int16)v7 - (iswctype(v11, 2u) != 0 ? 97 : 65) + (unsigned int)(unsigned __int16)v11 + 10 > 0xFFFF )
          {
            return -1073741811;
          }
          v14 = iswctype(v11, 2u);
          v8 = (__int16)Terminator;
          v7 = v11 - (v14 != 0 ? 97 : 65) + 16 * v7 + 10;
        }
        v11 = *(unsigned __int16 *)v6;
      }
      while ( (_WORD)v11 );
      v12 = v16;
    }
    if ( !v12 )
      return -1073741811;
  }
  else
  {
    if ( (_WORD)v5 )
      return -1073741811;
    LOWORD(v7) = 0;
  }
  LOBYTE(v15) = BYTE1(v7);
  HIBYTE(v15) = v7;
  *Port = v15;
  return 0;
}
