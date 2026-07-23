/*
 * XREFs of CmpGetBiosVersion @ 0x140A5A7C0
 * Callers:
 *     CmpSetVideoBiosInformation @ 0x140A5A2D0 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A5A4A0 (CmpSetSystemBiosInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     strstr @ 0x1403D19F0 (strstr.c)
 */

char __fastcall CmpGetBiosVersion(__int64 a1, unsigned int a2, __int64 a3)
{
  _BYTE *v4; // rcx
  _BYTE *v5; // rbx
  char *p_Str; // rdi
  unsigned __int16 v7; // cx
  char *v8; // rbx
  char v9; // al
  const char *v10; // rax
  char *v11; // rbx
  __int16 v12; // si
  char result; // al
  unsigned __int16 i; // dx
  char v15; // r8
  __int64 v16; // rcx
  char Str; // [rsp+9Fh] [rbp-29h] BYREF

  if ( a1 )
  {
    BiosBegin = a1;
    Start = a1 + 1;
    End = a2 + a1 - 2;
  }
  while ( 1 )
  {
    v4 = (_BYTE *)Start;
    v5 = 0LL;
    if ( Start > (unsigned __int64)End )
      return 0;
    while ( *v4 != 46 || (unsigned __int8)(v4[1] - 48) > 9u || (unsigned __int8)(*(v4 - 1) - 48) > 9u )
    {
      Start = (__int64)++v4;
      if ( (unsigned __int64)v4 > End )
        goto LABEL_10;
    }
    v5 = v4;
LABEL_10:
    if ( (unsigned __int64)v4 > End )
      return 0;
    Str = 0;
    Start = (__int64)(v4 + 2);
    p_Str = &Str;
    v7 = 0;
    v8 = v5 - 1;
    do
    {
      if ( (unsigned __int64)v8 < BiosBegin )
        break;
      v9 = *v8;
      if ( *v8 < 32 )
        break;
      if ( v9 == 36 )
        break;
      --p_Str;
      --v8;
      ++v7;
      *p_Str = v9;
    }
    while ( v7 < 0x78u );
    v10 = SearchStrings;
    v11 = v8 + 1;
    v12 = 0;
    while ( v10 )
    {
      if ( strstr(p_Str, v10) )
      {
        for ( ; v11; ++v11 )
        {
          if ( *v11 != 32 )
            break;
        }
        for ( i = 0; i < 0x7Fu; ++i )
        {
          if ( !v11 )
            break;
          if ( (unsigned __int64)v11 > End + 1 )
            break;
          v15 = *v11;
          if ( *v11 < 32 )
            break;
          if ( v15 == 36 )
            break;
          v16 = i;
          ++v11;
          *(_BYTE *)(v16 + a3) = v15;
        }
        result = 1;
        *(_BYTE *)(i + a3) = 0;
        return result;
      }
      v10 = (&SearchStrings)[(unsigned __int16)++v12];
    }
  }
}
