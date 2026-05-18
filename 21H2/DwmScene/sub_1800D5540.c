/*
 * XREFs of sub_1800D5540 @ 0x1800D5540
 * Callers:
 *     sub_18006A6E4 @ 0x18006A6E4 (sub_18006A6E4.c)
 * Callees:
 *     sub_1800D53E8 @ 0x1800D53E8 (sub_1800D53E8.c)
 */

__int64 __fastcall sub_1800D5540(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1800D53E8((_QWORD *)a1, a2);
  *(_WORD *)(a1 + 184) = 257;
  result = a1;
  *(_QWORD *)(a1 + 192) = 1LL;
  return result;
}
