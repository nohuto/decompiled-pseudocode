/*
 * XREFs of sub_1800034B0 @ 0x1800034B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180061CF8 @ 0x180061CF8 (sub_180061CF8.c)
 */

__int64 sub_1800034B0()
{
  __int64 result; // rax

  result = sub_180061CF8();
  qword_18021F7A0 = result;
  return result;
}
