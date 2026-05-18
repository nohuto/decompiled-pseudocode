/*
 * XREFs of sub_1800F6100 @ 0x1800F6100
 * Callers:
 *     sub_1800FB430 @ 0x1800FB430 (sub_1800FB430.c)
 * Callees:
 *     sub_180020F10 @ 0x180020F10 (sub_180020F10.c)
 */

__int64 __fastcall sub_1800F6100(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // r10
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx

  v4 = (a1[1] - *a1) >> 3;
  v5 = sub_180020F10((__int64)a1, a2);
  v6 = (_QWORD *)a1[1];
  v7 = (_QWORD *)*a1;
  v8 = v5;
  while ( v7 != v6 )
    *v8++ = *v7++;
  return sub_180020A38(a1, (__int64)v5, v4, a2);
}
