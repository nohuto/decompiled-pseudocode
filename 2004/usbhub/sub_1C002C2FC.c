/*
 * XREFs of sub_1C002C2FC @ 0x1C002C2FC
 * Callers:
 *     sub_1C0030CB0 @ 0x1C0030CB0 (sub_1C0030CB0.c)
 *     sub_1C003FF9C @ 0x1C003FF9C (sub_1C003FF9C.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

__int64 __fastcall sub_1C002C2FC(__int64 a1, __int64 a2, __m128 *a3, unsigned int a4, __int32 *a5)
{
  __int64 v5; // rdi
  _DWORD *v9; // rbp
  unsigned __int64 v10; // r12
  _WORD *v12; // rax
  unsigned int v13; // edi
  _WORD *v14; // rdi
  __int16 v15; // ax
  unsigned int v16; // ebx
  unsigned __int64 v17; // r8
  char *v18; // rcx
  __int32 v19; // ebx

  v5 = a4;
  sub_1C000F050(a1);
  v9 = sub_1C0011220(a2);
  v10 = (unsigned int)v5;
  sub_1C000FD80(a1, 8, 1735290430, (__int64)a3, v5);
  *a5 = 0;
  if ( !a3 )
    return 3221225485LL;
  if ( (unsigned int)v5 < 6 )
    return 3221225507LL;
  if ( (v9[355] & 0xC) == 0xC )
  {
    v12 = (_WORD *)*((_QWORD *)v9 + 151);
    v13 = 0;
    if ( *v12 == 92 )
    {
      v14 = v12 + 1;
      v15 = v12[1];
      if ( v15 == 92 )
        goto LABEL_11;
      do
      {
        if ( !v15 )
          break;
        v15 = *++v14;
      }
      while ( *v14 != 92 );
      if ( *v14 == 92 )
LABEL_11:
        LODWORD(v14) = (_DWORD)v14 + 2;
      v13 = (_DWORD)v14 - v9[302];
    }
    v16 = *((unsigned __int16 *)v9 + 600) - v13;
    sub_1C001D340(a3, 0, v10);
    v17 = v16;
    v18 = &a3->m128_i8[4];
    v19 = v16 + 6;
    if ( v10 < v17 + 6 )
    {
      a3->m128_i32[0] = v19;
      *(_WORD *)v18 = 0;
      *a5 = 6;
    }
    else
    {
      sub_1C001D080(v18, (char *)(*((_QWORD *)v9 + 151) + 2 * ((unsigned __int64)v13 >> 1)), v17);
      *a5 = v19;
      a3->m128_i32[0] = v19;
    }
  }
  else
  {
    a3->m128_i32[0] = 6;
    a3->m128_i16[2] = 0;
    *a5 = 6;
  }
  sub_1C000FD80(a1, 8, 1735290428, (unsigned int)*a5, 0LL);
  return 0LL;
}
