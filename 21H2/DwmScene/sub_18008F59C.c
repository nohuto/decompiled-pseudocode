/*
 * XREFs of sub_18008F59C @ 0x18008F59C
 * Callers:
 *     sub_18008F39C @ 0x18008F39C (sub_18008F39C.c)
 *     sub_1800CB96C @ 0x1800CB96C (sub_1800CB96C.c)
 *     sub_180110DFC @ 0x180110DFC (sub_180110DFC.c)
 *     sub_1801210EC @ 0x1801210EC (sub_1801210EC.c)
 * Callees:
 *     sub_18008A568 @ 0x18008A568 (sub_18008A568.c)
 *     sub_18008F1C8 @ 0x18008F1C8 (sub_18008F1C8.c)
 */

void __fastcall sub_18008F59C(__int64 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 *v7; // rcx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int64 *i; // rbx

  v5 = a1[1];
  v7 = (unsigned __int64 *)*a1;
  v8 = (__int64)(v5 - (_QWORD)v7) >> 3;
  if ( a2 <= v8 )
  {
    i = &v7[a2];
    sub_18008A568(v7, (unsigned __int64)i, a3);
  }
  else
  {
    if ( a2 <= (a1[2] - (__int64)v7) >> 3 )
    {
      sub_18008A568(v7, v5, a3);
    }
    else
    {
      sub_18008F1C8(a1, a2);
      v8 = 0LL;
    }
    v9 = a2 - v8;
    for ( i = (unsigned __int64 *)a1[1]; v9; --v9 )
      *i++ = *a3;
  }
  a1[1] = (__int64)i;
}
