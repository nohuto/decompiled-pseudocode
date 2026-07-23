/*
 * XREFs of CmpGetBiosDate @ 0x140A5A980
 * Callers:
 *     CmpSetVideoBiosInformation @ 0x140A5A2D0 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A5A4A0 (CmpSetSystemBiosInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     strtoul @ 0x1403D1670 (strtoul.c)
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 */

char __fastcall CmpGetBiosDate(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  _BYTE *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r15
  unsigned __int64 v7; // r13
  char *v8; // r14
  char result; // al
  char v10; // dl
  char v11; // r8
  char v12; // cl
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  char v15; // r8
  char v16; // dl
  unsigned int v18; // [rsp+24h] [rbp-3Ch]
  char Str[16]; // [rsp+30h] [rbp-30h] BYREF
  _TBYTE Buf1; // [rsp+40h] [rbp-20h] BYREF
  char v22; // [rsp+4Ah] [rbp-16h]

  Buf1 = 0.0;
  v4 = (_BYTE *)(a1 + 2);
  v22 = 0;
  v5 = a3;
  v6 = a1;
  v7 = a2 + a1 - 5;
  if ( a1 + 2 < v7 )
  {
    v8 = (char *)(a1 + 6);
    do
    {
      if ( *v4 == 47
        && v4[3] == 47
        && (unsigned __int8)(*(v4 - 1) - 48) <= 9u
        && (unsigned __int8)(v4[1] - 48) <= 9u
        && (unsigned __int8)(v4[2] - 48) <= 9u )
      {
        v10 = *v8;
        if ( (unsigned __int8)(*v8 - 48) <= 9u )
        {
          v11 = v4[5];
          if ( (unsigned __int8)(v11 - 48) <= 9u )
          {
            *(_DWORD *)&Str[5] = *(_DWORD *)v6;
            v12 = Str[5];
            Str[9] = *(_BYTE *)(v6 + 4);
            Str[2] = v10;
            Str[3] = v11;
            Str[10] = 0;
            if ( (unsigned __int8)(Str[5] - 48) > 9u )
              v12 = 48;
            Str[7] = 0;
            Str[5] = v12;
            Str[4] = 0;
            v18 = strtoul(&Str[2], 0LL, 16);
            v13 = strtoul(&Str[5], 0LL, 16);
            v14 = strtoul(&Str[8], 0LL, 16);
            if ( v13 - 1 <= 0x11 && v14 - 1 <= 0x30 )
            {
              if ( a4
                && (v15 = v4[6], (unsigned __int8)(v15 - 48) <= 9u)
                && (v16 = v4[7], (unsigned __int8)(v16 - 48) <= 9u)
                && (*(_WORD *)v8 == 14641 || *(_WORD *)v8 == 12338) )
              {
                Str[0] = *v8;
                Str[1] = v4[5];
                Str[2] = v15;
                Str[3] = v16;
              }
              else
              {
                *(_WORD *)Str = 12338;
                if ( v18 >= 0x80 )
                  *(_WORD *)Str = 14641;
              }
              Str[7] = 47;
              Str[4] = 47;
              if ( memcmp(&Buf1, Str, 0xAuLL) < 0 )
                Buf1 = *(_TBYTE *)Str;
              v4 += 2;
              v6 += 2LL;
              v8 += 2;
            }
          }
        }
      }
      ++v4;
      ++v6;
      ++v8;
    }
    while ( (unsigned __int64)v4 < v7 );
    v5 = a3;
  }
  if ( LOBYTE(Buf1) )
  {
    result = 1;
    *(_DWORD *)v5 = *(_DWORD *)((char *)&Buf1 + 5);
    *(_BYTE *)(v5 + 4) = HIBYTE(Buf1);
    *(_WORD *)(v5 + 6) = WORD1(Buf1);
    *(_BYTE *)(v5 + 5) = 47;
    *(_BYTE *)(v5 + 8) = 0;
  }
  else
  {
    *(_BYTE *)v5 = 0;
    return 0;
  }
  return result;
}
