/*
 * XREFs of ReadStringDelimited @ 0x18009554C
 * Callers:
 *     _input_l @ 0x1800956F0 (_input_l.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     ReadString @ 0x180095384 (ReadString.c)
 */

__int64 __fastcall ReadStringDelimited(
        char a1,
        unsigned __int8 **a2,
        int *a3,
        _DWORD *a4,
        _QWORD *SrcCh,
        int a6,
        FILE *Stream,
        _DWORD *a8)
{
  unsigned __int8 *v9; // r8
  unsigned __int8 v10; // r10
  char v12; // bl
  unsigned __int8 *v14; // rax
  bool v15; // zf
  unsigned __int8 *v16; // r8
  unsigned __int8 i; // al
  unsigned __int8 v18; // cl
  unsigned __int8 v19; // r11
  unsigned __int8 v20; // r9
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  int v23; // ecx
  int v25[4]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v26; // [rsp+50h] [rbp-48h]

  v9 = *a2;
  v10 = 0;
  v12 = a1 | 8;
  v14 = *a2 + 1;
  *a2 = v14;
  v15 = *v14 == 94;
  *(_OWORD *)v25 = 0LL;
  if ( !v15 )
  {
    v14 = v9;
    v12 = a1;
  }
  v26 = 0LL;
  v16 = v14 + 1;
  i = v14[1];
  if ( i != 93 )
    goto LABEL_5;
  v10 = 93;
  HIBYTE(v25[2]) = 32;
  for ( i = *++v16; i != 93; i = *v16 )
  {
LABEL_5:
    if ( i == 45 && v10 && (v18 = v16[1], v18 != 93) )
    {
      v19 = v16[1];
      v20 = v10;
      if ( v10 >= v18 )
      {
        v19 = v10;
        v20 = v16[1];
      }
      while ( v20 <= v19 )
      {
        *((_BYTE *)v25 + ((unsigned __int64)v20 >> 3)) |= 1 << (v20 & 7);
        ++v20;
      }
      v10 = 0;
      v21 = 2LL;
    }
    else
    {
      v10 = i;
      v22 = (unsigned __int64)i >> 3;
      v23 = *((char *)v25 + v22) | (1 << (i & 7));
      v21 = 1LL;
      *((_BYTE *)v25 + v22) = v23;
    }
    v16 += v21;
  }
  *a2 = v16;
  return ReadString(v12, (__int64)v25, a3, a4, SrcCh, a6, Stream, a8);
}
