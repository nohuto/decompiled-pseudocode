/*
 * XREFs of sub_1800CFC70 @ 0x1800CFC70
 * Callers:
 *     sub_180064E14 @ 0x180064E14 (sub_180064E14.c)
 * Callees:
 *     sub_1800CFB18 @ 0x1800CFB18 (sub_1800CFB18.c)
 */

__int64 __fastcall sub_1800CFC70(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1800CFB18((_QWORD *)a1, a2);
  *(_WORD *)(a1 + 184) = 257;
  result = a1;
  *(_QWORD *)(a1 + 192) = 1LL;
  return result;
}
