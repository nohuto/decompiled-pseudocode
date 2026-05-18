/*
 * XREFs of sub_180012974 @ 0x180012974
 * Callers:
 *     sub_180010F58 @ 0x180010F58 (sub_180010F58.c)
 *     sub_1800448B0 @ 0x1800448B0 (sub_1800448B0.c)
 *     sub_1800BB768 @ 0x1800BB768 (sub_1800BB768.c)
 *     sub_1800E9D04 @ 0x1800E9D04 (sub_1800E9D04.c)
 * Callees:
 *     sub_180010BEC @ 0x180010BEC (sub_180010BEC.c)
 */

__int64 __fastcall sub_180012974(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // r11
  _QWORD *v6; // r10
  _QWORD *v7; // rdx
  _QWORD *i; // rcx

  v4 = (a1[1] - *a1) >> 4;
  v5 = sub_180010BEC((__int64)a1, a2);
  v6 = (_QWORD *)a1[1];
  v7 = (_QWORD *)*a1;
  for ( i = v5; v7 != v6; v7 += 2 )
  {
    *i = 0LL;
    i[1] = 0LL;
    *i = *v7;
    i[1] = v7[1];
    *v7 = 0LL;
    v7[1] = 0LL;
    i += 2;
  }
  return sub_1800126C4(a1, (__int64)v5, v4, a2);
}
