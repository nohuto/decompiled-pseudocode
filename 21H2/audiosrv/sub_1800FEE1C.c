/*
 * XREFs of sub_1800FEE1C @ 0x1800FEE1C
 * Callers:
 *     sub_1800615D4 @ 0x1800615D4 (sub_1800615D4.c)
 *     sub_1800FF6F8 @ 0x1800FF6F8 (sub_1800FF6F8.c)
 * Callees:
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800FBE80 @ 0x1800FBE80 (sub_1800FBE80.c)
 */

_QWORD *__fastcall sub_1800FEE1C(__int64 *a1, _QWORD *a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rax

  v2 = (__int64 *)*a1;
  if ( !*a1 )
    sub_1800B8610(-2147467259);
  sub_180048790(a2, v2[2]);
  v5 = *v2;
  *a1 = *v2;
  if ( v5 )
    *(_QWORD *)(v5 + 8) = 0LL;
  else
    a1[1] = 0LL;
  sub_1800FBE80((__int64)a1, v2);
  return a2;
}
