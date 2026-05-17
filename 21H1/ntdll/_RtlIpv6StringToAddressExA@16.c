/*
 * XREFs of _RtlIpv6StringToAddressExA@16 @ 0x4B2EC250
 * Callers:
 *     <none>
 * Callees:
 *     _RtlIpv6StringToAddressA@12 @ 0x4B2EC2C0 (_RtlIpv6StringToAddressA@12.c)
 *     ___isascii @ 0x4B2F6030 (___isascii.c)
 *     _isdigit @ 0x4B2F6180 (_isdigit.c)
 *     _islower @ 0x4B2F61E0 (_islower.c)
 *     _isxdigit @ 0x4B2F62D0 (_isxdigit.c)
 */

LONG __stdcall RtlIpv6StringToAddressExA(PCSTR AddressString, struct in6_addr *Address, PULONG ScopeId, PUSHORT Port)
{
  const CHAR *v4; // eax
  CHAR v5; // cl
  bool v6; // bl
  bool v7; // zf
  PCSTR v9; // esi
  int v10; // ebx
  unsigned int v11; // edi
  __int64 v12; // kr08_8
  PCSTR v13; // ecx
  CHAR v14; // al
  unsigned __int16 v15; // bx
  int v16; // edi
  unsigned __int16 v17; // cx
  USHORT v18; // ax
  int v19; // [esp-4h] [ebp-20h]
  __int16 v20; // [esp-4h] [ebp-20h]
  ULONG v21; // [esp+Ch] [ebp-10h]
  PCSTR Terminator; // [esp+10h] [ebp-Ch] BYREF
  unsigned int v23; // [esp+14h] [ebp-8h]
  bool v24; // [esp+1Ah] [ebp-2h]
  CHAR v25; // [esp+1Bh] [ebp-1h]

  v4 = AddressString;
  if ( !AddressString || !Address || !ScopeId || !Port )
    return -1073741811;
  v5 = *AddressString;
  v6 = 0;
  v23 = 0;
  v21 = 0;
  v25 = v5;
  v7 = v5 == 91;
  if ( v5 == 91 )
  {
    v4 = AddressString + 1;
    v7 = 1;
  }
  v24 = v7;
  if ( RtlIpv6StringToAddressA(v4, &Terminator, Address) < 0 )
    return -1073741811;
  v9 = Terminator;
  if ( *Terminator == 37 )
  {
    v9 = Terminator + 1;
    LOBYTE(v10) = Terminator[1];
    if ( !__isascii((char)v10) || !isdigit((char)v10) )
      return -1073741811;
    if ( (_BYTE)v10 )
    {
      v11 = v23;
      while ( (_BYTE)v10 != 93 )
      {
        v10 = (char)v10;
        if ( !__isascii((char)v10) )
          return -1073741811;
        if ( !isdigit(v10) )
          return -1073741811;
        v12 = v10 + 10LL * v21;
        Terminator = (PCSTR)v12;
        if ( (unsigned __int64)(v12 - 48) >> 32 > v11 )
          return -1073741811;
        ++v9;
        v21 = v10 + 10 * v21 - 48;
        LOBYTE(v10) = *v9;
        if ( !*v9 )
          break;
      }
    }
    v6 = v23;
  }
  if ( *v9 != 93 )
    goto LABEL_49;
  if ( v25 != 91 )
    return -1073741811;
  ++v9;
  v24 = v6;
  if ( *v9 == 58 )
  {
    ++v9;
    Terminator = (PCSTR)10;
    if ( *v9 == 48 )
    {
      v13 = v9 + 1;
      Terminator = (PCSTR)8;
      if ( *++v9 == 120 || *v9 == 88 )
      {
        Terminator = (PCSTR)16;
        v9 = v13 + 1;
      }
    }
    v14 = *v9;
    v25 = v14;
    if ( v14 )
    {
      v15 = v23;
      while ( 1 )
      {
        v16 = v14;
        if ( __isascii(v14) && isdigit(v16) && v16 - 48 < (unsigned __int16)Terminator )
        {
          if ( v16 + (unsigned __int16)Terminator * (unsigned int)v15 - 48 > 0xFFFF )
            return -1073741811;
          v17 = v25 - 48 + v23 * (_WORD)Terminator;
          v23 = v17;
          v15 = v17;
        }
        else
        {
          if ( (_WORD)Terminator != 16 || !__isascii(v16) || !isxdigit(v16) )
            return -1073741811;
          v19 = __isascii(v16) && islower(v16) ? 97 : 65;
          if ( v16 + 16 * (unsigned int)v15 - v19 + 10 > 0xFFFF )
            return -1073741811;
          v23 *= 16;
          if ( __isascii(v16) && islower(v16) )
            v20 = 97;
          else
            v20 = 65;
          v15 = v25 - v20 + 10 + v23;
          LOWORD(v23) = v15;
        }
        v14 = *++v9;
        v25 = v14;
        if ( !v14 )
          goto LABEL_50;
      }
    }
  }
LABEL_49:
  v15 = v23;
LABEL_50:
  if ( *v9 || v24 )
    return -1073741811;
  LOBYTE(v18) = HIBYTE(v15);
  HIBYTE(v18) = v15;
  *Port = v18;
  *ScopeId = v21;
  return 0;
}
