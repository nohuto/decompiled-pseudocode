/*
 * XREFs of _RtlEthernetStringToAddressW@12 @ 0x4B362130
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _iswctype @ 0x4B2F86F0 (_iswctype.c)
 */

LONG __stdcall RtlEthernetStringToAddressW(PCWSTR S, LPCWSTR *Terminator, DL_EUI48 *Addr)
{
  DL_EUI48 *v4; // edi
  int v5; // ecx
  UINT8 v6; // bl
  char v7; // bl
  WCHAR v8; // ax
  int v9; // eax
  int v11; // [esp+10h] [ebp-18h]
  WCHAR C; // [esp+18h] [ebp-10h]
  DL_EUI48 v13; // [esp+1Ch] [ebp-Ch] BYREF
  char v14; // [esp+22h] [ebp-6h] BYREF

  v4 = &v13;
  while ( 1 )
  {
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      v8 = *S;
      C = *S;
      v11 = v5;
      if ( !*S || (unsigned __int16)v8 >= 0x80u )
        break;
      if ( iswctype(v8, 4u) )
      {
        v7 = 16 * (v6 + 13);
      }
      else
      {
        if ( !iswctype(C, 0x80u) )
        {
          v5 = v11;
          break;
        }
        v7 = 16 * v6 - (iswctype(C, 2u) != 0 ? 97 : 65) + 10;
      }
      v6 = C + v7;
      if ( v11 == 2 )
        goto LABEL_17;
      ++S;
      v5 = v11 + 1;
    }
    v9 = *(unsigned __int16 *)S;
    if ( v9 != 45 && v9 != 58 )
      break;
    if ( v4 < (DL_EUI48 *)&v13.Ei48.Byte[2] )
    {
      v4->Byte[0] = v6;
      ++S;
      v4 = (DL_EUI48 *)((char *)v4 + 1);
      if ( v5 == 2 )
        continue;
    }
LABEL_17:
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
