/*
 * XREFs of sub_1800D0A6C @ 0x1800D0A6C
 * Callers:
 *     sub_1800D0A6C @ 0x1800D0A6C (sub_1800D0A6C.c)
 *     sub_1800D0D94 @ 0x1800D0D94 (sub_1800D0D94.c)
 *     sub_180113C98 @ 0x180113C98 (sub_180113C98.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_1800D0A6C @ 0x1800D0A6C (sub_1800D0A6C.c)
 */

__int64 __fastcall sub_1800D0A6C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi
  __int64 v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*(_BYTE *)(i + 25); result = sub_1800472E0(v6, 0x30uLL) )
  {
    sub_1800D0A6C(a1, a2, *(_QWORD *)(i + 16));
    v6 = i;
    i = *(_QWORD *)i;
    sub_1800461B8((__int64 *)(v6 + 40));
  }
  return result;
}
