/*
 * XREFs of sub_180137A98 @ 0x180137A98
 * Callers:
 *     sub_180137DD0 @ 0x180137DD0 (sub_180137DD0.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180137DB0 @ 0x180137DB0 (sub_180137DB0.c)
 */

_QWORD *__fastcall sub_180137A98(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rax

  v2 = a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    sub_180137DB0();
  v4 = *a1;
  v5 = (a1[2] - v4) >> 3;
  v6 = v5 >> 1;
  if ( v5 <= 0x1FFFFFFFFFFFFFFFLL - (v5 >> 1) )
  {
    v7 = v6 + v5;
    if ( v6 + v5 < v2 )
      v7 = v2;
    v2 = v7;
  }
  if ( v4 )
  {
    sub_1800472E0(v4, 8 * v5);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return sub_180038BCC(a1, v2);
}
