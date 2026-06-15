/*
 * XREFs of sub_180103778 @ 0x180103778
 * Callers:
 *     sub_180102A80 @ 0x180102A80 (sub_180102A80.c)
 *     sub_180103040 @ 0x180103040 (sub_180103040.c)
 *     sub_180104244 @ 0x180104244 (sub_180104244.c)
 *     sub_180113900 @ 0x180113900 (sub_180113900.c)
 *     sub_180113A88 @ 0x180113A88 (sub_180113A88.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BBCBC @ 0x1800BBCBC (sub_1800BBCBC.c)
 */

__int64 __fastcall sub_180103778(__int64 *a1)
{
  __int64 *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rbx

  v1 = (__int64 *)*a1;
  if ( !*a1 )
    sub_1800B8610(-2147467259);
  v2 = *v1;
  v3 = v1[2];
  *a1 = *v1;
  if ( v2 )
    *(_QWORD *)(v2 + 8) = 0LL;
  else
    a1[1] = 0LL;
  sub_1800BBCBC((__int64)a1, v1);
  return v3;
}
