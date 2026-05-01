/*
 * XREFs of sub_18006D504 @ 0x18006D504
 * Callers:
 *     sub_180068544 @ 0x180068544 (sub_180068544.c)
 *     sub_180068B10 @ 0x180068B10 (sub_180068B10.c)
 *     sub_18006D5A8 @ 0x18006D5A8 (sub_18006D5A8.c)
 *     sub_18006F310 @ 0x18006F310 (sub_18006F310.c)
 * Callees:
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_18006D448 @ 0x18006D448 (sub_18006D448.c)
 *     sub_18006D660 @ 0x18006D660 (sub_18006D660.c)
 *     sub_1800704C8 @ 0x1800704C8 (sub_1800704C8.c)
 */

__int64 __fastcall sub_18006D504(_QWORD *P, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  _QWORD *i; // rsi
  _OWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx

  v4 = P[6];
  sub_18006D448(v4, (__int64)P, a3, a4);
  for ( i = P + 10; (_QWORD *)*i != i; sub_18006D660(v4, *i - 104LL, 0LL) )
    ;
  v7 = P + 8;
  v8 = P[8];
  if ( *(_QWORD **)(v8 + 8) != P + 8 || (v9 = (_QWORD *)P[9], (_OWORD *)*v9 != v7) )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  *v7 = 0LL;
  sub_1800265B0((char *)P);
  sub_1800704C8(v4 + 24, P);
  sub_1800265B0((char *)P);
  return sub_180040E64(v4);
}
