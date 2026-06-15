/*
 * XREFs of sub_18002FC9C @ 0x18002FC9C
 * Callers:
 *     sub_18002FB9C @ 0x18002FB9C (sub_18002FB9C.c)
 * Callees:
 *     sub_180009868 @ 0x180009868 (sub_180009868.c)
 *     sub_180009F20 @ 0x180009F20 (sub_180009F20.c)
 *     sub_18002F844 @ 0x18002F844 (sub_18002F844.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

void __fastcall sub_18002FC9C(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 *v5; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // r8
  unsigned __int64 v13; // rdx
  char *v14; // rcx
  SIZE_T v15; // rcx
  unsigned __int64 *v16; // rdx
  unsigned __int64 i; // rdi
  unsigned __int64 v18; // rbx

  v5 = *(unsigned __int64 **)a1;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v5) >> 3;
  if ( a2 <= v7 )
  {
    v18 = (unsigned __int64)&v5[a2];
    sub_18002F844(v5, v18, a3);
    *(_QWORD *)(a1 + 8) = v18;
    return;
  }
  v8 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v5) >> 3;
  if ( a2 > v8 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      sub_180009868();
    v9 = v8 >> 1;
    if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < a2 )
        v10 = a2;
    }
    else
    {
      v10 = a2;
    }
    v7 = 0LL;
    if ( !v5 )
      goto LABEL_13;
    v11 = 8 * v8;
    if ( v11 < 0x1000 )
    {
LABEL_12:
      sub_180039D98(v5);
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
LABEL_13:
      v15 = 8 * v10;
      if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
        v15 = -1LL;
      v16 = sub_180009F20(v15);
      *(_QWORD *)a1 = v16;
      *(_QWORD *)(a1 + 8) = v16;
      *(_QWORD *)(a1 + 16) = &v16[v10];
      goto LABEL_18;
    }
    v12 = (unsigned __int64 *)*(v5 - 1);
    v13 = v11 + 39;
    v14 = (char *)((char *)v5 - (char *)v12);
    if ( (unsigned __int64)(v14 - 8) <= 0x1F )
    {
      v5 = v12;
      goto LABEL_12;
    }
    o__invalid_parameter_noinfo_noreturn(v14, v13);
    __debugbreak();
  }
  sub_18002F844(v5, *(_QWORD *)(a1 + 8), a3);
  v16 = *(unsigned __int64 **)(a1 + 8);
LABEL_18:
  for ( i = a2 - v7; i; --i )
    *v16++ = *a3;
  *(_QWORD *)(a1 + 8) = v16;
}
