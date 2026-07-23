/*
 * XREFs of _RtlIpv6StringToAddressW@12 @ 0x4B2E8020
 * Callers:
 *     _RtlIpv6StringToAddressExW@16 @ 0x4B2E7FB0 (_RtlIpv6StringToAddressExW@16.c)
 * Callees:
 *     _iswctype @ 0x4B2F86F0 (_iswctype.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _wcstol @ 0x4B2FAC20 (_wcstol.c)
 */

LONG __stdcall RtlIpv6StringToAddressW(PCWSTR S, PCWSTR *Terminator, struct in6_addr *Addr)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // edx
  WCHAR v6; // si
  unsigned int v7; // edi
  int v8; // ebx
  int v10; // eax
  int v11; // eax
  struct in6_addr *v12; // esi
  int v13; // eax
  __int16 v14; // cx
  __int16 v15; // kr00_2
  unsigned int v16; // eax
  __int16 v17; // cx
  __int16 v18; // kr02_2
  struct in6_addr *v19; // ecx
  unsigned int v20; // eax
  char *v21; // esi
  size_t v22; // [esp-10h] [ebp-3Ch]
  size_t v23; // [esp-4h] [ebp-30h]
  wchar_t *String; // [esp+14h] [ebp-18h]
  int v25; // [esp+18h] [ebp-14h]
  wchar_t **EndPtr; // [esp+1Ch] [ebp-10h]
  unsigned int v27; // [esp+20h] [ebp-Ch]
  int v28; // [esp+24h] [ebp-8h]
  char v29; // [esp+2Bh] [ebp-1h]

  v3 = 0;
  String = 0;
  v4 = 0;
  v25 = 0;
  v5 = 0;
  v6 = *S;
  v7 = 0;
  v8 = 0;
  v28 = 0;
  v29 = 0;
  EndPtr = 0;
  v27 = 0;
  while ( *S )
  {
    if ( v3 )
    {
      v10 = v3 - 1;
      if ( !v10 )
      {
        if ( (unsigned __int16)v6 < 0x80u )
        {
          if ( iswctype(v6, 4u) )
          {
            v5 = ++v27;
            goto LABEL_55;
          }
          v11 = iswctype(v6, 0x80u);
          v5 = v27;
          v4 = (unsigned int)EndPtr;
          if ( v11 )
          {
            v5 = ++v27;
            if ( EndPtr )
              break;
            v29 = 1;
            goto LABEL_56;
          }
        }
        if ( v6 != 58 )
        {
          if ( v6 != 46 || v29 || v4 > 2 || v7 > 6 )
            break;
          ++v4;
          v3 = 0;
          EndPtr = (wchar_t **)v4;
          v28 = 0;
LABEL_24:
          v12 = Addr;
          goto LABEL_46;
        }
        if ( v4 || v7 > 6 )
          break;
        if ( S[1] == 58 )
        {
          if ( v8 )
            break;
          ++S;
          v8 = v7 + 1;
          v13 = 2;
          v28 = 2;
        }
        else
        {
          v28 = 0;
          v13 = 1;
        }
        v7 += v13;
LABEL_37:
        v3 = v28;
LABEL_21:
        if ( v3 == 1 )
          goto LABEL_22;
        goto LABEL_24;
      }
      if ( v10 != 1 )
        goto LABEL_37;
    }
    if ( v6 != 58 )
    {
      if ( v7 > 7 || (unsigned __int16)v6 >= 0x80u )
        break;
      if ( iswctype(v6, 4u) )
      {
        v4 = (unsigned int)EndPtr;
        String = (wchar_t *)S;
        v3 = 1;
        v29 = 0;
        v5 = 1;
        v28 = 1;
        v27 = 1;
        goto LABEL_22;
      }
      if ( !iswctype(v6, 0x80u) )
        break;
      v4 = (unsigned int)EndPtr;
      if ( EndPtr )
        break;
      String = (wchar_t *)S;
      v3 = 1;
      v29 = 1;
      v5 = 1;
      v28 = 1;
      v27 = 1;
      goto LABEL_21;
    }
    if ( v4 || v7 || S[1] != 58 )
      break;
    v12 = Addr;
    v8 = 1;
    v7 = 2;
    *((_WORD *)Addr + v25) = 0;
    v4 = (unsigned int)EndPtr;
    ++S;
    v3 = 2;
    ++v25;
    v5 = v27;
    v28 = 2;
LABEL_46:
    if ( String )
    {
      if ( v4 )
      {
        if ( v5 > 3 )
          return -1073741811;
        v16 = wcstol(String, 0, 10);
        if ( v16 > 0xFF )
          return -1073741811;
        *((_BYTE *)Addr + (_DWORD)EndPtr + 2 * v25 - 1) = v16;
      }
      else
      {
        if ( v5 > 4 )
          return -1073741811;
        v15 = wcstol(String, 0, 16);
        LOBYTE(v14) = HIBYTE(v15);
        HIBYTE(v14) = v15;
        *((_WORD *)v12 + v25++) = v14;
      }
      v5 = v27;
LABEL_55:
      v4 = (unsigned int)EndPtr;
LABEL_56:
      v3 = v28;
    }
LABEL_22:
    v6 = *++S;
  }
  *Terminator = S;
  if ( EndPtr )
  {
    if ( EndPtr != (wchar_t **)3 )
      return -1073741811;
    ++v7;
  }
  if ( !v8 && v7 != 7 )
    return -1073741811;
  if ( v28 != 1 )
  {
    if ( v28 == 2 )
    {
      v19 = Addr;
      *((_WORD *)Addr + v25) = 0;
      goto LABEL_68;
    }
    return -1073741811;
  }
  if ( EndPtr )
  {
    if ( v27 <= 3 )
    {
      v20 = wcstol(String, 0, 10);
      if ( v20 <= 0xFF )
      {
        *((_BYTE *)Addr + (_DWORD)EndPtr + 2 * v25) = v20;
        v19 = Addr;
        goto LABEL_68;
      }
    }
    return -1073741811;
  }
  if ( v27 > 4 )
    return -1073741811;
  v18 = wcstol(String, 0, 16);
  LOBYTE(v17) = HIBYTE(v18);
  HIBYTE(v17) = v18;
  *((_WORD *)Addr + v25) = v17;
  v19 = Addr;
LABEL_68:
  if ( v8 )
  {
    v21 = (char *)v19 + 2 * v8;
    LODWORD(v23) = 2 * (v7 - v8);
    memmove((char *)v19 + 2 * (v8 - v7) + 16, v21, v23);
    LODWORD(v22) = 2 * (8 - v7);
    memset(v21, 0, v22);
  }
  return 0;
}
