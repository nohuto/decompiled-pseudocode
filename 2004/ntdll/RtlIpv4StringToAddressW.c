/*
 * XREFs of RtlIpv4StringToAddressW @ 0x18000D720
 * Callers:
 *     RtlIpv4StringToAddressExW @ 0x18000D5D0 (RtlIpv4StringToAddressExW.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     iswctype @ 0x18008FBB0 (iswctype.c)
 */

LONG __stdcall RtlIpv4StringToAddressW(PCWSTR S, BOOLEAN Strict, LPCWSTR *Terminator, struct in_addr *Addr)
{
  unsigned int *v6; // rbx
  int v7; // r15d
  char v8; // r13
  unsigned int v9; // r12d
  WCHAR v10; // si
  LONG result; // eax
  unsigned int v12; // ecx
  __int64 v13; // rbx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // ecx
  int v20; // eax
  BOOLEAN v21; // [rsp+20h] [rbp-30h]
  unsigned int v23; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-1Ch]
  unsigned int v25; // [rsp+38h] [rbp-18h]
  unsigned int v26; // [rsp+3Ch] [rbp-14h] BYREF

  v21 = Strict;
  v6 = &v23;
  while ( 1 )
  {
    v7 = 10;
    v8 = 0;
    v9 = 0;
    if ( *S == 48 )
    {
      if ( *++S < 0x80u && (v20 = iswctype(*S, 4u), Strict = v21, v20) )
      {
        v7 = 8;
      }
      else if ( ((*S - 88) & 0xFFDF) != 0 )
      {
        v8 = 1;
      }
      else
      {
        v7 = 16;
        ++S;
      }
    }
    if ( Strict && v7 != 10 )
      goto LABEL_12;
    v10 = *S;
    if ( *S )
    {
      do
      {
        if ( v10 < 0x80u && iswctype(v10, 4u) && v10 - 48 < v7 )
        {
          v12 = v9 * v7 + v10 - 48;
        }
        else
        {
          if ( v7 != 16 || v10 >= 0x80u || !iswctype(v10, 0x80u) )
          {
            Strict = v21;
            goto LABEL_10;
          }
          v12 = v10 + 16 * v9 - (iswctype(v10, 2u) != 0 ? 97 : 65) + 10;
        }
        if ( v12 < v9 )
          goto LABEL_12;
        v8 = 1;
        ++S;
        v9 = v12;
        v10 = *S;
      }
      while ( *S );
      Strict = v21;
    }
LABEL_10:
    if ( *S != 46 )
      break;
    if ( v6 < &v26 )
    {
      *v6 = v9;
      ++S;
      ++v6;
      if ( v8 )
        continue;
    }
    goto LABEL_12;
  }
  if ( !v8 )
    goto LABEL_12;
  *v6 = v9;
  v13 = ((char *)v6 - (char *)&v23 + 4) >> 2;
  if ( Strict )
  {
    if ( (_DWORD)v13 != 4 )
      goto LABEL_12;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v19 = v23;
    goto LABEL_33;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( v23 <= 0xFF && v24 <= 0xFFFFFF )
    {
      v18 = v23 << 24;
      v17 = v24 & 0xFFFFFF;
      goto LABEL_32;
    }
    goto LABEL_12;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( v23 <= 0xFF && v24 <= 0xFF && v25 <= 0xFFFF )
    {
      v17 = (unsigned __int16)v25;
      v18 = ((v23 << 8) | (unsigned __int8)v24) << 16;
      goto LABEL_32;
    }
LABEL_12:
    result = -1073741811;
    *Terminator = S;
    return result;
  }
  if ( v16 != 1 || v23 > 0xFF || v24 > 0xFF || v25 > 0xFF || v26 > 0xFF )
    goto LABEL_12;
  v17 = (unsigned __int8)v26;
  v18 = ((unsigned __int8)v25 | (((v23 << 8) | (unsigned __int8)v24) << 8)) << 8;
LABEL_32:
  v19 = v17 | v18;
LABEL_33:
  *Terminator = S;
  *(_DWORD *)Addr = _byteswap_ulong(v19);
  return 0;
}
