/*
 * XREFs of sub_180081F90 @ 0x180081F90
 * Callers:
 *     sub_180083328 @ 0x180083328 (sub_180083328.c)
 *     sub_1801073B4 @ 0x1801073B4 (sub_1801073B4.c)
 *     sub_180107484 @ 0x180107484 (sub_180107484.c)
 * Callees:
 *     sub_1800828B4 @ 0x1800828B4 (sub_1800828B4.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_180081F90(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  if ( a2 > 0x100 )
  {
    v4 = 0x7FFFFFFFFFFFFFFFLL;
    if ( a2 != 0x7FFFFFFFFFFFFFFFLL )
      v4 = a2;
    sub_1800828B4(&v7, v4);
    if ( v8 <= 0x100 )
    {
      j__o_free(v7);
      v5 = a1 + 2;
      a1[1] = 256LL;
    }
    else
    {
      v5 = v7;
      a1[1] = v8;
    }
    *a1 = v5;
  }
  else
  {
    a1[1] = a2;
    *a1 = a1 + 2;
  }
  return a1;
}
