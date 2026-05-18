/*
 * XREFs of sub_1800D5BC0 @ 0x1800D5BC0
 * Callers:
 *     sub_18009C450 @ 0x18009C450 (sub_18009C450.c)
 *     sub_1800F921C @ 0x1800F921C (sub_1800F921C.c)
 * Callees:
 *     sub_1800D5A78 @ 0x1800D5A78 (sub_1800D5A78.c)
 */

__int64 *__fastcall sub_1800D5BC0(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  if ( !*(_BYTE *)(a1 + 184) || *(_BYTE *)(a1 + 185) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_1800D5A78(a1, a2, *(_QWORD *)(a1 + 192), a3, a4);
  }
  return a2;
}
