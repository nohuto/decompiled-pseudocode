/*
 * XREFs of RtlIntegerToUnicode @ 0x180037440
 * Callers:
 *     RtlpMuiRegTryToAppendLangId @ 0x180036AEC (RtlpMuiRegTryToAppendLangId.c)
 *     RtlConvertSidToUnicodeString @ 0x180037250 (RtlConvertSidToUnicodeString.c)
 *     RtlGetFileMUIPath @ 0x1800468F0 (RtlGetFileMUIPath.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 */

__int64 __fastcall RtlIntegerToUnicode(unsigned int a1, unsigned int a2, int a3, char *a4)
{
  unsigned int v6; // r10d
  int v8; // r11d
  int v9; // ebx
  _WORD *v10; // r9
  unsigned int v11; // ecx
  unsigned int v12; // r8d
  __int64 v13; // rbx
  bool v14; // cc
  __int64 v16; // rdx
  _WORD *v17; // rdi
  __int64 i; // rcx
  _BYTE v19[14]; // [rsp+62h] [rbp-36h] BYREF

  v6 = a2;
  switch ( a2 )
  {
    case 0xAu:
      goto LABEL_2;
    case 0u:
      v6 = 10;
LABEL_2:
      v8 = 0;
      v9 = 0;
      goto LABEL_3;
    case 0x10u:
      v8 = 4;
      break;
    case 2u:
      v8 = 1;
      break;
    case 8u:
      v8 = 3;
      break;
    default:
      return 3221225485LL;
  }
  v9 = (1 << v8) - 1;
LABEL_3:
  v10 = v19;
  do
  {
    if ( v8 )
    {
      v12 = a1 & v9;
      a1 >>= v8;
    }
    else
    {
      if ( v6 == 10 )
      {
        v11 = a1 / 0xA;
        v12 = a1 % 0xA;
      }
      else
      {
        v12 = a1 % v6;
        v11 = a1 / v6;
      }
      a1 = v11;
    }
    *--v10 = RtlpIntegerWChars[v12];
  }
  while ( a1 );
  v13 = (v19 - (_BYTE *)v10) >> 1;
  if ( a3 >= 0 )
    goto LABEL_10;
  a3 = -a3;
  v14 = (int)v13 <= a3;
  if ( (int)v13 < a3 )
  {
    v16 = (unsigned int)(a3 - v13);
    v17 = a4;
    for ( i = v16; i; --i )
      *v17++ = 48;
    a3 = (v19 - (_BYTE *)v10) >> 1;
    a4 += 2 * v16;
LABEL_10:
    v14 = (int)v13 <= a3;
  }
  if ( !v14 )
    return 2147483653LL;
  memmove(a4, v10, 2LL * (unsigned int)v13);
  if ( (int)v13 < a3 )
    *(_WORD *)&a4[2 * (unsigned int)v13] = 0;
  return 0LL;
}
