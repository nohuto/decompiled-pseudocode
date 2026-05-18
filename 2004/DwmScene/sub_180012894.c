/*
 * XREFs of sub_180012894 @ 0x180012894
 * Callers:
 *     sub_180010E78 @ 0x180010E78 (sub_180010E78.c)
 *     sub_18003EFE0 @ 0x18003EFE0 (sub_18003EFE0.c)
 *     sub_1800B5E98 @ 0x1800B5E98 (sub_1800B5E98.c)
 *     sub_1800E4434 @ 0x1800E4434 (sub_1800E4434.c)
 * Callees:
 *     sub_180010B0C @ 0x180010B0C (sub_180010B0C.c)
 */

__int64 __fastcall sub_180012894(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // r11
  _QWORD *v6; // r10
  _QWORD *v7; // rdx
  _QWORD *i; // rcx

  v4 = (a1[1] - *a1) >> 4;
  v5 = sub_180010B0C((__int64)a1, a2);
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
  return sub_1800125E4(a1, (__int64)v5, v4, a2);
}
