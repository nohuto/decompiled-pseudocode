/*
 * XREFs of RtlIpv6StringToAddressA @ 0x14058A9E0
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x14058AE00 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     strtol @ 0x1403D0B30 (strtol.c)
 *     __isascii @ 0x1403D1D40 (__isascii.c)
 *     isdigit @ 0x1403D1D60 (isdigit.c)
 *     isxdigit @ 0x1403D1E50 (isxdigit.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 */

NTSTATUS __stdcall RtlIpv6StringToAddressA(PCSTR S, PCSTR *Terminator, struct in6_addr *Addr)
{
  struct in6_addr *v4; // rbp
  int v5; // r15d
  const char *v6; // rax
  unsigned int v7; // esi
  unsigned int v8; // edi
  unsigned int v9; // r12d
  unsigned int v10; // r14d
  unsigned int v11; // edx
  int v12; // eax
  unsigned int v13; // eax
  CHAR v14; // bl
  unsigned int v15; // eax
  char *Str; // [rsp+20h] [rbp-58h]
  char v18; // [rsp+80h] [rbp+8h]
  unsigned int v21; // [rsp+98h] [rbp+20h]

  v4 = Addr;
  v5 = 0;
  Str = 0LL;
  v6 = 0LL;
  v18 = 0;
  v7 = 0;
  v21 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  while ( 1 )
  {
    v14 = *S;
    if ( !*S )
      break;
    if ( v5 != 1 )
    {
      if ( v14 == 58 )
      {
        if ( v8 || v7 || S[1] != 58 )
          goto LABEL_53;
        v7 = 2;
        v10 = 1;
        v5 = 2;
        v21 = v11 + 1;
        ++S;
        *((_WORD *)v4 + v11) = 0;
        v6 = Str;
        goto LABEL_38;
      }
      if ( v7 > 7 )
        goto LABEL_53;
      if ( !_isascii(v14) || !isdigit(v14) )
      {
        if ( !_isascii(v14) || !isxdigit(v14) || v8 )
          goto LABEL_52;
        v6 = S;
        v18 = 1;
        v5 = 1;
        Str = (char *)S;
        v9 = 1;
        goto LABEL_37;
      }
      v6 = S;
      v18 = 0;
      v5 = 1;
      Str = (char *)S;
      v9 = 1;
LABEL_47:
      v11 = v21;
      goto LABEL_48;
    }
    if ( _isascii(v14) && isdigit(v14) )
    {
      v4 = Addr;
      ++v9;
      goto LABEL_6;
    }
    if ( !_isascii(v14) || !isxdigit(v14) )
    {
      if ( v14 == 58 )
      {
        if ( v8 || v7 > 6 )
          goto LABEL_51;
        if ( S[1] == 58 )
        {
          if ( v10 )
            goto LABEL_51;
          v12 = 2;
          ++S;
          v5 = 2;
          v10 = v7 + 1;
        }
        else
        {
          v5 = 0;
          v12 = 1;
        }
        v4 = Addr;
        v7 += v12;
        v6 = Str;
LABEL_37:
        v11 = v21;
        if ( v5 == 1 )
          goto LABEL_48;
      }
      else
      {
        if ( v14 != 46 || v18 || v8 > 2 )
        {
LABEL_51:
          v4 = Addr;
LABEL_52:
          v11 = v21;
LABEL_53:
          v6 = Str;
          break;
        }
        v6 = Str;
        if ( v7 > 6 )
        {
          v4 = Addr;
          v11 = v21;
          break;
        }
        ++v8;
        v5 = 0;
      }
LABEL_38:
      if ( v6 )
      {
        if ( v8 )
        {
          if ( v9 > 3 )
            return -1073741811;
          v13 = strtol(v6, 0LL, 10);
          if ( v13 > 0xFF )
            return -1073741811;
          v4 = Addr;
          *((_BYTE *)Addr + 2 * v21 + v8 - 1) = v13;
LABEL_6:
          v11 = v21;
        }
        else
        {
          if ( v9 > 4 )
            return -1073741811;
          v4 = Addr;
          *((_WORD *)Addr + v21) = __ROR2__(strtol(v6, 0LL, 16), 8);
          v11 = ++v21;
        }
        v6 = Str;
        goto LABEL_48;
      }
      v4 = Addr;
      goto LABEL_47;
    }
    v4 = Addr;
    ++v9;
    v11 = v21;
    v6 = Str;
    if ( v8 )
      break;
    v18 = 1;
LABEL_48:
    ++S;
  }
  *Terminator = S;
  if ( v8 )
  {
    if ( v8 == 3 )
    {
      ++v7;
      goto LABEL_57;
    }
    return -1073741811;
  }
LABEL_57:
  if ( !v10 && v7 != 7 )
    return -1073741811;
  if ( v5 == 1 )
  {
    if ( v8 )
    {
      if ( v9 > 3 )
        return -1073741811;
      v15 = strtol(v6, 0LL, 10);
      if ( v15 > 0xFF )
        return -1073741811;
      *((_BYTE *)v4 + 2 * v21 + v8) = v15;
    }
    else
    {
      if ( v9 > 4 )
        return -1073741811;
      *((_WORD *)v4 + v21) = __ROR2__(strtol(v6, 0LL, 16), 8);
    }
  }
  else
  {
    if ( v5 != 2 )
      return -1073741811;
    *((_WORD *)v4 + v11) = 0;
  }
  if ( v10 )
  {
    memmove((char *)v4 + 2 * (v10 - v7) + 16, (char *)v4 + 2 * v10, 2LL * (v7 - v10));
    memset((char *)v4 + 2 * v10, 0, 2LL * (8 - v7));
  }
  return 0;
}
