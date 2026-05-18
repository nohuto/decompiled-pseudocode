/*
 * XREFs of sub_180003A20 @ 0x180003A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180061CF8 @ 0x180061CF8 (sub_180061CF8.c)
 */

__int64 sub_180003A20()
{
  __int64 result; // rax

  result = sub_180061CF8();
  qword_18021FAE8 = result;
  return result;
}
