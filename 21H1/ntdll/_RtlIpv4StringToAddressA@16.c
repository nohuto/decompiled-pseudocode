/*
 * XREFs of _RtlIpv4StringToAddressA@16 @ 0x4B2EC9E0
 * Callers:
 *     _RtlIpv4StringToAddressExA@16 @ 0x4B2EC990 (_RtlIpv4StringToAddressExA@16.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     ___isascii @ 0x4B2F6030 (___isascii.c)
 *     _isdigit @ 0x4B2F6180 (_isdigit.c)
 *     _islower @ 0x4B2F61E0 (_islower.c)
 *     _isxdigit @ 0x4B2F62D0 (_isxdigit.c)
 */

LONG __stdcall RtlIpv4StringToAddressA(PCSTR S, BOOLEAN Strict, PCSTR *Terminator, struct in_addr *Addr)
{
  unsigned int *v5; // esi
  unsigned int v6; // ebx
  int v7; // eax
  BOOLEAN v8; // dl
  CHAR v9; // al
  int v10; // ebx
  char v11; // cl
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // eax
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // [esp-4h] [ebp-38h]
  int v24; // [esp-4h] [ebp-38h]
  int v25; // [esp+14h] [ebp-20h]
  unsigned int v26; // [esp+18h] [ebp-1Ch]
  char v27; // [esp+1Fh] [ebp-15h]
  unsigned int v28; // [esp+20h] [ebp-14h] BYREF
  unsigned int v29; // [esp+24h] [ebp-10h]
  unsigned int v30; // [esp+28h] [ebp-Ch]
  unsigned int v31; // [esp+2Ch] [ebp-8h] BYREF

  v5 = &v28;
  while ( 2 )
  {
    v6 = 0;
    v27 = 0;
    v7 = 10;
    v26 = 0;
    v25 = 10;
    if ( *S != 48 )
      goto LABEL_3;
    if ( __isascii(*++S) && isdigit(*S) )
    {
      v23 = 8;
    }
    else
    {
      if ( *S != 120 && *S != 88 )
      {
        v7 = 10;
        v27 = 1;
        goto LABEL_3;
      }
      v23 = 16;
      ++S;
    }
    v7 = v23;
    v25 = v23;
LABEL_3:
    v8 = Strict;
    if ( Strict && v7 != 10 )
      goto LABEL_13;
    v9 = *S;
    if ( !*S )
    {
      v11 = v27;
      goto LABEL_11;
    }
    while ( 1 )
    {
      v10 = v9;
      if ( !__isascii(v9) || !isdigit(v10) || v10 - 48 >= v25 )
        break;
      v13 = v26;
      v14 = v26 * v25 - 48;
LABEL_32:
      v15 = v10 + v14;
      if ( v15 < v13 )
        goto LABEL_13;
      ++S;
      v6 = v15;
      v11 = 1;
      v26 = v15;
      v27 = 1;
      v9 = *S;
      if ( !*S )
        goto LABEL_10;
    }
    if ( v25 == 16 && __isascii(v10) && isxdigit(v10) )
    {
      if ( __isascii(v10) && islower(v10) )
        v24 = 97;
      else
        v24 = 65;
      v13 = v26;
      v14 = 16 * v26 - v24 + 10;
      goto LABEL_32;
    }
    v6 = v26;
    v11 = v27;
LABEL_10:
    v8 = Strict;
LABEL_11:
    if ( *S == 46 )
    {
      if ( v5 >= &v31 )
        goto LABEL_13;
      *v5++ = v6;
      ++S;
      if ( !v11 )
        goto LABEL_13;
      continue;
    }
    break;
  }
  if ( !v11 )
    goto LABEL_13;
  *v5 = v6;
  v16 = ((char *)v5 - (char *)&v28 + 4) >> 2;
  if ( v8 )
  {
    if ( v16 != 4 )
      goto LABEL_13;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v22 = v28;
    goto LABEL_58;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    if ( v28 > 0xFF || v29 > 0xFFFFFF )
      goto LABEL_13;
    v20 = v28 << 24;
    v21 = v29 & 0xFFFFFF;
    goto LABEL_56;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    if ( v28 > 0xFF || v29 > 0xFF || v30 > 0xFFFF )
      goto LABEL_13;
    v21 = (unsigned __int16)v30;
    v20 = ((v28 << 8) | (unsigned __int8)v29) << 16;
LABEL_56:
    v22 = v21 | v20;
LABEL_58:
    *Terminator = S;
    *(_DWORD *)Addr = _byteswap_ulong(v22);
    return 0;
  }
  if ( v19 == 1 && v28 <= 0xFF && v29 <= 0xFF && v30 <= 0xFF && v31 <= 0xFF )
  {
    v20 = ((unsigned __int8)v30 | (((v28 << 8) | (unsigned __int8)v29) << 8)) << 8;
    v21 = (unsigned __int8)v31;
    goto LABEL_56;
  }
LABEL_13:
  *Terminator = S;
  return -1073741811;
}
