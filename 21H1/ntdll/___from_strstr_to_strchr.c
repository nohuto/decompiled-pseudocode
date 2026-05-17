/*
 * XREFs of ___from_strstr_to_strchr @ 0x4B2F9B36
 * Callers:
 *     _strstr @ 0x4B2FA160 (_strstr.c)
 * Callees:
 *     <none>
 */

char *__usercall __from_strstr_to_strchr@<eax>(int a1@<eax>, char *Str, ...)
{
  int v3; // eax
  char *v4; // edx
  char v5; // cl
  int v6; // ebx
  int v7; // ecx
  int v8; // esi
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax

  v3 = a1 << 8;
  v4 = Str;
  if ( ((unsigned __int8)Str & 3) != 0 )
  {
    while ( 1 )
    {
      v5 = *v4++;
      if ( v5 == (_BYTE)a1 )
        return v4 - 1;
      if ( !v5 )
        return 0;
      if ( ((unsigned __int8)v4 & 3) == 0 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v6 = v3 | a1 | ((v3 | a1) << 16);
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = v6 ^ *(_DWORD *)v4;
        v8 = *(_DWORD *)v4 + 2130640639;
        v9 = v8 ^ ~*(_DWORD *)v4;
        v4 += 4;
        if ( (((v7 + 2130640639) ^ ~v7) & 0x81010100) != 0 )
          break;
        v10 = v9 & 0x81010100;
        if ( v10 && ((v10 & 0x1010100) != 0 || (v8 & 0x80000000) == 0) )
          return 0;
      }
      v12 = *((_DWORD *)v4 - 1);
      if ( (_BYTE)v12 == (_BYTE)v6 )
        break;
      if ( !(_BYTE)v12 )
        return 0;
      if ( BYTE1(v12) == (_BYTE)v6 )
        return v4 - 3;
      if ( !BYTE1(v12) )
        return 0;
      v13 = HIWORD(v12);
      if ( (_BYTE)v13 == (_BYTE)v6 )
        return v4 - 2;
      if ( !(_BYTE)v13 )
        return 0;
      if ( BYTE1(v13) == (_BYTE)v6 )
        return v4 - 1;
      if ( !BYTE1(v13) )
        return 0;
    }
    return v4 - 4;
  }
}
