/*
 * XREFs of sub_18006B820 @ 0x18006B820
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D5DBC @ 0x1800D5DBC (sub_1800D5DBC.c)
 */

__int64 __fastcall sub_18006B820(__int64 a1)
{
  __int64 result; // rax

  result = sub_1800D5DBC(*(_QWORD *)(a1 + 440));
  ++*(_QWORD *)(a1 + 480);
  return result;
}
