/*
 * XREFs of sub_18006D660 @ 0x18006D660
 * Callers:
 *     sub_1800688D8 @ 0x1800688D8 (sub_1800688D8.c)
 *     sub_180068C98 @ 0x180068C98 (sub_180068C98.c)
 *     sub_18006D300 @ 0x18006D300 (sub_18006D300.c)
 *     sub_18006D504 @ 0x18006D504 (sub_18006D504.c)
 *     sub_18006D5A8 @ 0x18006D5A8 (sub_18006D5A8.c)
 *     sub_18006F640 @ 0x18006F640 (sub_18006F640.c)
 *     sub_18006FDC0 @ 0x18006FDC0 (sub_18006FDC0.c)
 * Callees:
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_180040E64 @ 0x180040E64 (sub_180040E64.c)
 *     sub_18006CB24 @ 0x18006CB24 (sub_18006CB24.c)
 *     sub_1800704C8 @ 0x1800704C8 (sub_1800704C8.c)
 */

char __fastcall sub_18006D660(__int64 a1, __int64 a2, char a3)
{
  _OWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  char result; // al

  sub_18006CB24(a1, a2);
  v6 = (_OWORD *)(a2 + 72);
  v7 = *(_QWORD *)(a2 + 72);
  if ( *(_QWORD *)(v7 + 8) != a2 + 72 || (v8 = *(_QWORD **)(a2 + 80), (_OWORD *)*v8 != v6) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  *v6 = 0LL;
  sub_1800265B0((char *)a2);
  sub_1800704C8(a1 + 48, a2);
  result = sub_1800265B0((char *)a2);
  if ( (a3 & 1) != 0 )
    return sub_180040E64(a1);
  return result;
}
