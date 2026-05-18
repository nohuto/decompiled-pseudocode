/*
 * XREFs of sub_1800729EC @ 0x1800729EC
 * Callers:
 *     sub_1800727E0 @ 0x1800727E0 (sub_1800727E0.c)
 *     sub_1800729EC @ 0x1800729EC (sub_1800729EC.c)
 *     sub_18008A128 @ 0x18008A128 (sub_18008A128.c)
 *     sub_18012B6EE @ 0x18012B6EE (sub_18012B6EE.c)
 * Callees:
 *     sub_1800729EC @ 0x1800729EC (sub_1800729EC.c)
 *     sub_180077A70 @ 0x180077A70 (sub_180077A70.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800729EC(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_1800729EC(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_180077A70(v6 + 4);
  }
  return result;
}
