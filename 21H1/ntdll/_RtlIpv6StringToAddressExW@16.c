/*
 * XREFs of _RtlIpv6StringToAddressExW@16 @ 0x4B2E7FB0
 * Callers:
 *     _RtlCanonicalizeDomainName@12 @ 0x4B34D8C0 (_RtlCanonicalizeDomainName@12.c)
 * Callees:
 *     _RtlIpv6StringToAddressW@12 @ 0x4B2E8020 (_RtlIpv6StringToAddressW@12.c)
 *     _iswctype @ 0x4B2F86F0 (_iswctype.c)
 */

LONG __stdcall RtlIpv6StringToAddressExW(PCWSTR AddressString, struct in6_addr *Address, PULONG ScopeId, PUSHORT Port)
{
  const WCHAR *v4; // ecx
  int v5; // ebx
  WCHAR v6; // di
  PCWSTR v8; // esi
  wint_t v9; // di
  bool v10; // dl
  PCWSTR v11; // ecx
  __int16 v12; // dx
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // eax
  USHORT v17; // ax
  PCWSTR Terminator; // [esp+Ch] [ebp-14h] BYREF
  int v19; // [esp+10h] [ebp-10h]
  ULONG v20; // [esp+14h] [ebp-Ch]
  int v21; // [esp+18h] [ebp-8h]
  bool v22; // [esp+1Fh] [ebp-1h]

  v4 = AddressString;
  if ( !AddressString || !Address || !ScopeId || !Port )
    return -1073741811;
  v5 = 0;
  v20 = 0;
  v6 = *AddressString;
  v19 = *(unsigned __int16 *)AddressString;
  if ( v6 == 91 )
    v4 = AddressString + 1;
  v22 = v6 == 91;
  if ( RtlIpv6StringToAddressW(v4, &Terminator, Address) < 0 )
    return -1073741811;
  v8 = Terminator;
  v21 = 10;
  if ( *Terminator == 37 )
  {
    v8 = Terminator + 1;
    v9 = Terminator[1];
    if ( v9 >= 0x80u || !iswctype(v9, 4u) )
      return -1073741811;
    while ( 1 )
    {
      if ( !v9 )
      {
        v6 = v19;
        goto LABEL_20;
      }
      if ( v9 == 93 )
        break;
      if ( v9 >= 0x80u )
        return -1073741811;
      if ( !iswctype(v9, 4u) )
        return -1073741811;
      Terminator = (PCWSTR)v9;
      if ( (v9 + 10 * (unsigned __int64)v20 - 48) >> 32 )
        return -1073741811;
      ++v8;
      v20 = (ULONG)&Terminator[5 * v20 - 24];
      v9 = *v8;
    }
    v6 = v19;
  }
LABEL_20:
  if ( *v8 != 93 )
    goto LABEL_41;
  if ( v6 != 91 )
    return -1073741811;
  ++v8;
  v10 = 0;
  v22 = 0;
  if ( *v8 == 58 )
  {
    if ( *++v8 == 48 )
    {
      v11 = ++v8;
      v12 = 8;
      v21 = 8;
      v13 = *(unsigned __int16 *)v8;
      if ( v13 == 120 || v13 == 88 )
      {
        v12 = 16;
        v8 = v11 + 1;
        v21 = 16;
      }
    }
    else
    {
      v12 = 10;
    }
    while ( 1 )
    {
      v14 = *(unsigned __int16 *)v8;
      if ( !(_WORD)v14 )
        break;
      if ( (unsigned __int16)v14 < 0x80u
        && (v15 = iswctype(v14, 4u), v12 = v21, v15)
        && (Terminator = (PCWSTR)(unsigned __int16)v21, (unsigned __int16)v14 - 48 < (unsigned __int16)v21) )
      {
        if ( (unsigned __int16)v14 + (unsigned int)Terminator * (unsigned __int16)v5 - 48 > 0xFFFF )
          return -1073741811;
        v5 = (unsigned __int16)(v14 + v5 * v21 - 48);
      }
      else
      {
        if ( v12 != 16
          || (unsigned __int16)v14 >= 0x80u
          || !iswctype(v14, 0x80u)
          || 16 * (unsigned __int16)v5 - (iswctype(v14, 2u) != 0 ? 97 : 65) + (unsigned int)(unsigned __int16)v14 + 10 > 0xFFFF )
        {
          return -1073741811;
        }
        v16 = iswctype(v14, 2u);
        v12 = v21;
        v5 = v14 - (v16 != 0 ? 97 : 65) + 16 * v5 + 10;
      }
      ++v8;
    }
LABEL_41:
    v10 = v22;
  }
  if ( *v8 || v10 )
    return -1073741811;
  LOBYTE(v17) = BYTE1(v5);
  HIBYTE(v17) = v5;
  *Port = v17;
  *ScopeId = v20;
  return 0;
}
