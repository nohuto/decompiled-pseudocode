/*
 * XREFs of sub_180002618 @ 0x180002618
 * Callers:
 *     sub_1800024F8 @ 0x1800024F8 (sub_1800024F8.c)
 * Callees:
 *     sub_180015170 @ 0x180015170 (sub_180015170.c)
 *     sub_180035F74 @ 0x180035F74 (sub_180035F74.c)
 *     j_j_free @ 0x1800460D8 (j_j_free.c)
 *     sub_1800460E4 @ 0x1800460E4 (sub_1800460E4.c)
 */

__int64 __fastcall sub_180002618(
        int a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rsi
  __int64 v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rdi
  int v17; // edi

  v10 = a2;
  v13 = sub_1800460E4(saturated_mul(a2, 0x18uLL));
  v14 = (_QWORD *)v13;
  if ( v13 )
    sub_180035F74(v13, 24LL, a2, sub_18003B2C0);
  else
    v14 = 0LL;
  if ( v14 )
  {
    if ( a2 )
    {
      v15 = v14;
      v16 = a3 - (_QWORD)v14;
      do
      {
        *(_OWORD *)v15 = *(_OWORD *)((char *)v15 + v16);
        v15[2] = *(_QWORD *)((char *)v15 + v16 + 16);
        v15 += 3;
        --v10;
      }
      while ( v10 );
    }
    v17 = sub_180015170(a1, 0, a2, (_DWORD)v14, a4, a5, a6, a7, a8, 0LL);
    if ( v17 >= 0 )
      v17 = 0;
    j_j_free(v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v17;
}
