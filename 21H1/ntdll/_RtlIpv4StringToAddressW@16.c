/*
 * XREFs of _RtlIpv4StringToAddressW@16 @ 0x4B2E8A10
 * Callers:
 *     _RtlIpv4StringToAddressExW@16 @ 0x4B2E89C0 (_RtlIpv4StringToAddressExW@16.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _iswctype @ 0x4B2F86F0 (_iswctype.c)
 */

LONG __stdcall RtlIpv4StringToAddressW(PCWSTR S, BOOLEAN Strict, LPCWSTR *Terminator, struct in_addr *Addr)
{
  unsigned int *v5; // esi
  int v6; // ebx
  BOOLEAN v7; // dl
  unsigned __int16 v8; // bx
  char v9; // cl
  unsigned int v10; // eax
  int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // [esp-4h] [ebp-3Ch]
  int v25; // [esp+14h] [ebp-24h]
  unsigned int v26; // [esp+1Ch] [ebp-1Ch]
  char v27; // [esp+23h] [ebp-15h]
  unsigned int v28; // [esp+24h] [ebp-14h] BYREF
  unsigned int v29; // [esp+28h] [ebp-10h]
  unsigned int v30; // [esp+2Ch] [ebp-Ch]
  unsigned int v31; // [esp+30h] [ebp-8h] BYREF

  v5 = &v28;
  while ( 2 )
  {
    v26 = 0;
    v6 = 10;
    v27 = 0;
    v25 = 10;
    if ( *S != 48 )
      goto LABEL_3;
    if ( *++S < 0x80u && iswctype(*S, 4u) )
    {
      v24 = 8;
    }
    else
    {
      v12 = *(unsigned __int16 *)S;
      if ( v12 != 120 && v12 != 88 )
      {
        v27 = 1;
        goto LABEL_3;
      }
      v24 = 16;
      ++S;
    }
    v6 = v24;
    v25 = v24;
LABEL_3:
    v7 = Strict;
    if ( Strict && v6 != 10 )
      goto LABEL_13;
    v8 = *S;
    if ( !*S )
    {
      v10 = 0;
      v9 = v27;
      goto LABEL_11;
    }
    while ( v8 < 0x80u && iswctype(v8, 4u) && v8 - 48 < v25 )
    {
      v13 = v26;
      v14 = v26 * v25;
      v15 = v8 - 48;
LABEL_28:
      v10 = v15 + v14;
      if ( v10 < v13 )
        goto LABEL_13;
      ++S;
      v26 = v10;
      v9 = 1;
      v27 = 1;
      v8 = *S;
      if ( !*S )
        goto LABEL_10;
    }
    if ( v25 == 16 && v8 < 0x80u && iswctype(v8, 0x80u) )
    {
      v16 = iswctype(v8, 2u);
      v13 = v26;
      v15 = 16 * v26 - (v16 != 0 ? 97 : 65);
      v14 = v8 + 10;
      goto LABEL_28;
    }
    v9 = v27;
    v10 = v26;
LABEL_10:
    v7 = Strict;
LABEL_11:
    if ( *S == 46 )
    {
      if ( v5 >= &v31 )
        goto LABEL_13;
      *v5 = v10;
      ++S;
      ++v5;
      if ( !v9 )
        goto LABEL_13;
      continue;
    }
    break;
  }
  if ( !v9 )
    goto LABEL_13;
  *v5 = v10;
  v17 = ((char *)v5 - (char *)&v28 + 4) >> 2;
  if ( v7 )
  {
    if ( v17 != 4 )
      goto LABEL_13;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v23 = v28;
    goto LABEL_54;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    if ( v28 > 0xFF || v29 > 0xFFFFFF )
      goto LABEL_13;
    v21 = v28 << 24;
    v22 = v29 & 0xFFFFFF;
    goto LABEL_52;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    if ( v28 > 0xFF || v29 > 0xFF || v30 > 0xFFFF )
      goto LABEL_13;
    v22 = (unsigned __int16)v30;
    v21 = ((v28 << 8) | (unsigned __int8)v29) << 16;
LABEL_52:
    v23 = v22 | v21;
LABEL_54:
    *Terminator = S;
    *(_DWORD *)Addr = _byteswap_ulong(v23);
    return 0;
  }
  if ( v20 == 1 && v28 <= 0xFF && v29 <= 0xFF && v30 <= 0xFF && v31 <= 0xFF )
  {
    v21 = ((unsigned __int8)v30 | (((v28 << 8) | (unsigned __int8)v29) << 8)) << 8;
    v22 = (unsigned __int8)v31;
    goto LABEL_52;
  }
LABEL_13:
  *Terminator = S;
  return -1073741811;
}
