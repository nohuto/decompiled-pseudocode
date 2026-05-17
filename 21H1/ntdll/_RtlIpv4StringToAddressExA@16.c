/*
 * XREFs of _RtlIpv4StringToAddressExA@16 @ 0x4B2EC990
 * Callers:
 *     <none>
 * Callees:
 *     _RtlIpv4StringToAddressA@16 @ 0x4B2EC9E0 (_RtlIpv4StringToAddressA@16.c)
 *     ___isascii @ 0x4B2F6030 (___isascii.c)
 *     _isdigit @ 0x4B2F6180 (_isdigit.c)
 *     _islower @ 0x4B2F61E0 (_islower.c)
 *     _isxdigit @ 0x4B2F62D0 (_isxdigit.c)
 */

LONG __stdcall RtlIpv4StringToAddressExA(PCSTR AddressString, BOOLEAN Strict, struct in_addr *Address, PUSHORT Port)
{
  PUSHORT v4; // edi
  LONG result; // eax
  PCSTR v6; // esi
  bool v7; // zf
  PCSTR v8; // ecx
  CHAR v9; // bh
  CHAR v10; // bl
  int v11; // eax
  __int16 v12; // dx
  USHORT v13; // cx
  int v14; // [esp-4h] [ebp-1Ch]
  __int16 v15; // [esp-4h] [ebp-1Ch]
  PCSTR Terminator; // [esp+10h] [ebp-8h] BYREF
  int v17; // [esp+14h] [ebp-4h]

  if ( !AddressString )
    return -1073741811;
  if ( !Address )
    return -1073741811;
  v4 = Port;
  if ( !Port || RtlIpv4StringToAddressA(AddressString, Strict, &Terminator, Address) < 0 )
    return -1073741811;
  if ( *Terminator == 58 )
  {
    v17 = 0;
    v6 = Terminator + 1;
    v7 = Terminator[1] == 48;
    Terminator = (PCSTR)10;
    if ( v7 )
    {
      v8 = v6 + 1;
      Terminator = (PCSTR)8;
      if ( *++v6 == 120 || *v6 == 88 )
      {
        Terminator = (PCSTR)16;
        v6 = v8 + 1;
      }
    }
    v9 = *v6;
    v10 = *v6;
    if ( *v6 )
    {
      while ( 1 )
      {
        ++v6;
        if ( !__isascii(v10) )
          break;
        v11 = isdigit(v10);
        v12 = (__int16)Terminator;
        if ( !v11 || (unsigned __int16)(v10 - 48) >= (unsigned __int16)Terminator )
          goto LABEL_18;
        if ( v10 + (unsigned __int16)Terminator * (unsigned int)(unsigned __int16)v17 - 48 > 0xFFFF )
          return -1073741811;
        v17 = (unsigned __int16)(v10 + v17 * (_WORD)Terminator - 48);
LABEL_31:
        v10 = *v6;
        if ( !*v6 )
        {
          v4 = Port;
          goto LABEL_33;
        }
      }
      v12 = (__int16)Terminator;
LABEL_18:
      if ( v12 != 16 || !__isascii(v10) || !isxdigit(v10) )
        return -1073741811;
      v14 = __isascii(v10) && islower(v10) ? 97 : 65;
      if ( v10 + 16 * (unsigned int)(unsigned __int16)v17 - v14 + 10 > 0xFFFF )
        return -1073741811;
      v17 *= 16;
      if ( __isascii(v10) && islower(v10) )
        v15 = 97;
      else
        v15 = 65;
      LOWORD(v17) = v10 - v15 + 10 + v17;
      goto LABEL_31;
    }
LABEL_33:
    if ( !v9 )
      return -1073741811;
  }
  else
  {
    if ( *Terminator )
      return -1073741811;
    v17 = 0;
  }
  LOBYTE(v13) = BYTE1(v17);
  HIBYTE(v13) = v17;
  result = 0;
  *v4 = v13;
  return result;
}
