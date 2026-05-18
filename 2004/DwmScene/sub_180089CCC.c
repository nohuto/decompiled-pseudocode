/*
 * XREFs of sub_180089CCC @ 0x180089CCC
 * Callers:
 *     sub_180089ACC @ 0x180089ACC (sub_180089ACC.c)
 *     sub_1800C609C @ 0x1800C609C (sub_1800C609C.c)
 *     sub_18010B52C @ 0x18010B52C (sub_18010B52C.c)
 *     sub_18011B81C @ 0x18011B81C (sub_18011B81C.c)
 * Callees:
 *     sub_180084C98 @ 0x180084C98 (sub_180084C98.c)
 *     sub_1800898F8 @ 0x1800898F8 (sub_1800898F8.c)
 */

void __fastcall sub_180089CCC(__int64 *a1, unsigned __int64 a2, unsigned __int64 *a3)
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
    sub_180084C98(v7, (unsigned __int64)i, a3);
  }
  else
  {
    if ( a2 <= (a1[2] - (__int64)v7) >> 3 )
    {
      sub_180084C98(v7, v5, a3);
    }
    else
    {
      sub_1800898F8(a1, a2);
      v8 = 0LL;
    }
    v9 = a2 - v8;
    for ( i = (unsigned __int64 *)a1[1]; v9; --v9 )
      *i++ = *a3;
  }
  a1[1] = (__int64)i;
}
