/*
 * XREFs of _RtlEthernetStringToAddressA@12 @ 0x4B362010
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     ___isascii @ 0x4B2F6030 (___isascii.c)
 *     _isdigit @ 0x4B2F6180 (_isdigit.c)
 *     _islower @ 0x4B2F61E0 (_islower.c)
 *     _isxdigit @ 0x4B2F62D0 (_isxdigit.c)
 */

LONG __stdcall RtlEthernetStringToAddressA(PCSTR S, PCSTR *Terminator, DL_EUI48 *Addr)
{
  DL_EUI48 *v4; // edi
  int v5; // ecx
  UINT8 v6; // bl
  char v7; // bl
  bool v8; // zf
  char v9; // al
  CHAR v10; // bh
  int v12; // [esp+14h] [ebp-14h]
  DL_EUI48 v13; // [esp+1Ch] [ebp-Ch] BYREF
  char v14; // [esp+22h] [ebp-6h] BYREF

  v4 = &v13;
  while ( 1 )
  {
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      v10 = *S;
      v12 = v5;
      if ( !*S )
        break;
      if ( __isascii(v10) && isdigit(v10) )
      {
        v7 = 16 * (v6 + 13);
      }
      else
      {
        if ( !__isascii(v10) || !isxdigit(v10) )
        {
          v5 = v12;
          break;
        }
        if ( !__isascii(v10) || (v8 = islower(v10) == 0, v9 = 97, v8) )
          v9 = 65;
        v7 = 16 * v6 - v9 + 10;
      }
      v6 = v10 + v7;
      if ( v12 == 2 )
        goto LABEL_21;
      ++S;
      v5 = v12 + 1;
    }
    if ( *S != 45 && *S != 58 )
      break;
    if ( v4 < (DL_EUI48 *)&v13.Ei48.Byte[2] )
    {
      v4->Byte[0] = v6;
      v4 = (DL_EUI48 *)((char *)v4 + 1);
      ++S;
      if ( v5 == 2 )
        continue;
    }
LABEL_21:
    *Terminator = S;
    return -1073741811;
  }
  *Terminator = S;
  if ( v5 != 2 )
    return -1073741811;
  v4->Byte[0] = v6;
  if ( &v4->Byte[1] != (UINT8 *)&v14 )
    return -1073741811;
  *Addr = v13;
  return 0;
}
