/*
 * XREFs of _RtlIpv6StringToAddressA@12 @ 0x4B2EC2C0
 * Callers:
 *     _RtlIpv6StringToAddressExA@16 @ 0x4B2EC250 (_RtlIpv6StringToAddressExA@16.c)
 * Callees:
 *     ___isascii @ 0x4B2F6030 (___isascii.c)
 *     _isdigit @ 0x4B2F6180 (_isdigit.c)
 *     _isxdigit @ 0x4B2F62D0 (_isxdigit.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _strtol @ 0x4B2FA3E0 (_strtol.c)
 */

LONG __stdcall RtlIpv6StringToAddressA(PCSTR S, PCSTR *Terminator, struct in6_addr *Addr)
{
  int v3; // eax
  char **v4; // edx
  unsigned int v5; // esi
  int v6; // ecx
  unsigned int v7; // edi
  CHAR v8; // bl
  int v10; // eax
  char **v11; // eax
  int v12; // edx
  struct in6_addr *v13; // ebx
  int v14; // eax
  USHORT v15; // cx
  __int16 v16; // kr00_2
  unsigned int v17; // eax
  __int16 v18; // ax
  struct in6_addr *v19; // edx
  USHORT v20; // cx
  unsigned int v21; // eax
  char *v22; // esi
  char *String; // [esp+Ch] [ebp-1Ch]
  int v24; // [esp+10h] [ebp-18h]
  int v25; // [esp+14h] [ebp-14h]
  int v26; // [esp+18h] [ebp-10h]
  char **EndPtr; // [esp+1Ch] [ebp-Ch]
  unsigned int v28; // [esp+20h] [ebp-8h]
  char v29; // [esp+27h] [ebp-1h]

  v3 = 0;
  String = 0;
  v4 = 0;
  v29 = 0;
  v5 = 0;
  v24 = 0;
  v6 = 0;
  v25 = 0;
  v7 = 0;
  EndPtr = 0;
  v28 = 0;
  v26 = 0;
  v8 = *S;
  while ( v8 )
  {
    if ( v3 )
    {
      v10 = v3 - 1;
      if ( !v10 )
      {
        if ( __isascii(v8) && isdigit(v8) )
        {
          v5 = ++v28;
          goto LABEL_28;
        }
        if ( __isascii(v8) && isxdigit(v8) )
        {
          v4 = EndPtr;
          v5 = ++v28;
          if ( EndPtr )
          {
            v6 = v26;
            break;
          }
          v29 = 1;
          goto LABEL_29;
        }
        if ( v8 != 58 )
        {
          if ( v8 != 46 || v29 || (unsigned int)EndPtr > 2 || v7 > 6 )
            goto LABEL_10;
          v11 = (char **)((char *)EndPtr + 1);
          EndPtr = (char **)((char *)EndPtr + 1);
          v25 = 0;
          goto LABEL_32;
        }
        if ( EndPtr || v7 > 6 )
        {
LABEL_10:
          v6 = v26;
LABEL_11:
          v5 = v28;
          break;
        }
        if ( S[1] == 58 )
        {
          v6 = v26;
          if ( v26 )
            goto LABEL_11;
          v12 = 2;
          ++S;
          v26 = v7 + 1;
          v14 = 2;
        }
        else
        {
          v12 = 0;
          v14 = 1;
        }
        v5 = v28;
        v7 += v14;
        v11 = 0;
LABEL_26:
        v25 = v12;
LABEL_27:
        if ( v12 == 1 )
        {
LABEL_28:
          v4 = EndPtr;
          goto LABEL_29;
        }
LABEL_32:
        v13 = Addr;
LABEL_52:
        v5 = v28;
        if ( !String )
          goto LABEL_28;
        if ( !v11 )
        {
          if ( v28 > 4 )
            return -1073741811;
          v16 = strtol(String, 0, 16);
          LOBYTE(v15) = HIBYTE(v16);
          HIBYTE(v15) = v16;
          v13->u.Word[v24++] = v15;
          goto LABEL_28;
        }
        if ( v28 > 3 )
          return -1073741811;
        v17 = strtol(String, 0, 10);
        if ( v17 > 0xFF )
          return -1073741811;
        v4 = EndPtr;
        v13->u.Byte[(_DWORD)EndPtr + 2 * v24 - 1] = v17;
LABEL_29:
        v3 = v25;
        goto LABEL_30;
      }
      if ( v10 != 1 )
      {
        v11 = EndPtr;
        v12 = v25;
        goto LABEL_27;
      }
    }
    if ( v8 == 58 )
    {
      if ( v4 || v7 || S[1] != 58 )
        break;
      v13 = Addr;
      ++S;
      v11 = EndPtr;
      v26 = 1;
      v7 = 2;
      Addr->u.Word[v24++] = 0;
      v25 = 2;
      goto LABEL_52;
    }
    if ( v7 > 7 )
      break;
    if ( !__isascii(v8) || !isdigit(v8) )
    {
      if ( !__isascii(v8) )
        goto LABEL_10;
      if ( !isxdigit(v8) )
        goto LABEL_10;
      v11 = EndPtr;
      if ( EndPtr )
        goto LABEL_10;
      v29 = 1;
      v12 = 1;
      String = (char *)S;
      v5 = 1;
      v28 = 1;
      goto LABEL_26;
    }
    v4 = EndPtr;
    String = (char *)S;
    v3 = 1;
    v29 = 0;
    v5 = 1;
    v25 = 1;
    v28 = 1;
LABEL_30:
    v8 = *++S;
    v6 = v26;
  }
  *Terminator = S;
  if ( EndPtr )
  {
    if ( EndPtr == (char **)3 )
    {
      ++v7;
      goto LABEL_13;
    }
    return -1073741811;
  }
LABEL_13:
  if ( !v6 && v7 != 7 )
    return -1073741811;
  if ( v25 == 1 )
  {
    if ( !EndPtr )
    {
      if ( v5 <= 4 )
      {
        v18 = strtol(String, 0, 16);
        v19 = Addr;
        LOBYTE(v20) = HIBYTE(v18);
        HIBYTE(v20) = v18;
        Addr->u.Word[v24] = v20;
        goto LABEL_70;
      }
      return -1073741811;
    }
    if ( v5 > 3 )
      return -1073741811;
    v21 = strtol(String, 0, 10);
    if ( v21 > 0xFF )
      return -1073741811;
    v19 = Addr;
    Addr->u.Byte[(_DWORD)EndPtr + 2 * v24] = v21;
LABEL_70:
    v6 = v26;
  }
  else
  {
    if ( v25 != 2 )
      return -1073741811;
    v19 = Addr;
    Addr->u.Word[v24] = 0;
  }
  if ( v6 )
  {
    v22 = (char *)v19 + 2 * v6;
    memmove((char *)&v19[1] + 2 * (v6 - v7), v22, 2 * (v7 - v6));
    memset(v22, 0, 2 * (8 - v7));
  }
  return 0;
}
