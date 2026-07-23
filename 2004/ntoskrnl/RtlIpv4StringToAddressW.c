/*
 * XREFs of RtlIpv4StringToAddressW @ 0x140353940
 * Callers:
 *     RtlIpv4StringToAddressExW @ 0x1403538C0 (RtlIpv4StringToAddressExW.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     iswctype @ 0x1403D136C (iswctype.c)
 */

NTSTATUS __stdcall RtlIpv4StringToAddressW(PCWSTR S, BOOLEAN Strict, LPCWSTR *Terminator, struct in_addr *Addr)
{
  unsigned int *v6; // rbx
  int v7; // r15d
  char v8; // r13
  unsigned int v9; // r12d
  WCHAR v10; // si
  NTSTATUS result; // eax
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rbx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // ecx
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
      if ( *++S < 0x80u && (v12 = iswctype(*S, 4u), Strict = v21, v12) )
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
          v13 = v9 * v7 + v10 - 48;
        }
        else
        {
          if ( v7 != 16 || v10 >= 0x80u || !iswctype(v10, 0x80u) )
          {
            Strict = v21;
            goto LABEL_10;
          }
          v13 = v10 + 16 * v9 - (iswctype(v10, 2u) != 0 ? 97 : 65) + 10;
        }
        if ( v13 < v9 )
          goto LABEL_12;
        v8 = 1;
        ++S;
        v9 = v13;
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
  v14 = ((char *)v6 - (char *)&v23 + 4) >> 2;
  if ( Strict )
  {
    if ( (_DWORD)v14 != 4 )
      goto LABEL_12;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v20 = v23;
    goto LABEL_50;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( v23 <= 0xFF && v24 <= 0xFFFFFF )
    {
      v19 = v23 << 24;
      v18 = v24 & 0xFFFFFF;
      goto LABEL_48;
    }
    goto LABEL_12;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    if ( v23 <= 0xFF && v24 <= 0xFF && v25 <= 0xFFFF )
    {
      v18 = (unsigned __int16)v25;
      v19 = ((v23 << 8) | (unsigned __int8)v24) << 16;
      goto LABEL_48;
    }
LABEL_12:
    result = -1073741811;
    *Terminator = S;
    return result;
  }
  if ( v17 != 1 || v23 > 0xFF || v24 > 0xFF || v25 > 0xFF || v26 > 0xFF )
    goto LABEL_12;
  v18 = (unsigned __int8)v26;
  v19 = ((unsigned __int8)v25 | (((v23 << 8) | (unsigned __int8)v24) << 8)) << 8;
LABEL_48:
  v20 = v18 | v19;
LABEL_50:
  *Terminator = S;
  *(_DWORD *)Addr = _byteswap_ulong(v20);
  return 0;
}
