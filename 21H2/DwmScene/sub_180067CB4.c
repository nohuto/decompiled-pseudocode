/*
 * XREFs of sub_180067CB4 @ 0x180067CB4
 * Callers:
 *     sub_180068114 @ 0x180068114 (sub_180068114.c)
 * Callees:
 *     sub_1800D14B0 @ 0x1800D14B0 (sub_1800D14B0.c)
 *     sub_1800D14C8 @ 0x1800D14C8 (sub_1800D14C8.c)
 */

__int64 __fastcall sub_180067CB4(unsigned int *a1, unsigned int *a2)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax

  v3 = -*((_QWORD *)a1 + 1);
  v5 = sub_1800D14C8(a1);
  sub_1800D14B0(v5, *a1, 2LL, v3);
  v6 = *a2;
  *a1 = *a2;
  v7 = *((_QWORD *)a2 + 1);
  *((_QWORD *)a1 + 1) = v7;
  v9 = sub_1800D14C8(v8);
  return sub_1800D14B0(v9, v6, 2LL, v7);
}
