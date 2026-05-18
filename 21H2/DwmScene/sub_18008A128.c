/*
 * XREFs of sub_18008A128 @ 0x18008A128
 * Callers:
 *     sub_180084808 @ 0x180084808 (sub_180084808.c)
 * Callees:
 *     sub_1800729EC @ 0x1800729EC (sub_1800729EC.c)
 *     sub_180077A70 @ 0x180077A70 (sub_180077A70.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18008A128(_QWORD *a1)
{
  _QWORD *v1; // rdi
  __int64 *v3; // r14
  __int64 *v4; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  v3 = *(__int64 **)(*a1 + 8LL);
  while ( !*((_BYTE *)v3 + 25) )
  {
    sub_1800729EC((__int64)a1, (__int64)a1, (__int64 *)v3[2]);
    v4 = v3;
    v3 = (__int64 *)*v3;
    sub_180077A70(v4 + 4);
    result = j_j__o_free(v4);
  }
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
